/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 22 de octubre de 2021
 * Resumen: Funciones que, dado un vector, calculan tres estadísticos: media, 
 *          desviación típica y máximo.
\******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


/*
 * Pre:  «t» tiene «n» componentes y «n» > 0.
 * Post: Ha devuelto el valor medio de los valores almacenados en las
 *       componentes de «t».
 */
double media(const double t[], const unsigned n) {
    double suma = 0.0;
    for (unsigned i = 0; i < n; i++) {
        suma += t[i];
    }
    return suma / n;
}


/*
 * Pre:  «t» tiene «n» componentes y «n» > 1.
 * Post: Ha devuelto la desviación típica de los valores almacenadas en «t».
 */
double desviacionTipica(const double t[], const unsigned n) {
    double mediaAritmetica = media(t, n);
    double suma = 0.0;
    for (unsigned i = 0; i < n; i++) {
        suma += pow(t[i] - mediaAritmetica, 2);
    }
    return sqrt(suma / (n - 1));
}


/*
 * Pre:  «t» tiene «n» componentes y «n» > 0.
 * Post: Ha devuelto la valor máximo almacenado en
 *       las componentes de la tabla «t».
 */
double maximo(const double t[], const unsigned n) {
    double maximo = t[0];
    for (unsigned i = 1; i < n; i++) {
        if (t[i] > maximo) {
            maximo = t[i];
        }
    }
    return maximo;
}

/*
 * Programa que, a modo de ejemplo, invoca a las tres funciones anteriores.
 */
int main() {
    const unsigned NUM_DATOS = 11;
    double vector[NUM_DATOS] = {47.9, 55, 1, 76.3, 92, 250, 79, 56.1, 50, 80, 2};
    
    cout << "El vector es {";
    for (unsigned i = 0; i < NUM_DATOS - 1; i++) {
        cout << vector[i] << ", ";
    }
    cout << vector[NUM_DATOS - 1] << "};" << endl;
    
    cout << "Su media es de " << media(vector, NUM_DATOS) << endl;
    cout << "Su desviación típica es de " 
         << desviacionTipica(vector, NUM_DATOS) << endl;
    cout << "Su máximo es de " << maximo(vector, NUM_DATOS) << endl;
        
    return 0;
}
