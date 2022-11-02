#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int n, act, primer;

    bool flag = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j == 0)
                cin >> primer;
            else if(i == j){
                cin >> act;
                if(act != primer){
                    flag = 0;
                    break;
                }
            }else {
                cin >> act;
            }
        }
    }
    if(flag){
        cout << "SI";
    }else{
        cout << "NO";
    }


    return 0;
}
