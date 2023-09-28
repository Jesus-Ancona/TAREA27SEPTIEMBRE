#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declaración de variables
    string nombre;
    int diasSemanaTotal = 0;
    int sabadosTrabajados = 0;
    int domingosTrabajados = 0;
    const double tarifaDia = 300.0;
    double multiplicador = 1.0; // Inicialmente, no se aplica ningún multiplicador
    double salarioTotal = 0.0;

    // Solicitar nombre
    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    // Solicitar días entre semana trabajados en dos semanas
    do {
        cout << "Ingresa los días entre semana trabajados en dos semanas (máximo 10): ";
        cin >> diasSemanaTotal;
    } while (diasSemanaTotal < 0 || diasSemanaTotal > 10);

    // Solicitar sábados trabajados en dos semanas
    do {
        cout << "Ingresa los sábados trabajados en dos semanas (máximo 2): ";
        cin >> sabadosTrabajados;
    } while (sabadosTrabajados < 0 || sabadosTrabajados > 2);

    // Solicitar domingos trabajados en dos semanas
    do {
        cout << "Ingresa los domingos trabajados en dos semanas (máximo 2): ";
        cin >> domingosTrabajados;
    } while (domingosTrabajados < 0 || domingosTrabajados > 2);

    // Calcular el multiplicador
    multiplicador += sabadosTrabajados * 0.5; // 0.5 se suma por cada sábado trabajado
    multiplicador += domingosTrabajados;     // 1 se suma por cada domingo trabajado

    // Calcular salario total
    salarioTotal = diasSemanaTotal * tarifaDia * multiplicador;

    // Mostrar el salario total
    cout << nombre << ", tu salario total es: $" << salarioTotal << endl;

    return 0;
}