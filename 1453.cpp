#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[101];
    int count = 0;
    for (int i = 0; i < 101; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int sit;
        cin >> sit;
        if (arr[sit] == 1)
        {
            count++;
        }
        else
        {
            arr[sit] = 1;
        }
    }
    cout << count << endl;
}













































































































































