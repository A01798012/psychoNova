#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int integrantes = 11;
    int f;
    int cuenta = 0;
    cin >> f;

    while((f-1) % integrantes != 0){
        f *= 2;
        cuenta++;
    }

    printf("%d %d", cuenta, f);

    return 0;
}
