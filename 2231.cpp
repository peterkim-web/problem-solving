#include <iostream>
#include <string>

using namespace std;
	
int decompositionSum(int num) {
	int sum = 0;
	sum += num;

	// num 의 분해합을 return 한다.
	while(num!=0){
		int b = num % 10;
		sum += b;
		num = num / 10;
	}
		return sum;
		// 12345
		// 1234
		// 123
		// 12
		// 1
		// 0
}


	
int main() {
	int a;
	cin >> a;
	
	for(int i = 1; i <= a-1; i++){
		if(a == decompositionSum(i)){
			cout << i << endl;
			return 0;
		}
		
	}
	cout << 0 << endl;
	
	return 0;
}


 
