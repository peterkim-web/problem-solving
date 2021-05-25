#include <iostream>

using namespace std;

int main()
{
    int p;
    cin >> p;
    for (int l = 0; l < p; l++)
    {
        int n, k;
        cin >> n >> k;
        int arr[16][16];
        for (int i = 1; i <= k; i++)
        {
            arr[0][i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (j == 1)
                {
                    arr[i][j] = arr[i - 1][j];
                }
                else
                {
                    arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
                }
            }
        }
        cout << arr[n][k] << endl;
    }
}
