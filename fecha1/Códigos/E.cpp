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

int main()
{

    int n;
    int m;

    cin >> n;
    cin >> m;

    bool k = (n % m != 0);

    if (k)
    {
        cout << (n / m) + 1 << "\n";
    }
    else
    {
        cout << (n / m) << "\n";
    }

    return 0;
}
