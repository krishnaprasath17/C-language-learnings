#include <stdio.h>
int odd(int a[],int n){
    if(n==0) return 0;
    int x = (a[n-1] % 2 != 0 ) ? a[n-1] : 0;
    return x + odd(a,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    int result = odd(a,n);
    printf("%d",result);
}