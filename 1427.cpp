#include <iostream>
#include <string>
#include <math.h>
using namespace std;
	

int main(){
	int a;
	cin >> a;
	int Index = 0;
	int arr[10000];	
	int n = 0;
	int temp;
	
	while(a != 0){
		int b = a%10;
		a /= 10;
		arr[Index++] = b;	
	}
	for(int t = 0; t < Index; t++){
		int max = arr[t];
		int maxIndex = t;
		
		for(int i = t + 1; i < Index; i++){
			if(arr[i] > max){
				max = arr[i];
				maxIndex = i;
			}
		}
		
		// swap arr[minIndex] & arr[t]
		temp = arr[t];
		arr[t] = arr[maxIndex];
		arr[maxIndex] = temp;
	}

	for(int i = 0; i < Index; i++){
		cout << arr[i];
	}	
	cout << endl;

}






































	// 9 8 7 6 5 4 3 2 1
	// => 오름 차순으로 정렬하고 싶음.
	// [9 8 7 6 5 4 3 2 *1]
	// 1 8 7 6 5 4 3 2 9
	// 1 [8 7 6 5 4 3 *2 9]
	// 1 2 [7 6 5 4 *3 8 9];
	// 1 2 3 6 5 4 7 8 9
	// 1 2 3 [6 5 4 7 8 9]
	// 1 2 3 4 [5 6 7 8 9];
	// 1 2 3 4 5 [6 7 8 9];
	// 1 2 3 4 5 6 [7 8 9]
	// 1 2 3 4 5 6 7 [8 9]
	// 1 2 3 4 5 6 7 8 [9]
	// 1 2 3 4 5 6 7 8 90
	
	// 1 5 2 3 8
	// 1 5 2 3 8
	// 1 2 5 3 8
	
	// arr[0] ~ arr[n - 1] 숫자 중에서 최솟값을 찾아서 arr[0]에 넣는다 -> (첫번째 숫자)
	// arr[1] ~ arr[n - 1] 숫자 중에서 최솟값을 찾아서 arr[1]에 넣는다 -> (두번쨰 숫자)
	// arr[2] ~ arr[n - 1] 숫자 중에서 최솟값을 찾아서 arr[2]에 넣는다 -> (세번쨰 숫자)
	// ...
	// arr[n - 1] ~ arr[n - 1] 숫자 중에서 최솟값을 찾아서 arr[n-1]에 넣는다 -> (마지막 숫자)
