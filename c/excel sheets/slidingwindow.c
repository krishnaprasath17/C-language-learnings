#include <stdio.h>
int maxInWindow(int a[],int start,int k){
    int max = a[start];
    for(int i = start;i<start+k;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int n,k;
    scanf("%d",&n);
    int a[1000];
    for(int i = 0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int i=0;i<=n-k;i++){
        printf("%d ",maxInWindow(a,i,k));
    }
    return 0;
}