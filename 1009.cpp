#include <iostream>

using namespace std;

int main(){
    
    int a, b;
    
    int t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        

        cin >> a >> b;
        
        int sum = 1;
    
        for(int j = 0; j < b; j++){
            
            sum = sum * a;  
            
            sum = sum % 10;
        
        
        }
        if(sum == 0){
            cout << 10 << endl;
        }    
        else{
            cout << sum << endl;
        }
    } 
    
    
    return 0;
}


