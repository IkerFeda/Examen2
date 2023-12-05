# Examen2
Link del repositorio #https://github.com/IkerFeda/Examen2.git

#Ejercicio 1: Opción multiple

1. ¿Cuál es el propósito principal de la clase Variant en el lenguaje Tiny Lisp?
   - a) Gestionar la entrada y salida del usuario
   - b) Representar cualquier tipo de dato Lisp
   - c) Generar números aleatorios
   - d) Gestionar las operaciones de red
  - **Respuesta correcta:** b) Representar cualquier tipo de dato Lisp

2. ¿Qué representación se obtiene al utilizar el método to_string() en un objeto Variant?
   - a) Una cadena de texto que representa una instancia de Variant
   - b) Una representación binaria del objeto
   - c) Una representación hexadecimal del objeto
   - d) Un objeto JSON
  - **Respuesta correcta:** a) Una cadena de texto que representa una instancia de Variant.

3. ¿Qué función cumple el método to_json_string() en la clase Variant?
   - a) Convierte una cadena JSON en un objeto Variant
   - b) Convierte un objeto Variant a una cadena JSON
   - c) Parsea un objeto JSON a un objeto Variant
   - d) Serializa un objeto Variant en una cadena binaria
  - **Respuesta correcta:** b) Convierte un objeto Variant a una cadena JSON.

4. ¿Qué función cumple el método from_json_string() en la clase Variant?
   - a) Convierte una cadena JSON en un objeto Variant
   - b) Convierte un objeto Variant a una cadena JSON
   - c) Parsea un objeto JSON a un objeto Variant
   - d) Serializa un objeto Variant en una cadena binaria
  - **Respuesta correcta:** a) Convierte una cadena JSON en un objeto Variant.


Parte 2: Desarrollo de código
Estructura_basica.cpp: Como su nombre indica, este código implementa la estructura más básica para definir una clase "environment". El return 0 se usa para corroborar su funcionamiento.

Insertar_simbolos.cpp: Este programa más desarrollado permite insertar símbolos a través de la función insert. Utiliza la variable symbolTable para almacenar información del mapa.

NOTA IMPORTANTE: A partir de aquí, los programas utilizan #include<optional> o #include<variant>, los cuales solo están disponibles para compiladores de C++17 en adelante. Si no se cuenta con dicho compilador, el programa no funcionará. Para que funcione en este caso, se deberá utilizar la librería Boost.

Función_lookup.cpp: Implementa la función lookup para buscar símbolos dentro de la clase "environment". En combinación con insert, permite insertar y encontrar símbolos.

Gestion_errores.cpp: Como su nombre indica, gestiona y maneja errores que pueden ocurrir en el código de función_lookup.cpp. Implementa las funciones try y catch.

Clase_variant.cpp: Implementa la clase variant para establecer el uso de múltiples variables y poder realizar operaciones con ellas. En este caso, se usan las variables age, height, y name.

Expandir_funciones.cpp: Este código toma el código anterior y agrega más funciones donde se utiliza la clase variant. Se añadieron específicamente tres funciones: comprobar la existencia de la variable, remover la variable o imprimir la variable en la terminal.

Casos_de_uso.cpp: Este programa simula el rol de un programador de videojuegos e implementa, de manera simple y a pequeña escala, cómo se podría usar la clase variant en el desarrollo de videojuegos. Trata las variables PlayerHealth y PlayerSpeed, comunes en el ámbito de los videojuegos.


