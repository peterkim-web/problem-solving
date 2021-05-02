#include <iostream>
using namespace std;

int main()
{
    int e, s, m;
    cin >> e >> s >> m;
    int E, S, M;
    E = 1;
    S = 1;
    M = 1;
    int AAA = 1;
    while (!(E == e && S == s && M == m))
    {
        E++;
        S++;
        M++;
        if (E > 15)
        {
            E = 1;
        }
        if (S > 28)
        {
            S = 1;
        }
        if (M > 19)
        {
            M = 1;
        }
        AAA++;
    }
    cout << AAA << endl;
}
