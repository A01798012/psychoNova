#include <bits/stdc++.h>

using namespace std;

int main() {

    int p;
    map<int, int> mapa;

    for(int i = 0; i < 4; i++){
        cin >> p;
        if(!mapa.count(p)){
            mapa[p] = 1;
        }else{
            mapa[p]++;
        }
    }

    bool flag = false;
    for(auto &[key, value]: mapa){
        if(value == 3){
            flag = true;
        }
    }

    if(flag)
        cout << 1;
    else {
        cout << 0;
    }






  return 0;
}
