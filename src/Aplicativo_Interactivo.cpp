#include <iostream>
#include <string>
#include <fstream> // Para persistencia en archivos [cite: 11]

using namespace std;

// --- DECLARACIÓN DE PROTOTIPOS (Funciones void) ---
void menu();
void operacionesBasicas();
void registroNotas(float &prom, float &may, float &men, int &aprob, int &reprob);
void guardarResultados(float prom);

int main() {
    int opcion;
    // Variables para almacenar resultados de notas y pasarlas entre funciones
    float promedio = 0, mayor = 0, menor = 0;
    int aprobados = 0, reprobados = 0;

    do {
        menu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                operacionesBasicas();
                break;
            case 2:
                // Se pasan variables por referencia para actualizar sus valores
                registroNotas(promedio, mayor, menor, aprobados, reprobados);
                break;
            case 3:
                guardarResultados(promedio);
                break;
            case 4:
                cout << "Saliendo del aplicativo de la UTA..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 4); // Ciclo do-while [cite: 11, 13]

    return 0;
}


// --- PARTE 2: OPERACIONES MATEMÁTICAS [cite: 14, 15] ---
void operacionesBasicas() {
    float a, b;
    cout << "Ingrese primer numero: "; cin >> a;
    cout << "Ingrese segundo numero: "; cin >> b;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;
    
    // Validando division para cero 
    if (b != 0) {
        cout << "Division: " << a / b << endl;
    } else {
        cout << "Error: Division para cero no permitida." << endl;
    }
}
