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

    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);

    int cant;
    int max;

    cin >> cant;
    cin >> max;

    vector<int> amigos;

    int fN;

    for (int i = 0; i < cant; i++)
    {
        cin >> fN;
        amigos.push_back(fN);
    }

    int contadorRisas = 0;

    for (int i = 1; i <= max; i++)
    {
        for (int j = 0; j < amigos.size(); j++)
        {
            if (i % amigos[j] == 0)
            {
                contadorRisas++;
                break;
            }
        }
    }

    cout << contadorRisas;

    return 0;
}