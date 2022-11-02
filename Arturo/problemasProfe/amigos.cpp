#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vector<int> n1, n2;

    int x, y;
    cin >> x >> y;

    for(int i = 1; i < x; i++){
        if(x % i == 0)
            n1.push_back(i);
    }
    for(int i = 1; i < y; i++){
        if(y % i == 0)
            n2.push_back(i);
    }
    int sum1 = 0; int sum2 = 0;

    for(int i: n1){
        sum1 += i;
    }
    for(int i: n2){
        sum2 += i;
    }

    if(sum1 == y && sum2 == x){
        cout << "Es Amigo";
    }else {
        cout << "No es Amigo";
    }



    return 0;
}
