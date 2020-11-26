/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 29 de octubre de 2020
 * Resumen: Ejemplo de función que trabaja con vectores sobredimensionados.
\******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


/*
 * Pre:  «t» tiene al menos «n» componentes y «n» > 0.
 * Post: Ha devuelto el valor medio de los valores almacenados en las
 *       «n» primeras componentes de «t».
 */
double media(const double t[], const unsigned int n) {
    double suma = 0.0;
    for (unsigned int i = 0; i < n; i++) {
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
    const unsigned int NUM_DATOS = 7;
    double vector[NUM_DATOS] = {47.9, 55, 1, 76.3, 92, 250, 79};
   
    cout << "Media de los 3 primeros datos: " << media(vector, 3) << endl;
    cout << "Media de los 4 primeros datos: " << media(vector, 4) << endl;        
    cout << "Media de todos los datos: " << media(vector, NUM_DATOS) << endl;        
        
    return 0;
}
