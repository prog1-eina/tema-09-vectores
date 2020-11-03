/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 29 de octubre de 2020
 * Resumen: Código de ejemplo de cómo podría utilizarse una matriz en el juego 
 *          de los barcos.
\******************************************************************************/
#include <iostream>
using namespace std;

const unsigned int NUM_FILAS = 8;
const unsigned int NUM_COLUMNAS = 8;
const bool AGUA = false;
const bool BARCO = true;


/*
 * Programa con código de ejemplo de cómo podría utilizarse una matriz en el
 * juego de los barcos.
 */
int main() {
    bool tablero[NUM_FILAS][NUM_COLUMNAS] = {{AGUA}};

    // Colocación de un barco en las casillas
    // E3, F3, G3 y H3
    tablero[4][2] = BARCO;
    tablero[5][2] = BARCO;
    tablero[6][2] = BARCO;
    tablero[7][2] = BARCO;

    return 0;
}
