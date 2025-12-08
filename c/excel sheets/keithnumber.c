#include <stdio.h>
int iskeith(int x){
    int d[10],n = 0,temp = x;
    while (temp){
        d[n++] = temp % 10;
        temp /= 10;
    }
    for(int i=0;i<n/2;i++){
        int t = d[i];
        d[i] = d[n-i-1];
        d[n-i-1] = t;
    }
    int seq[100],k = n,next = 0;
    for(int i = 0;i<n;i++){
        seq[i] = d[i];
    }
    while(next < x){
        next = 0;
        for(int i = 1;i<=n;i++){
            next += seq[k-i];
        }
        seq[k++] = next;
    }
    return next == x;
}
int main(){
    int n,t;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&n);
        printf(iskeith(n) ? "yes\n" : "no\n");
    }
}