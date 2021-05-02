#include <iostream>
#include <string>

using namespace std;

int main(){
// 	// int a;
// 	// int sum;
// 	// sum = 1;
	
// 	// cin >> a;
// 	// for(int i = a; i >= 1; i--){
// 	// 	sum = sum * i;	
// 	// }
// 	// cout << sum << endl;

// 	// // for (초기 설정, 조건, 한번 끝날 때 마다 실행할 문장)
// 	// // 10
// 	// // 10 * 9 * 8 * ... * 1
// 	int a, b, c;
// 	cin >> a >> b >> c;

// 	int sum = a * b - c;
// 	if(sum < 0){
// 		sum = 0;
		
// 	}
	
// 	cout << sum << endl;
	
	
	
	
// 	int a;
// 	int b, c, d, e, f;
	
// 	cin >> a >> b >> c >> d >> e >> f;
	
// 	int sum = 0;
// 	if(a == b){
// 		sum += 1;
// 	}
	
// 	if(a == c){
// 		sum += 1;
// 	}
	
// 	if(a == d){
// 		sum += 1;
// 	}
	
// 	if(a == e){
// 		sum += 1;
// 	}
	
// 	if(a == f){
// 		sum += 1;
	
// 	}
// 	cout << sum << endl;
	// int a;
	// cin >> a;
	
	// for(int i = 0; i < a; i++){
	// 	double b;
	// 	cin >> b;
	// 	b *= 0.8;
	// 	cout << fixed;
	// 	cout.precision(2); 
	// 	cout << "$" << b << endl;
	// }
	
	int a, b, c;
	cin >> a >> b >> c;
	
	if(	c-b <= 0){
		cout << -1 << endl;
		return 0;
	}
	
	int x = a / (c - b) + 1;
	cout << x << endl;

	
	
	return 0;
}
