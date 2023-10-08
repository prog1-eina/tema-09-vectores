/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 26 de octubre de 2022
 * Resumen: Ejemplo de función que trabaja con vectores sobredimensionados.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 3-vectores-sobredimensionados.cpp -o 3-vectores-sobredimensionados
 *       y ejecutarse en Windows a través de la orden
 *           .\3-vectores-sobredimensionados.exe
 *       o en Linux y macOS
 *           ./3-vectores-sobredimensionados
\******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


/*
 * Pre:  «t» tiene al menos «n» componentes y «n» > 0.
 * Post: Devuelve el valor medio de los valores almacenados en las
 *       «n» primeras componentes de «t».
 */
double media(const double t[], const unsigned n) {
    double suma = 0.0;
    for (unsigned i = 0; i < n; i++) {
        suma += t[i];
    }
    return suma / n;
}


/*
 * Programa que, a modo de ejemplo, invoca a la función anterior utilizando como
 * argumento el mismo vector, pero especificando distintos números de 
 * componentes siempre menores o iguales que la dimensión real del vector.
 */
int main() {
    const unsigned NUM_DATOS = 7;
    double vector[NUM_DATOS] = {47.9, 55, 1, 76.3, 92, 250, 79};
   
    cout << "Media de los 3 primeros datos: " << media(vector, 3) << endl;
    cout << "Media de los 4 primeros datos: " << media(vector, 4) << endl;        
    cout << "Media de todos los datos: " << media(vector, NUM_DATOS) << endl;        
        
    return 0;
}
