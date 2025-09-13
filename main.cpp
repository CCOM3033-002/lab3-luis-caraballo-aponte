//Luis Caraballo Aponte
//CCOM3033-002

/*Descripción:
  Programa en C++ que genera tres números enteros aleatorios entre 0 y 100 (incluidos).
  Primero los despliega en el orden generado y luego los muestra en orden descendente.
  Se utiliza srand(time(0)) para garantizar que en cada ejecución los números sean distintos.
 */

 #include <iostream>
 #include <cstdlib>  // uso de std::rand y std::srand
 #include <ctime>   // uso de std::time

 int main() {

   //Inicializar el generador de numeros aleatorios con la hora actual.

    srand(time(0));

   //Declarar variables

    int numero1, numero2, numero3;
    int auxiliar; 

   //Generar tres enteros en el rango [0,100].

    numero1 = rand() % 101;
    numero2 = rand() % 101;
    numero3 = rand() % 101;

   //Mostrar numeros generados sin ordenar.

    std::cout << "Numeros aleatorios generados: "
              << numero1 << "," << numero2 << "," << numero3 << std::endl;
    
   // Ordenar de mayor a menor con comparaciones.

    if (numero1 < numero2) { auxiliar = numero1; numero1 = numero2; numero2 = auxiliar; }
    if (numero1 < numero3) { auxiliar = numero1; numero1 = numero3; numero3 = auxiliar; }
    if (numero2 < numero3) { auxiliar = numero2; numero2 = numero3; numero3 = auxiliar; }

   //Mostrar en  orden descendente

    std::cout << "Orden descendiente: "
              << numero1 << ">=" << numero2 << ">=" << numero3 << std::endl;
    return 0;
 }

