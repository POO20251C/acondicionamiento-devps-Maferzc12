#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string entrada; // Variable para almacenar la entrada del usuario
    vector<int> numeros; // Vector para almacenar los números enteros

    cout << "Coloca una lista de numeros enteros separados por espacios: "; // Solicitar entrada
    getline(cin, entrada); // Leer la línea completa de texto

    // Usar un stringstream para separar los números
    stringstream ss(entrada);
    int numero;

    // Leer los números del stringstream y almacenarlos en el vector
    while (ss >> numero) {
        numeros.push_back(numero); // Agregar el número al vector
    }

    // Invertir el vector
    vector<int> numeros_invertidos; // Vector para almacenar los números invertidos
    for (int i = numeros.size() - 1; i >= 0; i--) {
        numeros_invertidos.push_back(numeros[i]); // Agregar el número en orden inverso
    }

    // Imprimir la lista invertida
    cout << "Lista invertida: ";
    for (int i = 0; i < numeros_invertidos.size(); i++) {
        cout << numeros_invertidos[i]; // Imprimir el número
        if (i < numeros_invertidos.size() - 1) {
            cout << " "; // Agregar espacio entre números
        }
    }
    cout << endl; // Nueva línea al final

    return 0;
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.