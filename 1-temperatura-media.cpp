/******************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 22 de octubre de 2021
 * Resumen: Ejemplo de programa y función que utilizan un vector de datos de 
 *          tipo real para calcular la media de temperatura anual a partir de  
 *          doce temperaturas medias mensuales.
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
 * Post: Ha devuelto la temperatura media de las temperaturas almacenadas en 
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
