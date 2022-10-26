/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 26 de octubre de 2022
 * Resumen: Ejemplo de programa y función que utilizan un vector de datos de 
 *          tipo real para calcular la media de temperatura anual a partir de  
 *          doce temperaturas medias mensuales.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 1-temperatura-media.cpp -o 1-temperatura-media
 *       y ejecutarse en Windows a través de la orden
 *           .\1-temperatura-media.exe
 *       o en Linux y macOS
 *           ./1-temperatura-media
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Número de meses que tiene un año (y por tanto, número de componentes que 
 * tiene un vector de temperaturas medias mensuales).
 */
const unsigned NUM_MESES = 12;


/*
 * Pre:  El vector «t» tiene «NUM_MESES» componentes que representan 
 *       temperaturas.
 * Post: Devuelve la temperatura media de las temperaturas almacenadas en 
 *       «t».
 */ 
double temperaturaMediaAnual(const double t[]) {
    double sumaTemperaturas = 0.0;
    for (unsigned i = 0; i < NUM_MESES; i++) {
        sumaTemperaturas += t[i];
    }
    return sumaTemperaturas / NUM_MESES;
}


/*
 * Programa que pide al usuario 12 datos de temperaturas medias mensuales
 * correspondientes a un año y escribe a continuación en la pantalla la
 * temperatura media anual correspondiente.
 */
int main() {
    // Declaración de un vector de 12 componentes
    double temperaturas[NUM_MESES];
    
    // Petición al usuario de las 12 temperaturas medias mensuales
    for (unsigned i = 0; i < NUM_MESES; i++) {
        cout << "Escriba la temperatura del mes " << i + 1 << ": ";
        cin >> temperaturas[i];
    }
    
    // Invocación de la función que calcula la media
    double mediaAnual = temperaturaMediaAnual(temperaturas);
    
    // Escritura de resultados
    cout << endl;
    cout << "La temperatura media anual es de " << mediaAnual << endl;
    
    return 0;
}
