# Lab 2 - Sistemas Operativos

## Actividad 1

Se creó una variable entera y un puntero que guarda su dirección de memoria.
El puntero se utilizó para modificar el valor de la variable de forma indirecta.

Resultado:

```text
Valor inicial: 10
Nuevo valor: 25
```
La dirección de la variable no cambió después de modificar su valor.

## Actividad 2

Se trabajó con un puntero y una referencia sobre la misma variable.
Primero se modificó el valor usando el puntero y luego usando la referencia.

Resultado:
```text
Valor inicial: 10
Valor despues de modificar con puntero: 20
Valor despues de modificar con referencia: 30
```

La variable, el puntero y la referencia apuntaban a la misma dirección de memoria.

## Actividad 3

Se creó un arreglo de enteros y se utilizó un puntero para recorrerlo y modificar uno de sus valores.

El tercer valor cambió de:

```text
30
```
a:
```text
100
```

También se comprobó que el puntero apuntaba al inicio.

## Extra - Stack, Heap y Text/Code

Se imprimieron direcciones de memoria de diferentes regiones:
```text
TEXT / CODE
main: 0x400a4c
a_function: 0x400a44

HEAP
0x432eb0

STACK
0x7a1f2e195264
```
Las funciones `main` y `a_function` aparecen en la región de código.
La memoria creada con `new` aparece en el `heap`.
La variable local aparece en el `stack`.

## Archivos

- `actividad1.cpp`
- `actividad2.cpp`
- `actividad3.cpp`
- `extra.cpp`
