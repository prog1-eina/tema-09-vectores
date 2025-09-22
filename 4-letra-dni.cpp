/******************************************************************************
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 26 de octubre de 2022
 * Resumen: Función que utiliza un vector para calcular la letra del DNI.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 4-letra-dni.cpp -o 4-letra-dni
 *       y ejecutarse en Windows a través de la orden
 *           .\4-letra-dni.exe
 *       o en Linux y macOS
 *           ./4-letra-dni
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  dni > 0
 * Post: Devuelve la letra del DNI que corresponde a un número de DNI igual 
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
 * Programa de ejemplo de la función anterior. Pide el DNI del usuario y
 * muestra en pantalla la letra correspondiente.
 */
int main() {
    cout << "Escriba su DNI sin letra: ";
    unsigned dni;
    cin >> dni;
    
    cout << "Su letra es " << letra(dni) << '.' << endl;
    
    return 0;
}
