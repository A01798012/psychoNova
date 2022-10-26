#include <bits/stdc++.h>

using namespace std;
double myPow(double x, int n) {
        if(x == 0) return 0;
        if(x == 1) return 1;
        if(n == 0) return 1;
        if(n == 1) return x;

        if(n < 0){
            return 1 / myPow(x, abs(n));
        }else{
            if(n == 0){
            return 1;
            }else{
                return x * myPow(x, n - 1);
            }
        }
}
int main(){

    cout << myPow(2, -100) << endl;
    cout << pow(0.00001, 2147483647) << endl;
    return 0;
}
