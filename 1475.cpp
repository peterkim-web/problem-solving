#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int num;
    cin >> num;
    if(num == 0){
        arr[0] = 1;
    }
    while (num != 0)
    {
        arr[num % 10]++;
        num = num / 10;
    }
    int max = 0;
    for(int i = 0; i < 9 ; i++){
        if(i == 6){
            int sett = (arr[6] + arr[9] + 1) / 2;

            if(sett > max){
                max = sett;
            }
            
        }
        else{
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    cout << max << endl;
}



































































