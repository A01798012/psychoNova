#include <bits/stdc++.h>

using namespace std;

int main(){

    int g, c, p, t, o;
    int g1, c1, p1, t1, o1;
    int g2, c2, p2, t2, o2;

    int total;

    o = 1;
    t = 8*o;
    p = 2 * t;
    c = 2 * p;
    g = c * 4;



    cin >> g1 >> c1 >> p1 >> t1 >> o1;

    total = (g1*g) + (c1*c) + (p1*p) + (t1*t) + o1;
    int res;
    g2 = total / g;
    res = total % g;

    c2 = res / c;
    res = res % c;

    p2 = res / p;
    res = res % p;

    t2 = res / t;
    res = res % t;

    o2 =  res / o;

    printf("%d %d %d %d %d", g2, c2, p2, t2, o2);

    return 0;
}
