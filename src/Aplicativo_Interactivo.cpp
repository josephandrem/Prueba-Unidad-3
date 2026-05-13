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

// --- PARTE 3: ARREGLOS Y PROCESAMIENTO [cite: 16, 17] ---
void registroNotas(float &prom, float &may, float &men, int &aprob, int &reprob) {
    float notas[5]; // Arreglo unidimensional [cite: 11]
    float suma = 0;
    aprob = 0; reprob = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese nota " << i + 1 << " (0-10): ";
        cin >> notas[i];
        suma += notas[i]; // Acumulador [cite: 11]

        // Contador de aprobados/reprobados [cite: 11]
        if (notas[i] >= 7) aprob++; 
        else reprob++;

        // Lógica para nota mayor y menor
        if (i == 0) {
            may = men = notas[i];
        } else {
            if (notas[i] > may) may = notas[i];
            if (notas[i] < men) men = notas[i];
        }
    }
    prom = suma / 5;
    cout << "\n--- RESULTADOS DEL PARCIAL ---" << endl;
    cout << "Promedio: " << prom << endl;
    cout << "Nota mas alta: " << may << endl;
    cout << "Nota mas baja: " << men << endl;
    cout << "Cantidad Aprobados: " << aprob << endl;
    cout << "Cantidad Reprobados: " << reprob << endl;
}

// --- PARTE 4: PERSISTENCIA EN ARCHIVOS [cite: 18, 19] ---
void guardarResultados(float prom) {
    string nombre;
    ofstream archivo;
    
    cout << "Ingrese nombre del estudiante: ";
    cin.ignore();
    getline(cin, nombre);

    archivo.open("resultados.txt", ios::app); // Persistencia [cite: 11, 18]
    if (archivo.is_open()) {
        archivo << "Estudiante: " << nombre << endl;
        archivo << "Resultado (Promedio): " << prom << endl;
        archivo << "Fecha: 13/05/2026" << endl; // Fecha solicitada 
        archivo << "Lenguaje: C++" << endl;
        archivo << "-----------------------------------" << endl;
        archivo.close();
        cout << "Archivo 'resultados.txt' actualizado con exito." << endl;
    } else {
        cout << "Error al abrir el archivo." << endl;
    }
}