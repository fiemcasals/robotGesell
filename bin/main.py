import machine            # Módulo para interactuar con el hardware (pines, sensores, etc.)
import usocket as socket  # Módulo para manejar comunicaciones de red vía sockets

# Configura el Pin 2 como salida para controlar el LED integrado del ESP8266
led = machine.Pin(2, machine.Pin.OUT)


# El LED integrado suele usar lógica inversa (1 = Apagado, 0 = Encendido)
led.value(1) 

# Define una función que devuelve el código HTML de la interfaz web
def web_page():
    html = """
    <!DOCTYPE html>
    <html>
    <head>
        <title>Control Robotica</title>
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <style>
            body { font-family: Arial; text-align: center; margin-top: 50px; }
            .btn { background-color: #e74c3c; color: white; padding: 20px 40px; 
                  font-size: 25px; border-radius: 10px; text-decoration: none; border: none; }
        </style>
    </head>
    <body>
        <h1>ESP8266 Control</h1>
        <p><a href="/action"><button class="btn">ACCIONAR LED</button></a></p>
    </body>
    </html>
    """
    return html

# Crea un socket de servidor para escuchar peticiones entrantes
s = socket.socket() 

# Vincula el socket a todas las interfaces disponibles en el puerto 80 (HTTP estándar)
s.bind(('', 80))

# Empieza a escuchar conexiones, permitiendo hasta 5 peticiones en espera
s.listen(5)

# Informa por consola que el servidor está listo
print("Servidor HTTP activo y esperando...")

# Bucle infinito para mantener el servidor funcionando continuamente
while True:
    try:
        # Acepta una nueva conexión y obtiene el objeto de conexión y la dirección del cliente
        conn, addr = s.accept()
        
        # Recibe la petición HTTP del navegador (máximo 1024 bytes) y la decodifica
        request = conn.recv(1024).decode('utf-8')
        
        # Si la URL de la petición contiene '/toggle', cambia el estado actual del LED
        if '/action' in request:
            led.value(not led.value()) 
        
        # Genera la página HTML llamando a la función definida anteriormente
        response = web_page()
        
        # Envía la cabecera HTTP indicando que la petición fue exitosa (200 OK)
        conn.send('HTTP/1.1 200 OK\nContent-Type: text/html\nConnection: close\n\n')
        
        # Envía el cuerpo de la página HTML completa al cliente
        conn.sendall(response)
        
        # Cierra la conexión una vez enviada la respuesta
        conn.close()
    except Exception as e:
        # Captura y muestra cualquier error que ocurra durante el proceso
        print("Error en conexión:", e)
        
        # Asegura que la conexión se cierre si ocurrió un error para no bloquear recursos
        if conn:
            conn.close()
