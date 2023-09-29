#include <iostream>
#include <vector>

using namespace std;

int main() {
    double salarioBase = 300.0;
    int totalClientes = 10;

    vector<string> nombres;
    vector<double> montosTotales;
    double montoSupremo = 0.0;

    for (int i = 0; i < totalClientes; i++) {
        string nombre;
        cout << "Ingrese el nombre del cliente " << (i + 1) << ": ";
        cin >> nombre;

        int diasEntreSemana, sabadosTrabajados, domingosTrabajados;

        while (true) {
            cout << "Días entre semana (máximo 10): ";
            cin >> diasEntreSemana;
            if (diasEntreSemana >= 0 && diasEntreSemana <= 10) break;
            cout << "Número de días inválido (0-10)." << endl;
        }

        while (true) {
            cout << "Sábados trabajados (máximo 2): ";
            cin >> sabadosTrabajados;
            if (sabadosTrabajados >= 0 && sabadosTrabajados <= 2) break;
            cout << "Número de sábados inválido (0-2)." << endl;
        }

        while (true) {
            cout << "Domingos trabajados (máximo 2): ";
            cin >> domingosTrabajados;
            if (domingosTrabajados >= 0 && domingosTrabajados <= 2) break;
            cout << "Número de domingos inválido (0-2)." << endl;
        }

        double salarioTotal = salarioBase * diasEntreSemana;
        if (sabadosTrabajados == 1 && domingosTrabajados == 0) salarioTotal *= 1.5;
        if (sabadosTrabajados == 2 && domingosTrabajados == 0) salarioTotal *= 3;
        if (sabadosTrabajados == 1 && domingosTrabajados == 1) salarioTotal *= 3.5;
        if (sabadosTrabajados == 0 && domingosTrabajados == 1) salarioTotal *= 2;
        if (sabadosTrabajados == 0 && domingosTrabajados == 2) salarioTotal *= 4;
        if (sabadosTrabajados == 2 && domingosTrabajados == 2) salarioTotal *= 7;

        montoSupremo += salarioTotal;
        nombres.push_back(nombre);
        montosTotales.push_back(salarioTotal);

        cout << "Hola, " << nombre << "! El salario total es: $" << salarioTotal << endl;
    }

    cout << "Nombres de clientes y sus montos totales:" << endl;
    for (int i = 0; i < totalClientes; i++) {
        cout << nombres[i] << ": $" << montosTotales[i] << endl;
    }

    cout << "Monto supremo: $" << montoSupremo << endl;

    return 0;
}