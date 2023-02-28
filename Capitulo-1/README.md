# Capitulo 1: Introducción general

### 1.1 Comencemos
+ [**Ejercicio 1-1: Hello World !!**](/Capitulo-1/helloWorld.c) Ejecuta este programa en tu sistema. Experimenta y elimina algunas partes para ver qué mensajes de error se producen.

### 1.2 Variables y aritmética
+ [**Ejemplo: Fahrenheit a Celsius**](/Capitulo-1/fahrenheitToCelsius.c) El siguiente programa imprime la tabla de conversión de temperaturas Fahrenheit a centígrados (o Celsius) utilizando la formula: `C = (5/9)(F-32)`. A su vez en este ejemplo se cubre también el **Ejercicio 1-3:** *Modifica el programa de conversión de temperaturas de modo que se escriba un encabezado para la tabla*.
+ [**Ejercicio 1-4: Celsius a Fahrenheit**](/Capitulo-1/celsiusToFahrenheit.c) Escribe un programa para imprimir la tabla de conversión de Celsius a Fahrenheit.

### 1.3 La proposición for
+ [**Ejercicio 1-5: Fahrenheit a Celsius (orden inverso)**](/Capitulo-1/fahrenheitToCelsius3.c) Modifica el programa de conversión de temperatura para imprimir la tabla en orden inverso; es decir, desde 300 grados hasta 0. Este ejercicio ya incluye el **Tema 1.4: Constantes simbólicas**.

### 1.5 Un conjunto de programas útiles
+ [**Ejemplo: Copia la entrada en la salida**](/Capitulo-1/copyInToOut.c) A partir de `getchar` y `putchar`, se pueden escribir una extraordinaria cantidad de código útil son saber nada de E/S. El ejemplo mas sencillo es un programa que copia la entrada en la salida, carácter por carácter.
+ [**Ejemplo: Contador de caracteres**](/Capitulo-1/countCharacters.c)
+ [**Ejemplo: Contador de líneas**](/Capitulo-1/countLines.c)
+ [**Ejercicio 1-6: Contador de Blancos**](/Capitulo-1/countOthersCharacters.c) Escribe un programa para contar blancos, tabuladores y caracteres nueva-línea.
+ [**Ejercicio 1-7: Remplazar Espacios**](/Capitulo-1/replaceSpaces.c) Escribe un programa que copie su entrada a su salida, reemplazando cada cadena de uno o mas espacios por uno solo.
+ [**Ejercicio 1-8: Remplazar Tabulador y Retroceso**](/Capitulo-1/replaceCharacters.c) Escribe un programa que sustituya cada tabulador por la secuencia  de tres caracteres `>`, `retroceso`, `-`, lo que imprimirá `->`, y cada carácter de retroceso por la secuencia `<-`. Esto permitirá observar los caracteres tabulador y retroceso.
+ [**Ejemplo: Contador de líneas, palabras y caracteres**](/Capitulo-1/countWords.c)
+ [**Ejercicio 1-10: Escribe palabras**](/Capitulo-1/writeWords.c) Escribe un programa que escriba las palabras que lea (una en cada línea).
+ [**Ejercicio 1-11: Contador de palabras**](/Capitulo-1/countWords2.c) Revisa el programa que cuenta palabras para utilizar una definición mejor de “palabra”; por ejemplo, una secuencia de letras, dígitos y apóstrofos que comienza por letra.

### 1.6 Arreglos
+ [**Ejemplo: Contador de dígitos, blancos y otros**](/Capitulo-1/countOccurs.c) A continuación escribiremos un programa para contar las ocurrencias de cada digito, espacio en blanco (espacios, tabulador, fin de línea, etc.), y de los restantes caracteres.
+ [**Ejercicio 1-12: Histograma**](/Capitulo-1/wordLengthHistogram.c) Escribe un programa que imprima un histograma con la longitud de las palabras de su entrada. Lo más fácil es dibujar un histograma horizontal, pero una orientación vertical es más interesante.

### 1.7 Funciones
+ [**Ejercicio 1-13: MAYUSCULAS a minúsculas**](/Capitulo-1/toLowercase.c) Escribe un programa que convierta su entrada a minúsculas utilizando la función `lower(c)`, que devuelve `c` si `c` no es una letra, o la letra minúscula correspondiente si `c` es una letra.

### 1.8 Argumentos - llamadas por valor
+ [**Ejemplo: power v2**](/Capitulo-1/power.c) `power(x, n)` Eleva `x` a la `n-ésima` potencia; `n > 0`.

### 1.9 Arreglos de caracteres.
+ [**Ejemplo: Línea más larga**](/Capitulo-1/maxLine.c) Escribiremos un programa que lee un conjunto de líneas e imprime la de mayor longitud.
+ [**Ejercicio 1-14: Línea más larga v2**](/Capitulo-1/maxLine2.c) Revisa la rutina principal del programa de la línea mas larga para que puedas escribir correctamente la longitud de líneas arbitrariamente largas y tanto texto como sea posible.
+ [**Ejercicio 1-15: Líneas mayores a 80 caracteres**](/Capitulo-1/largerLine80.c) Escribe un programa para imprimir todas las líneas que tengan más de 80 caracteres de longitud.
+ [**Ejercicio 1-16: Limpiar líneas**](/Capitulo-1/deleteBlanks.c) Escribe un programa para eliminar los blancos y los tabuladores del final de las líneas y los tabuladores de cada línea de entrada y para borrar completamente las líneas en blanco.
+ [**Ejercicio 1-17: Invertir líneas**](/Capitulo-1/reverseLines.c) Escribe una función `reverse(s)` que invierta la cadena de caracteres `s`. Utilízala para escribir un programa que invierta la entrada, línea a línea.

### 1.10 Ambito (scope); variables externas
+ [**Ejemplo: Línea más larga v3**](/Capitulo-1/maxLine3.c) Para concretar reescribamos el programa de la línea más larga, con `line`, `save` y `max` como variables externas. Para esto se requiere cambiar las llamadas, las declaraciones y los cuerpos de las tres funciones.

### 1.11 Resumen *[PENDIENTE]*





