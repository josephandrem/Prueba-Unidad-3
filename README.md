# Aplicativo Interactivo - Algoritmos (Prueba Unidad 3)

Este repositorio contiene el proyecto final de la Unidad 3, consistente en un aplicativo modular desarrollado en **C++** y su equivalencia lógica en **PSeInt**. El programa está diseñado para gestionar operaciones matemáticas básicas, procesamiento estadístico de notas mediante arreglos y persistencia de datos.

## 🚀 Funcionalidades

El sistema se divide en cuatro módulos principales:
1. **Operaciones Básicas:** Cálculo de suma, resta, multiplicación y división (con validación de división por cero).
2. **Registro de Notas:** Procesamiento de 5 calificaciones utilizando arreglos unidimensionales para determinar el promedio, la nota más alta, la más baja y el conteo de aprobados/reprobados.
3. **Persistencia de Datos:** Generación de un archivo físico `resultados.txt` que almacena la información procesada durante la sesión.
4. **Gestión de Salida:** Finalización controlada del entorno de ejecución.

## 🛠️ Tecnologías Utilizadas

* **Lenguaje:** C++17
* **IDE:** Visual Studio Code / Code::Blocks
* **Lógica:** PSeInt (Pseudocódigo)
* **Control de Versiones:** Git / GitHub

## 📂 Estructura del Proyecto

* `/src`: Contiene el código fuente `.cpp`.
* `/capturas`: Evidencias de la ejecución del programa.
* `resultados.txt`: Archivo generado por el aplicativo para el almacenamiento de datos.

## 🧪 Casos de Prueba

| Caso de Prueba | Entrada (Input) | Resultado Esperado (Output) |
| :--- | :--- | :--- |
| **1. Matemático** | Num1: 15, Num2: 5 | Suma: 20, Resta: 10, Multiplicación: 75, División: 3 |
| **2. Validación** | Num1: 10, Num2: 0 | Error: División para cero no permitida |
| **3. Estadístico** | Notas: 8, 4, 10, 6, 7 | Promedio: 7, Mayor: 10, Menor: 4, Aprobados: 3, Reprobados: 2 |
