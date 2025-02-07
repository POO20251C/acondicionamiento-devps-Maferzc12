#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string entrada; // Variable para almacenar la entrada del usuario
    int contador_palabras = 0; // Contador para las palabras
    bool en_palabra = false; // Bandera para saber si estamos dentro de una palabra

    cout << "Introduce una cadena de texto: "; // Solicitar entrada
    getline(cin, entrada); // Leer la línea completa de texto

    // Recorrer cada carácter en la cadena
    for (int i = 0; i < entrada.length(); i++) {
        char caracter = entrada[i]; // Obtener el carácter actual

        // Comprobar si el carácter es un espacio
        if (caracter == ' ') {
            // Si encontramos un espacio y estábamos en una palabra, significa que hemos terminado una palabra
            if (en_palabra) {
                contador_palabras++; // Incrementar el contador de palabras
                en_palabra = false; // Cambiar la bandera a falso
            }
        } else {
            // Si encontramos un carácter que no es un espacio, estamos dentro de una palabra
            en_palabra = true;
        }
    }

    // Si la cadena termina con una palabra, contar la última palabra
    if (en_palabra) {
        contador_palabras++; // Incrementar el contador de palabras
    }

    // Imprimir la cantidad de palabras
    cout << "Cantidad de palabras: " << contador_palabras << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.