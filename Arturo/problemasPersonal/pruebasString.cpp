#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

int main(){

    string a = "121";
    string b = "";

    for(int i = a.length() - 1; i >= 0; i--){
        b += a[i];
    }

    cout << b << endl;

    bool idk = (a ==b);

    cout << idk << endl;



	return 0;
}
