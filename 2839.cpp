#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	cin >> a;
	int div = a/5;
	
	for(int i = div; i >= 0; i--){
		int remain = (a - i*5);
		if(remain % 3 == 0){
			cout << i + remain/3 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}


 
