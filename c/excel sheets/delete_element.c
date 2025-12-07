#include <stdio.h>
int main(){
    int n,pos;
    scanf("%d",&n);

    int a[1000];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&pos);
    for(int i = pos -1;i<n-1;i++){
        a[i] = a[i+1];
    }
    n--;
    for(int i = 0;i < n;i++){
        printf("%d ",a[i]);
    }

}
