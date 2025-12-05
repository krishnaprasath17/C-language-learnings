#include <stdio.h>
long long factorial(int n){
    if (n==0||n==1)
    return 1;
    return n * factorial(n-1);
}
long long permutation(int n,int r)
{
    return factorial(n) / factorial(n-r);
}

int main(){
    int n,r;
    printf("n: ");
    scanf("%d", &n);

    printf("r: ");
    scanf("%d",&r);

    if(r > n){
        printf("Invalid");
        return 0;
    }
    long long result = permutation(n,r);
    printf("P(%d,%d) = %lld\n",n,r,result);
    return 0;
}