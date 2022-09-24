#include <iostream>
#include <cmath>

int funcion(int n, int k)
{
    if (n == 0)
    {
        return k;
    }
    else
    {
        return funcion(n - 1, k) + 2 * funcion(n - k, 1 - k);
    }
}

int main()
{
    int n;
    std::cin >> n;

    int modulo = std::pow(2, 64);

    std::cout << funcion(n, 0) % modulo << "\n";
}