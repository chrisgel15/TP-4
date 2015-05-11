# Trabajo Practico Numero 4

## Entrada y Salida de Caracteres

### Preguntas y Ejercicios

1. Explique la primer expresión de la sentencia for de esta función main. ¿Qué significa la coma? ¿Es un operador?
¿Qué otra expresión equivalente existe?
    - La coma es un operador binario que evalua la primera expresion y descarta su resultado. Luego evalua la segunda y el resultado de esta es lo que termina devolviendo. En este caso la utilizamos para evaular ambas expresiones ya que el resultado devuelto no es de nuestro interes. Otra expresion similar podria ser:

    ```
    nc = ( nl = 0 )
    ```
2. ¿Por qué son necesarios los paréntesis para el expresión  ```c=getchar()?```  ¿Qué ocurriría si no los usamos?
    - Los parentesis en esa expresion son necesarios para marcar una asociatividad en las expresiones a evaluar. Si no los usamos la expresion se evaluaria de forma diferente y no obtendriamos el resultado deseado.

3. Describa la semántica y la pragmática de la sentencia  ```if ``` que está a continuación de la sentencia  ```for ```.
    - *Pragmatica*: Evaluar si termino con error o no.
    - *Semantica*: Evalua la expresion del ```if```. Invoca a la funcion ```EOF``` con ```stdin``` y luego niega. Llama a ```perror``` con "Error".

4. Describa la función perror. [K&R1988 Appendix B - Standard Library -- B.1.7 Error Functions].
    - ```perror```: Emite una señal por el flujo ```stderror```. No tiene buffer.

5. Reemplace la expresión ```!feof(stdin)``` por una equivalente. Ayuda: ```ferror```. Explique la semántica de ```feof``` y de ```ferror```. ¿Las expresiones ```!feof(stdin)``` y ```ferror(stdin)``` son mutuamente excluyentes? ¿Que pragmatica tiene en este programa?
    - ```ferror```: Determina si el flujo esta en error. Las expresiones mencionadas **no** son mutuamente excluyentes.

6. Explique el formato ```%.1f```. 
    - El ```%``` es el comienzo de una especificacion de conversion. 
    - El ```.```, separa el ancho del campo de la precision.
    - El ```1f``` indica la precision. En este caso es el numero de digitos despues del punto decimal de un valor de punto flotante.

7. ¿Por qué se aplica un *casteo* a la expresión ```nl```?
    - Se aplica para tener mas precision al ejecutar la division.

8. Ejecute el programa con el teclado como entrada y la pantalla como salida.
9. Ejecute el programa utilizando como entrada al archivo con el programa fuente, **Promediar.c**, y como salida a **estadisticas.txt**.
10. ¿Este programa funciona correctamente para cualquier entrada?
    - No funciona bien para la entrada vacia. Se resuelve utilizando el operador condicional.
    ```
    a ? b : c ;
    ```
11. Analice si la expresión que calcula el promedio es precisa. ¿Cuenta la cantidad de caracteres correctamente?
    - La expresion no es precisa ya que cuenta los ```\n```.
12. ¿Qué cambios se deben hacer al programa para que también informe la cantidad de líneas y la cantidad de caracteres en la entrada?
    - Se deberian imprimir las variables ```nl``` y ```nc```.
13. Considerando las respuestas a 10, 11 y 12, escriba un nuevo programa: **Promediar2.c**.



