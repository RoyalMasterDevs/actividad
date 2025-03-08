#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ingrese un número entero: ";
    cin >> x;

    // Verificar si el número es negativo (no puede ser palíndromo)
    if (x < 0) {
        cout << x << " no es un palíndromo." << endl;
        return 0;
    }

    // Guardar el número original
    int original = x;

    // Invertir el número
    int invertido = 0;
    while (x != 0) {
        invertido = invertido * 10 + x % 10; // Agregar el último dígito al número invertido
        x /= 10; // Eliminar el último dígito del número original
    }

    // Comparar el número original con el invertido
    if (original == invertido) {
        cout << original << " es un palíndromo." << endl;
    } else {
        cout << original << " no es un palíndromo." << endl;
    }

    return 0;
}