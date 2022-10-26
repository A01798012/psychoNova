#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    deque<int> coso;

    cin >> n;

    for(int i = 1; i <= n; i++){
        coso.push_back(i);
    }

    coso.pop_front();
    cout << 1 << " ";
    while(!coso.empty()){
        if(!coso.empty()){
            cout << coso.back() << " ";
            coso.pop_back();
        }else {
            break;
        }
        if(!coso.empty()){
            cout << coso.back() << " ";
            coso.pop_back();
        }else {
            break;
        }
        if(!coso.empty()){
            cout << coso.front() << " ";
            coso.pop_front();
        }else {
            break;
        }
        if(!coso.empty()){
            cout << coso.front() << " ";
            coso.pop_front();
        }else {
            break;
        }

    }



}
