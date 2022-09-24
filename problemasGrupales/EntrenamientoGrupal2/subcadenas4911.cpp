#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int busquedaBinaria(string &substring, int clave, int n)
{

    int inicio, mitad, fin, valorCentral;
    inicio = 0;
    fin = n - 1;

    while (inicio <= fin)
    {
        mitad = (inicio + fin) / 2;
        valorCentral = substring[mitad];

        if (clave == valorCentral)
        {
            return 1;
        }

        else if (clave < valorCentral) // Izq
        {
            fin = mitad - 1;
        }
        else // Der
        {
            inicio = mitad + 1;
        }
    }

    return 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string palabra;
    cin >> palabra;

    int numInstrucciones;
    cin >> numInstrucciones;

    for (int i = 0; i < numInstrucciones; i++)
    {
        char letraDeseada;
        cin >> letraDeseada;

        int inicio;
        int longitud;

        cin >> inicio;
        cin >> longitud;

        int final = inicio + longitud;

        bool encontrado = false;

        string substring;

        int longSubstring = 0;

        for (int i = inicio; i < final; i++)
        {
            substring += palabra[i];
            longSubstring++;
        }

        sort(substring.begin(), substring.end());

        cout << busquedaBinaria(substring, letraDeseada, longSubstring) << "\n";
    }

    return 0;
}