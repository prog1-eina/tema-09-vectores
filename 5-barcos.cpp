/******************************************************************************
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 26 de octubre de 2022
 * Resumen: Código de ejemplo de cómo podría utilizarse una matriz en el juego 
 *          de los barcos.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 5-barcos.cpp -o 5-barcos
 *       y ejecutarse en Windows a través de la orden
 *           .\5-barcos.exe
 *       o en Linux y macOS
 *           ./5-barcos
 *****************************************************************************/

const unsigned NUM_FILAS = 8;
const unsigned NUM_COLUMNAS = 8;
const bool AGUA = false;
const bool BARCO = true;


/*
 * Programa con código de ejemplo de cómo podría utilizarse una matriz en el
 * juego de los barcos.
 */
int main() {
    bool tablero[NUM_FILAS][NUM_COLUMNAS] = {};

    // Colocación de un barco en las casillas
    // E3, F3, G3 y H3
    tablero[4][2] = BARCO;
    tablero[5][2] = BARCO;
    tablero[6][2] = BARCO;
    tablero[7][2] = BARCO;

    return 0;
}
