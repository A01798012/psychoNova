
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int arr[n];
    int ar[n-1];
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        arr[i] = x;
    }
    for(int i = 0; i < n - 1; i++){
        cin >> x;
        ar[i] = x;
    }

    for(int i = 0; i < n -1; i++){
        if(ar[i] != arr[i]){
            cout << arr[i];
            break;
        }

    }

    return 0;
}
