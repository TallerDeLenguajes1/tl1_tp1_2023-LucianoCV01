# Archivo .gitignore
El archivo .gitignore permite a los desarrolladores especificar qué archivos o carpetas no deben ser rastreados por Git. Estos archivos y carpetas se ignoran en los cambios y no se agregan al repositorio. 
- ¿Por qué es conveniente incluir un archivo .gitignore?
    - Evita que archivos innecesarios se agreguen al repositorio, lo que reduce el tamaño del repositorio y mejora el rendimiento de Git.
    - Ayuda a evitar conflictos y errores al fusionar ramas o al colaborar en un proyecto con otros desarrolladores.
    - Protege archivos y datos sensibles que no deben ser compartidos, como contraseñas o claves de API.
- ¿Cuándo se debe hacer?

Es recomendable configurar el archivo .gitignore desde el inicio del proyecto, antes de hacer el primer commit. Debido a que si un archivo se le hizo commit antes de haberlo incluido en el archivo .gitignore, este no sera ignorado.
- ¿Cómo configuraría el archivo .gitignore?
    1. Crea un archivo .gitignore en la raíz de tu proyecto. 
    2. Abre el archivo .gitignore
    3. Agrega los archivos o carpetas que deseas ignorar en líneas separadas. 
    4. Guarda y cierra el archivo .gitignore
    5. Asegúrate de que el archivo .gitignore se agregue y se commit en tu repositorio Git.
## Ejercicio 3.g
"Si resolvió correctamente los apartados 1 y 2 del punto anterior notará que el resultado es el mismo."
- ¿A qué se debe? 
    
El resultado es el mismo ya que la memoria almacenada por el puntero, no es nada más que la memoria de la variable.
- ¿Qué obtiene en el punto 3? ¿Es igual a los anteriores? ¿Por qué?

Se obtiene la dirección de memoria del puntero. No es igual que los anteriores porque el puntero es una variable más, la cual ocupa un lugar en la memoria independiente de la dirección de memoria a la cual apunta.