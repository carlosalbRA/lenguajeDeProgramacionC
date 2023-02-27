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
