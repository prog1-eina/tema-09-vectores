/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 22 de octubre de 2021
 * Resumen: Función que utiliza un vector para calcular la letra del DNI.
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  dni > 0
 * Post: Ha devuelto la letra del DNI que corresponde a un número de DNI igual 
 *       al valor del parámetro «dni».
 */
char letra(const unsigned dni) {
    const unsigned NUM_LETRAS = 23;
    const char TABLA_LETRAS_NIF[NUM_LETRAS] = {'T', 'R', 'W', 'A', 'G', 'M', 
            'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 
            'L', 'C', 'K', 'E'};
    return TABLA_LETRAS_NIF[dni % NUM_LETRAS];
}

/*
 * Programa de ejemplo de la función anterior. Pide el DNI del usuario y escribe
 * en la pantalla su letra.
 */
int main() {
    cout << "Escriba su DNI: ";
    unsigned dni;
    cin >> dni;
    
    cout << "Su letra es " << letra(dni) << '.' << endl;
    
    return 0;
}
