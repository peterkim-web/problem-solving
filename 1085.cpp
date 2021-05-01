#include <stdio.h>
int main() {
    int x, y, w, h;
    scanf("%d%d%d%d", &x, &y, &w, &h);
    // h-y w-x y x
    int ans = y;
    if(ans > x){
        ans = x;
    }
    if(ans > h-y){
        ans = h-y;
    }
    if(ans > w-x){
        ans = w-x;
    }
    printf("%d", ans);
    
    return 0;
}
