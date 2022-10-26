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

    string str;
    string tem;

    while(getline(cin, str)){
        for(int i = 0; i < str.length(); i++){
            tem = str[i];
            if(tem == " ")
                cout << "_";
            else {
                cout << str[i];
            }
        }
        cout << "\n";
    }


    return 0;
}
