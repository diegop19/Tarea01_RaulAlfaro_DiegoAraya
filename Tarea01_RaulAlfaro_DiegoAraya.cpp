
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "ArrayStack.h"

using namespace std;

int main(){
    ArrayStack<char> pila;
    string mensaje;
    cout << "Escriba el mensaje a invertir: ";
    getline(cin, mensaje);
    for (int i = 0; i < mensaje.length(); i++) {
        pila.push(mensaje[i]);
    }
    pila.print();
    while (!pila.isEmpty()) {
        cout << pila.pop();
    }
    cout << endl;
    pila.print();
    return 0; // se ejecuta el destructor
}
