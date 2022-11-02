#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);


    unordered_map<int,int> mapa;
    map<int, int> mapaAbs;
    int n;
    int num;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        num = stoi(s);

        if(mapa.count(num))
            mapa[num] += 1;
        else
            mapa[num] = 1;

        if(mapaAbs.count(abs(num)))
            mapaAbs[abs(num)] += 1;
        else
            mapaAbs[abs(num)] = 1;
    }

    int max;
    int val = 0;

    for(auto const& x: mapaAbs){
        if(x.second > val){
            val = x.second;
            max = x.first;

        }
    }
    cout << max << "\n";
    cout << mapa[max] << " ";
    if(mapa.count(-1*max))
        cout << mapa[-1*max];
    else {
        cout << 0;
    }



    return 0;
}
