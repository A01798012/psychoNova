#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
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

        int inicio, longitud;

        cin >> inicio;
        cin >> longitud;

        int final = inicio + longitud;
        int j = final - 1;

        bool encontrado = false;

        for(int i = inicio; i < final; i++){
            if(i >= j)
                break;
            if(letraDeseada == palabra[i] || letraDeseada == palabra[j--]){
                cout << "1\n";
                encontrado = true;
                break;
            }
        }
        if (!encontrado){
            cout << "0\n";
        }

    }

    return 0;
}
