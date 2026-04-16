
🧠 1. Crear una clase en Python (como la de “Persona”)

Ese código que tenés es una clase básica. Se hace así:

class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def saludar(self):
        return f"Hola, mi nombre es {self.nombre} y tengo {self.edad} años."
🔹 Crear objetos (personas)
pilar= Persona("pilar", 21)
pili = Persona("pili, 21)
🔹 Mostrar en pantalla
print(pili.saludar())
print(pilisaludar())

👉 Eso es lo que te muestra:

Hola, mi nombre es pilary tengo 21 años.
Hola, mi nombre es piliy tengo 21 años.
🎮 2. Juego de adivinar número (el otro programa)

Ese que dice “Demasiado alto/bajo” se hace así:

import random

numero = random.randint(1, 100)
intentos = 0

while True:
    entrada = input("¿Cuál es tu suposición? (o escribe 'salir'): ")

    if entrada == "salir":
        break

    intento = int(entrada)
    intentos += 1

    if intento < numero:
        print("Demasiado bajo, intenta de nuevo.")
    elif intento > numero:
        print("Demasiado alto, intenta de nuevo.")
    else:
        print(f"¡EXCELENTE! Adivinaste en {intentos} intentos.")
        break
💻 3. Cómo ejecutarlo (lo que hacés en la terminal)

En tu terminal estás usando algo así:

python3 clases.py

o

python saludoPersonalizado.py

👉 Pasos:

Guardás el archivo (por ejemplo clases.py)
Abrís la terminal en esa carpeta
Ejecutás:
python3 clases.py
🧱 4. Estructura de tu proyecto (como en tu VS Code)

Podés tener algo así:

prograRobotica/
│
├── clases.py
├── saludoPersonalizado.py
├── juego.py
├── requirements.txt


🔹 Instalar Visual Studio Code
