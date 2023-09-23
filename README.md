# CComp_II
Carpeta en la plataforma de github para la reslucionn de los ejercicios y tareas planteadas por el profesor
## 1era semana: Ejercicio de convertir numeros enteros del 1 al 1000000 a letras (sin requisitos)

Se subio solo el archivo cpp para la resolucion del ejercicio.

## 4ta practica 
Otra forma de lograr que la funcion transposed funcione sin la necesidad de el entero tmp es la siguiente:
            *(*(A + i) + j) = *(*(A + i) + j) + *(*(A + j) + i);
            *(*(A + j) + i) = *(*(A + i) + j) - *(*(A + j) + i);
            *(*(A + i) + j) = *(*(A + i) + j) - *(*(A + j) + i);
  
