# Gonzalo_Mario_ExamenCPP

https://github.com/MarioGonzalo/Gonzalo_Mario_ExamenCPP.git

# Parte 1
## 1. C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?

a. Orientación a objetos
b. Tipado fuerte y estático
c. Soporte a la programación de bajo nivel
d. Todas las anteriores

Respuesta: d. Todas las anteriores

## 2.Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?

a. Un archivo que contiene código fuente C++
b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación
c. Un archivo que almacena las configuraciones del entorno de desarrollo
d. Un archivo que guarda los resultados de las pruebas unitarias

Respuesta: b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación

## 3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

a. Variables que almacenan un valor específico
b. Variables que almacenan la dirección de otra variable
c. Funciones que apuntan a otras funciones
d. Ninguna de las anteriores

Respuesta: d. Ninguna de las anteriores

# Parte 2

Los ejercicios de código de la parte 2 están localizados en la rama "main" dentro de carpetas que indican el número del ejercicio correspondiente

# Parte 3
## 1. La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica:

### ¿Cómo la programación orientada a objetos difiere de la programación procedimental?
En la programación orientada a objetos se es capaz de crear clases con determinados atributos y también se puede modificar la memoria mediante punteros.
### ¿Cómo C++ brinda soporte para ambos paradigmas?


## 2. Las excepciones en C++ tienen un comportamiento específico. Describe:

### ¿Qué es la propagación de una excepción?
Mediante varias palabras clave como throw o catch el programa, si ocurre una excepción, buscará un tratamiento para ella y se resolverá.
### ¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?
Se parará el programa, para evitarlo se pueden emplear la función std::terminate() o registrar una función callback, utilizando la función std:set_terminate().

## 3. La gestión de recursos es un concepto crucial en la programación. Explica:
### ¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++?
Se entiende por "Adqusición de Recursos" en c++ que estos se adquieren e inicializan durante una operación atómica (indivisible)
### ¿Por qué es importante y cómo se relaciona con la gestión de excepciones?
En el caso de que los objetos inicializados desde una función donde ocurre una excepción hayan adquirido recursos, se deben liberar antes de que el flujo de ejecución se desvíe al gestor apropiado.
