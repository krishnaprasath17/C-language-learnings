#include <stdio.h>
#include <stdbool.h>

bool isprime(int n,int i){
    if(n < 2) return false;
    if(i * i > n ) return true;
    if(n % i == 0) return false;
    return isprime(n,i+1);
}
bool checkrotations(int original,int rotated){
    if(!isprime(rotated,2)){
        return false;
    }
    int temp = rotated,p = 1;
    while(temp >= 10){
        temp /= 10;
        p*= 10;
    }
    int last = rotated % 10;
    int next = last * p + rotated / 10;
    if(next == original) return true;
    return checkrotations(original,next);
}
bool isCircularPrime(int n){
    return checkrotations(n,n);
}
int main(){
    int n;
    scanf(" %d",&n);
    if(isCircularPrime(n)){
        printf("Circular Prime");
    }
    else printf("Not Circular prime");
}