#include <bits/stdc++.h>

using namespace std;


int main(){

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int P, S, B;
    string terreno;
    int tiempo = 0;

    map<char, int> mapa;

    cin >> P >> S >> B;
    mapa['-'] = P;
    mapa['/'] = S;
    mapa['\\'] = B;

    cin >> terreno;

    for(auto x: terreno){
        tiempo += mapa[x];
    }

    cout << tiempo;

    return 0;
}
