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

    srand(time(0));

    int numero1, numero2, numero3;
    int auxiliar; 

    numero1 = rand() % 101;
    numero2 = rand() % 101;
    numero3 = rand() % 101;

    std::cout << "Numeros aleatorios generados: "
              << numero1 << "," << numero2 << "," << numero3 << std::endl;


    




 }

