#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    unordered_set<char> vocals{'A', 'E', 'I', 'O', 'U'};
    string n, a1, a2, dd, mm, aaaa;
    string curp = "";


    cin >> n >> a1 >> a2 >> dd >> mm >> aaaa;

    curp += a1[0];
    for(int i = 1; i < a1.length(); i++){
        if(vocals.count(a1[i])){
            curp += a1[i];
            break;
        }
    }

    curp += a2[0]; curp += n[0];

    curp = curp + aaaa[2] + aaaa[3] + mm + dd;

    cout << curp;







    return 0;
}
