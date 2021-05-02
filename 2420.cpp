#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if(a-b<0){
        printf("%lld", b-a);
    }
    else{
        printf("%lld", a-b);
    }
    
    return 0;
}
