#include <iostream>
#include <sstream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    string entrada; // Variable para almacenar la entrada del usuario
    vector<int> numeros; // Vector para almacenar los números enteros
    int maximo = numeric_limits<int>::min(); // Inicializar el máximo con el valor más pequeño posible
    int minimo = numeric_limits<int>::max(); // Inicializar el mínimo con el valor más grande posible

    cout << "Introduce una lista de numeros enteros separados por espacios: "; // Solicitar entrada
    getline(cin, entrada); // Leer la línea completa de texto

    // Usar un stringstream para separar los números
    stringstream ss(entrada);
    int numero;

    // Leer los números del stringstream y almacenarlos en el vector
    while (ss >> numero) {
        numeros.push_back(numero); // Agregar el número al vector

        // Actualizar el máximo y mínimo
        if (numero > maximo) {
            maximo = numero; // Actualizar el máximo
        }
        if (numero < minimo) {
            minimo = numero; // Actualizar el mínimo
        }
    }

    // Imprimir el máximo y mínimo
    cout << maximo << " " << minimo << endl;

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.