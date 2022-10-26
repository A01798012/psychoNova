#include <bits/stdc++.h>

using namespace std;


int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);


    int n;
    cin >> n;

    int arreglo[n];

    for(int i = 0; i < n; i++){
        cin >> arreglo[i];
    }

    int cuenta = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arreglo[i] > arreglo[j]){
                cuenta++;
            }
        }
    }

    cout << cuenta;


    return 0;
}
