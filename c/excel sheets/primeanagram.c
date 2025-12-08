#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int isAnagram(int a,int b){
    int c1[10] = {0},c2[10] = {0};
    while(a){c1[a % 10]++; a /= 10;}
    while(b){c2[b % 10]++; b /= 10;}
    for(int i=0;i<10;i++){
        if(c1[i] != c2[i]) return 0;
    }
    return 1;
}
int main(){
    int n,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(isPrime(a[i]) && isPrime(a[j]) && isAnagram(a[i],a[j])) {
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
}