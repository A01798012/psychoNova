#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);

    unordered_map<int, int> mapa{{1, 0}, {2, 1}, {3, 2}, {4, 3}};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        // rango [0, 3]
        unordered_set<char> coso;
        string s1, s2;
        cin >> s1 >> s2;

        for(int i = 0; i < 2; i++){
            coso.emplace(s1[i]);
        }
        for(int i = 0; i < 2; i++){
            coso.emplace(s2[i]);
        }

        cout << mapa[coso.size()] << endl;
/*
        if(coso.size() == 1) cout << 0 << "\n";
        else if(coso.size() == 2) cout << 1 << "\n";
        else if(coso.size() == 3) cout << 2 << "\n";
        else cout << 3 << "\n";
*/
    }


    return 0;
}
