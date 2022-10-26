#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, u, d;
    int minutos = 0;
    cin >> n >> u >> d;

    int altura = 0;
    while(n > altura){
        minutos++;
        altura += u;
        if(altura >= n){
            break;
        }
        altura -= d;
        minutos++;
    }

    cout << minutos << "\n";



    return 0;
}
