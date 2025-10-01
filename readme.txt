En este documento vamos a plasmar todos los comandos basicos para practicar conceptos basicos de lenguaje en c
1. creamos un repositorio
2. creamos git en nuestra pc: git init
3. listamos las carpetas para ver que hayamos creado el init: ls -a
4. vinculamos nuestro git local con nuestro repositorio: git remote add origin https://github.com/fiemcasals/robotGesell.git
Si ya tenés un remoto configurado con otro nombre o URL, antes deberías borrarlo o modificarlo. Por ejemplo:
git remote -v       # lista los remotos configurados
git remote remove origin   # elimina el remoto actual llamado origin

Para verificar que el remoto quedó bien vinculado podés usar este comando:
git remote -v
deberia ver:
origin  https://github.com/fiemcasals/robotGesell.git (fetch)
origin  https://github.com/fiemcasals/robotGesell.git (push)

Una vez vinculado voy a empezar a generar .py


