#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    float arr[1000];
    
    for(int i = 0; i < a; i++){
        scanf("%f", &arr[i]);
    }
    float max = 0;
    for(int i = 0; i < a; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    for(int i = 0; i < a; i++){
        arr[i] = arr[i] / max * 100;
    }
    float sum = 0;
    for(int i = 0; i < a; i++){
        sum = arr[i] + sum;
    }
    printf("%f", sum / a);
    return 0;
}
