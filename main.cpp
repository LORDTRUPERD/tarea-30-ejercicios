#include <iostream>
using namespace std;

void verificarNumero();
void parOImpar();
void mayorDeTres();
void esBisiesto();
void vocalOConsonante();
void esPrimo();
void validarAnoNacimiento();
void multiploDe5y7();
void calificacion();
void descuento();

void estructuraIfElse() {
    int opcion;
    do {
        cout << "\n--- Submenú Estructura if-else ---" << endl;
        cout << "1. Determinar si un número es positivo, negativo o cero" << endl;
        cout << "2. Verificar si un número es par o impar" << endl;
        cout << "3. Encontrar el mayor de tres números" << endl;
        cout << "4. Determinar si un año es bisiesto" << endl;
        cout << "5. Determinar si una letra es vocal o consonante" << endl;
        cout << "6. Verificar si un número es primo" << endl;
        cout << "7. Validar un año de nacimiento" << endl;
        cout << "8. Determinar si un número es múltiplo de 5 y 7" << endl;
        cout << "9. Determinar la calificación de un estudiante" << endl;
        cout << "10. Calcular el precio después del descuento" << endl;
        cout << "11. Regresar al menú principal" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: verificarNumero(); break;
            case 2: parOImpar(); break;
            case 3: mayorDeTres(); break;
            case 4: esBisiesto(); break;
            case 5: vocalOConsonante(); break;
            case 6: esPrimo(); break;
            case 7: validarAnoNacimiento(); break;
            case 8: multiploDe5y7(); break;
            case 9: calificacion(); break;
            case 10: descuento(); break;
            case 11: cout << "Regresando al menú principal..." << endl; break;
            default: cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 11);
}

void verificarNumero() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    if (num > 0) cout << "El número es positivo." << endl;
    else if (num < 0) cout << "El número es negativo." << endl;
    else cout << "El número es cero." << endl;
}

void parOImpar() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    if (num % 2 == 0) cout << "El número es par." << endl;
    else cout << "El número es impar." << endl;
}

void mayorDeTres() {
    int a, b, c;
    cout << "Ingrese tres números: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) cout << "El mayor es: " << a << endl;
    else if (b >= a && b >= c) cout << "El mayor es: " << b << endl;
    else cout << "El mayor es: " << c << endl;
}

void esBisiesto() {
    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El año " << anio << " es bisiesto." << endl;
    } else {
        cout << "El año " << anio << " no es bisiesto." << endl;
    }
}

void vocalOConsonante() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "La letra " << letra << " es una vocal." << endl;
    } else if ((letra >= 'a' && letra <= 'z')) {
        cout << "La letra " << letra << " es una consonante." << endl;
    } else {
        cout << "No es una letra válida." << endl;
    }
}
void esPrimo() {
    int num, i, esPrimo = 1;
    cout << "Ingrese un número: ";
    cin >> num;

    if (num <= 1) {
        esPrimo = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

void validarAnoNacimiento() {
    int anio;
    cout << "Ingrese un año de nacimiento: ";
    cin >> anio;
    if (anio > 1900 && anio < 2025) cout << "El año es válido." << endl;
    else cout << "El año no es válido." << endl;
}

void multiploDe5y7() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    if (num % 5 == 0 && num % 7 == 0) cout << "El número es múltiplo de 5 y 7." << endl;
    else cout << "El número no es múltiplo de 5 y 7." << endl;
}

void calificacion() {
    int nota;
    cout << "Ingrese la calificación (0-100): ";
    cin >> nota;
    if (nota >= 90) cout << "Calificación: A" << endl;
    else if (nota >= 80) cout << "Calificación: B" << endl;
    else if (nota >= 70) cout << "Calificación: C" << endl;
    else if (nota >= 60) cout << "Calificación: D" << endl;
    else cout << "Calificación: F" << endl;
}

void descuento() {
    double precio, porcentaje, precioFinal;
    cout << "Ingrese el precio del artículo: ";
    cin >> precio;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> porcentaje;
    precioFinal = precio - (precio * porcentaje / 100);
    cout << "El precio final después del descuento es: " << precioFinal << endl;
}

int main() {
    int opcion;
    do {
        cout << "\n--- Menú Principal ---" << endl;
        cout << "1. Estructura if-else" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: estructuraIfElse(); break;
            case 2: cout << "Saliendo del programa..." << endl; break;
            default: cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 2);

    return 0;
}
