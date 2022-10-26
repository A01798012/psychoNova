#include <bits/stdc++.h>
using namespace std;
#include <time.h>


void randomArray(int arreglo[], int size){
    srand((unsigned int)time(0));
    for(int i = 0; i < size; i++)
        arreglo[i] = rand()%100;

}

int particion(int arreglo[], int l, int r){
    int pivote = arreglo[l];
    int i = r + 1;
    for(int j = r; j > l; j--){
        if(arreglo[j] > pivote){
            i--;
            swap(arreglo[i], arreglo[j]);
        }
    }
    swap(arreglo[i - 1], arreglo[l]);

    return i - 1;
}
void quickSort(int arreglo[], int l, int r){
    if(l < r){
        //Encontrar posicion final(indice del pivote)
        //colocar los elementos a la izq y mayores a la derecha
        int pivote = particion(arreglo, l, r);
        //Particion izq
        quickSort( arreglo, l, pivote - 1);
        //Particion der
        quickSort(arreglo, pivote + 1, r);
    }
}
int main(){

    int tam;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> tam;

    int arreglo[tam];


    randomArray(arreglo, tam);

    for(auto x: arreglo ){
        cout << x << " ";
    }

    cout << "\n";

    quickSort(arreglo, 0, tam - 1);
    for(auto x: arreglo ){
        cout << x << " ";
    }
    return 0;
}
