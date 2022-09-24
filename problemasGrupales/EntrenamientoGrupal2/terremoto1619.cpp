#include <iostream>

using namespace std;

int main()
{
    freopen("1619i.txt", "r", stdin);
    freopen("1619o.txt", "w", stdout);

    int numEsquinas;

    cin >> numEsquinas;

    int escombros[numEsquinas - 1];

    fill_n(escombros, numEsquinas - 1, 1);

    char caracterDelMomento;

    cin >> caracterDelMomento;

    while (caracterDelMomento != 'F')
    {

        if (caracterDelMomento == 'P')
        {

            int esquinaDeseada;

            bool sePuede = true;

            cin >> esquinaDeseada;

            for (int i = 0; i < esquinaDeseada - 1; i++)
            {
                if (escombros[i])
                {
                    cout << "0\n";
                    sePuede = false;
                    break;
                }
            }

            if (sePuede)
            {
                cout << "1\n";
            }
        }
        else if (caracterDelMomento == 'D')
        {
            int primerNum;
            int segundoNum;

            cin >> primerNum;
            cin >> segundoNum;

            int inicio = min(primerNum, segundoNum);
            int final = max(primerNum, segundoNum);

            for (int i = inicio - 1; i < final - 1; i++)
            {
                // cout << i << " i\n";
                escombros[i] = 0;
            }
        }

        cin >> caracterDelMomento;
    }

    return 0;
}