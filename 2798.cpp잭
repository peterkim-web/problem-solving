#include <iostream>
#include <string>
#include <math.h>
using namespace std;
	

int main(){
	int a, b;
	cin >> a >>  b;
	int card[1000000];
	for(int h = 0; h < a; h++){
		cin >> card[h];
	}
	
	int max = 0;
	
	for(int i = 0; i < a; i++){
		for(int j = i + 1; j < a; j++){
			for(int k = j + 1; k < a; k++){
				// i, j, k
				int sum = card[i] + card[j] + card[k];
				if(sum > max && sum <= b){
					max = sum;
				}
			}
		}
	}
	
	cout << max << endl;
	
}
