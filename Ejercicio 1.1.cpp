#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto; // Variable para almacenar la cadena de texto
    int contador_vocales = 0; // Contador para las vocales

    cout << "Introduce una cadena de texto: "; // Solicitar entrada al usuario
    getline(cin, texto); // Leer la línea completa de texto

    // Recorrer cada carácter en la cadena
    for (int i = 0; i < texto.length(); i++) {
        char caracter = texto[i]; // Obtener el carácter actual

        // Convertir a minúscula para simplificar la comparación
        if (caracter >= 'A' && caracter <= 'Z') {
            caracter = caracter + 32; // Convertir a minúscula
        }

        // Comprobar si el carácter es una vocal
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contador_vocales++; // Incrementar el contador si es una vocal
        }
    }

    // Imprimir el resultado
    cout << "Numero de vocales: " << contador_vocales << endl;


    return 0;
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.