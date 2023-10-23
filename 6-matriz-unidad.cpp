/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2023
 * Resumen: Procedimiento que inicializa una matriz como la matriz unidad.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 6-matriz-unidad.cpp -o 6-matriz-unidad
 *       y ejecutarse en Windows a través de la orden
 *           .\6-matriz-unidad.exe
 *       o en Linux y macOS
 *           ./6-matriz-unidad
\******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

const unsigned DIM = 20;

/*
 * Pre:  «matriz» es una matriz cuadrada de DIM x DIM.
 * Post: Inicializa «matriz» como la matriz unidad de tamaño DIM x DIM.
 */
void unidad(double matriz[][DIM]) {
    for (unsigned i = 0; i < DIM; i++) {
        for (unsigned j = 0; j < DIM; j++) {
            if (i == j) {
                matriz[i][j] = 1.0;
            } else {
                matriz[i][j] = 0.0;
            }
        }
    }
}

/*
 * Pre:  «matriz» es una matriz cuadrada de DIM x DIM.
 * Post: Escribe en la pantalla las componentes de «matriz».
 */
void escribir(double matriz[][DIM]) {
    cout << fixed << setprecision(1);
    for (unsigned i = 0; i < DIM; i++) {
        cout << "[";
        for (unsigned j = 0; j < DIM; j++) {
                cout << setw(6) << matriz[i][j];
        }
        cout << "   ]" << endl;
    }
}


int main() {
    double mat[DIM][DIM];
    unidad(mat);
    escribir(mat);
    return 0;
}
