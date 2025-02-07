#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
#include <string>

using namespace std;

int main() {
    string texto; // Variable para almacenar la cadena de texto
    string texto_sin_espacios; // Variable para almacenar la cadena sin espacios
    bool es_palindromo = true; // Variable para verificar si es un palíndromo

    cout <<"Programa que indica si es un palindromo ";
    cout << "\n Introduce una cadena de texto: "; // Solicitar entrada al usuario
    getline(cin, texto); // Leer la línea completa de texto

    // Eliminar espacios y convertir a minúsculas
    for (int i = 0; i < texto.length(); i++) {
        char caracter = texto[i]; // Obtener el carácter actual

        // Convertir a minúscula si es mayúscula
        if (caracter >= 'A' && caracter <= 'Z') {
            caracter = caracter + 32; // Convertir a minúscula
        }

        // Agregar solo caracteres que no sean espacios
        if (caracter != ' ') {
            texto_sin_espacios += caracter; // Concatenar el carácter
        }
    }

    // Verificar si la cadena es un palíndromo
    int longitud = texto_sin_espacios.length();
    for (int i = 0; i < longitud / 2; i++) {
        if (texto_sin_espacios[i] != texto_sin_espacios[longitud - 1 - i]) {
            es_palindromo = false; // No es un palíndromo
            break; // Salir del bucle
        }
    }

    // Imprimir el resultado
    if (es_palindromo) {
        cout << "Es un palindromo" << endl; // Es un palíndromo
    } else {
        cout << "No es un palindromo" << endl; // No es un palíndromo
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.