#include <iostream>

using namespace std;

void determinarSigno();
void verificarParImpar();
void encontrarMayor();

int main() {
    int opcion;

    do {
        cout << "\nMENU PRINCIPAL" << endl;
        cout << "1. Estructura if-else" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int subopcion;
                do {
                    cout << "\nSUBMENU - ESTRUCTURA IF-ELSE" << endl;
                    cout << "1. Determinar si un numero es positivo, negativo o cero" << endl;
                    cout << "2. Verificar si un numero es par o impar" << endl;
                    cout << "3. Encontrar el mayor de tres numeros" << endl;
                    cout << "4. Volver al menu principal" << endl;
                    cout << "Seleccione una subopcion: ";
                    cin >> subopcion;

                    switch (subopcion) {
                        case 1:
                            determinarSigno();
                            break;
                        case 2:
                            verificarParImpar();
                            break;
                        case 3:
                            encontrarMayor();
                            break;
                        case 4:
                            cout << "Volviendo al menu principal..." << endl;
                            break;
                        default:
                            cout << "Opcion invalida, intente nuevamente." << endl;
                    }
                } while (subopcion != 4);
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

void verificarParImpar() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0)
        cout << "El numero es par." << endl;
    else
        cout << "El numero es impar." << endl;
}

void encontrarMayor() {
    int num1, num2, num3;
    cout << "Ingrese tres numeros: ";
    cin >> num1 >> num2 >> num3;

    int mayor = num1;
    if (num2 > mayor)
        mayor = num2;
    if (num3 > mayor)
        mayor = num3;

    cout << "El mayor de los tres numeros es: " << mayor << endl;
}