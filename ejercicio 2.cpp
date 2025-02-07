#include <iostream>
#include <string>

using namespace std;

// Función para verificar si un carácter es un dígito
bool es_digito(char caracter) {
    return caracter >= '0' && caracter <= '9';
}

int main() {
    // Leer un número entero de la entrada
    string entrada;
    cout << "Introduce un numero entero: ";
    cin >> entrada;

    // Inicializar la suma en 0
    int suma_digitos = 0;

    
    for (char digito : entrada) {
        // Asegurarse de que el carácter es un dígito
        if (es_digito(digito)) {
            // Convertir el carácter a entero y sumarlo
            suma_digitos += digito - '0'; // Convertir char a int
        }
    }

    // Imprimir el resultado
    cout << suma_digitos << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.