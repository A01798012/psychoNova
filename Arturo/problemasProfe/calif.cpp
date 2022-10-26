#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, c;

    cin >> n;
// 0 5 6 7
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c < 3)
            cout << 0 << endl;
        else if(c == 3 || c == 4 || c == 5)
            cout << 5<< endl;
        else if(c == 6)
            cout << 6<< endl;
        else {
            cout << 7<< endl;
        }

    }

  return 0;
}
