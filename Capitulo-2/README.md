# Capítulo 2: Tipos, operadores y expresiones

#### 2.1 Nombres de variables [N/A]

### 2.2 Tipos y tamaños de datos
+ [**Ejemplo: `char`, `int`, `float` & `double`**](/Capitulo-2/dataTypes.c)

### 2.3 Constantes
+ [**Ejemplo: `Notación Científica`, `long`, `Octales`, `Hexadecimales`, `carácter`**](/Capitulo-2/Constant.c)
+ [**Ejemplo: String length**](/Capitulo-2/stringLength.c) La siguiente función `strlen(s)`, devuelve la longitud de una cadena de caracteres `s`, excluyendo el final `\0`.

#### 2.4 Declaraciones [N/A]

### 2.5 Operadores aritméticos
+ [**Ejemplo: Año bisiesto**](/Capitulo-2/leapYear.c) Un año es bisiesto si es divisible entre `4` pero no entre `100`, excepto los años que son divisibles entre `400`, que **sí son** años bisiestos.

### 2.6 Operadores relacionales y lógicos
+ [**Ejercicio 2-1: Línea más larga v4**](/Capitulo-2/maxLine4.c) Escribe una iteración equivalente al ciclo `for` anterior sin emplear `&&`.

### 2.7 Conversiones de tipos
+ [**Ejemplo: atoi**](/Capitulo-2/asciiToInt.c) La funcion `atoi`, que convierte una cadena de dígitos en su valor numérico equivalente.
+ [**Ejercicio 2-2: htoi(s)**](/Capitulo-2/hexadecimalToInt.c) Escribe una función `htoi(s)`, que convierta una cadena de dígitos hexadecimales en su valor entero correspondiente. Los dígitos permitidos son del `0` al `9`, de la `a` a la `f`, y de la `A` a la `F`.

### 2.8 Operadores de incremento y decremento
+ [**Ejemplo: squeeze**](/Capitulo-2/deleteOccurs.c) Considera la función `squeeze(s, c)` que elimina todas las ocurrencias del carácter `c` de la cadena `s`.
+ [**Ejemplo: strcat**](/Capitulo-2/stringConcat.c) La función `strcat(s, t)` que añade la cadena `t` al final de la cadena `s`.
+ [**Ejercicio 2-3: squeeze v2**](/Capitulo-2/deleteOccurs2.c) Escribe una versión alterna de `squeeze(s1, s2)` en la que se borre todo carácter de `s1` que exista en `s2`.
+ [**Ejercicio 2-4: Find first position**](/Capitulo-2/findFirstPosition.c) Escribe la función `any(s1, s2)` que devuelva como resultado la primera posición de `s1` en que aparezca cualquier carácter de `s2`, o `-1` si `s1` no contiene ningún carácter de `s2`.

### 2.9 Operadores lógicos para el manejo de bits
+ [**Ejemplo: Operadores de bits**](/Capitulo-2/bitOperators.c) `&`, `|`, `<<`, `>>`, `~`, `^`.
+ [**Ejemplo: getbits(x, p, n)**](/Capitulo-2/getBits.c) Considérese la función `getbits(x, p, n)` que devuelve, alineado a la derecha, el campo de `n` bits que comienza en la posición `p` de `x`. *El bit de posicion `0` es el situado mas a la derecha,* y `n` y `p` son valores positivos. Por ejemplo, `getbits(x, 4, 3)` devuelve los tres bits de las posiciones `4, 3, 2` alineados a la derecha.
+ [**Ejercicio 2-5: getbits v2**](/Capitulo-2/getBits2.c) Modifica `getbits` para numerar los bits de izquierda a derecha.
+ [**Ejercicio 2-6: wordlength**](/Capitulo-2/machineWordLength.c) Escribe una función `wordlength` que calcule la longitud de la palabra de la máquina, es decir, el número de bits en un `int`. La función deberá ser transportable, en el sentido de que el mismo código fuente funcione en todas las máquinas. 
+ [**Ejercicio 2-7: rigthrot(n, b)**](/Capitulo-2/rotateRight.c) Escribe la función `rigthrot(n, b)` que gira el entero `n` hacia la derecha `b` bits.
+ [**Ejercicio 2-8: invert(x, p, n)**](/Capitulo-2/invertBits.c) Escribe la función `invert(x, p, n)` que invierte (o sea cambia `1` por `0` y viceversa) `n` bits de `x`, comenzando en la posición `p` y dejando inalterado el resto.

### 2.10 Operadores y expresiones de asignación 
+ [**Ejemplo: bitcount**](/Capitulo-2/bitCount.c) La función `bitcount` cuenta el número de bits `1` en un argumento entero.
+ [**Ejercicio 2-9: bitcount v2**](/Capitulo-2/bitCount2.c) En un sistema de numeración en complemento a `2`, `x & (x - 1)` borra el bit `1` situado más a la izquierda. (¿Por qué?) Utiliza esta observación para escribir una versión más rápida de `bitcount`.

### 2.11 Expresiones condicionales 
+ [**Ejemplo: Imprime arreglo**](/Capitulo-2/printArrayFormat.c) El ciclo siguiente imprime `N` elementos de un arreglo, `10` en cada línea, con las columnas separadas por un `blanco` y terminando cada línea con un sólo carácter `nueva-línea`.
+ [**Ejercicio 2-10: MAYUSCULAS a minúsculas v2**](/Capitulo-2/toLowercase2.c) Reescribe la función `lower`, que convierte letras mayúsculas en minúsculas, mediante una `expresión condicional` en lugar de `if-else`
