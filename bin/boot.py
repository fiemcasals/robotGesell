import network  # Importa el módulo de red para gestionar conexiones Wi-Fi
import gc       # Importa el recolector de basura para optimizar el uso de memoria RAM

# Crea una interfaz de red de tipo Access Point (Punto de Acceso)
ap = network.WLAN(network.AP_IF)  # AP_IF significa "Access Point Interface" (el ESP crea su propia red Wi-Fi)

# Activa la interfaz para que el ESP8266 empiece a emitir señal
ap.active(True)

# Configura el nombre de la red (ESSID) y la contraseña de seguridad
ap.config(essid='Robotica-ESP', password='password123')

# Imprime un mensaje de confirmación con la dirección IP asignada (por defecto 192.168.4.1)
print('Red AP Activa. IP:', ap.ifconfig()[0])

# Ejecuta la recolección de basura para liberar cualquier residuo de memoria tras la configuración
gc.collect()
