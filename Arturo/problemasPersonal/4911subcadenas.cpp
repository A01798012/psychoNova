#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);

    char letraDeseada; int inicio,longitud;
    bool encontrado;

    int final;

    string palabra;
    cin >> palabra;

    int numInstrucciones;
    cin >> numInstrucciones;

    for (int i = 0; i < numInstrucciones; i++)
    {
        cin >> letraDeseada;


        cin >> inicio;
        cin >> longitud;

        final = inicio + longitud;

        encontrado = false;

        for(int i = inicio; i < final; i++){
            if(letraDeseada == palabra[i]){
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
