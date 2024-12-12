
# Código para Sumar Dos Números

Este programa en C++ permite realizar la suma de dos números mediante una función y muestra el resultado en la consola.

## Descripción del Código

### Estructura General

1. **Declaración de una función**:
   - `suma(int a, int b)`
     - Esta función toma dos argumentos de tipo `int` y devuelve su suma.

2. **Función principal (`main`)**:
   - Declara e inicializa dos variables enteras (`num1` y `num2`).
   - Llama a la función `suma` pasando estas dos variables como argumentos y almacena el resultado.
   - Imprime el resultado en la consola utilizando `cout`.

### Detalles del Código

- Se usa la biblioteca `<iostream>` para manejar la entrada y salida de datos.
- La función `suma` encapsula la lógica de la suma para mejorar la claridad y modularidad del código.
- Las variables `num1` y `num2` se inicializan directamente en el programa con los valores `5` y `7`, respectivamente.

### Flujo de Ejecución

1. El programa inicializa los valores de las variables `num1` y `num2`.
2. Llama a la función `suma` para calcular la suma de estos valores.
3. Muestra el resultado de la suma en la consola con un mensaje descriptivo.

## Ejemplo de Ejecución

**Salida en Consola:**

```
La suma de 5 y 7 es: 12
```

## Uso

Para compilar y ejecutar este programa:

1. Guarda el código en un archivo con extensión `.cpp`, por ejemplo, `sumaNumeros.cpp`.
2. Usa un compilador de C++, como `g++`, para compilar el programa:
   ```
   g++ sumaNumeros.cpp -o sumaNumeros
   ```
3. Ejecuta el programa:
   ```
   ./sumaNumeros
   ```

## Notas

- Los valores de `num1` y `num2` están fijados en el código como `5` y `7`. Para realizar la suma de otros números, modifica estos valores antes de compilar el programa.
- Este programa es una demostración básica del uso de funciones y de la modularidad en la programación en C++.
