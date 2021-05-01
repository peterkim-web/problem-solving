#include <iostream>
#include <string>

using namespace std;

int main() {
	while(true){
		
		string a;
		cin >> a;
		if(a == "0"){
			break;
		}
		
		bool isPal = true;
		for(int i = 0; i < a.length()/2; i++){
			if(a[i] != a[a.length()-i-1]){
				isPal = false;
				break;
			}
		}



		if (isPal) {
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
		
	
	return 0;
}


