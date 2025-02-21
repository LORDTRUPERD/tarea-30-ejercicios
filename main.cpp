#include <iostream>

using namespace std;

void determinarSigno();


int main() {
    int opcion;

    do {
        cout << "\nMENU PRINCIPAL" << endl;
        cout << "1. Estructura if-else" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int subopcion;
                do {
                    cout << "\nSUBMENU - ESTRUCTURA IF-ELSE" << endl;
                    cout << "1. Determinar si un numero es positivo, negativo o cero" << endl;
                    cout << "0. Volver al menu principal" << endl;
                    cout << "Seleccione una subopcion: ";
                    cin >> subopcion;

                    switch (subopcion) {
                        case 1:
                            determinarSigno();
                            break;
                        case 0:
                            cout << "Volviendo al menu principal..." << endl;
                            break;
                        default:
                            cout << "Opcion invalida, intente nuevamente." << endl;
                    }
                } while (subopcion != 0);
                break;
            }
            case 2:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida, intente nuevamente." << endl;
        }
    } while (opcion != 2);

    return 0;
}

void determinarSigno() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0)
        cout << "El numero es positivo." << endl;
    else if (numero < 0)
        cout << "El numero es negativo." << endl;
    else
        cout << "El numero es cero." << endl;
}


