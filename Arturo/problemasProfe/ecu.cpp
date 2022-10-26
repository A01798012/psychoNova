#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int p, s, t;
        cin >> p >> s >> t;

        if(p + s == t){
            cout << p << " + " << s << " = " << t;
        }else if(p == s + t){
            cout << p << " = " << s << " + " << t ;
        }

        if(p - s == t){
            cout << p << " - " << s << " = " << t ;
        }else if(p == s - t){
            cout << p << " = " << s << " - " << t ;
        }

        if(p * s == t){
            cout << p << " * " << s << " = " << t ;
        }else if(p == s * t){
            cout << p << " = " << s << " * " << t ;
        }

        if(p / s == t){
            cout << p << " / " << s << " = " << t ;
        }else if(p == s + t){
            cout << p << " = " << s << " / " << t ;
        }

    return 0;
}
