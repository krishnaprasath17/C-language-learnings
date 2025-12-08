#include <stdio.h>
int rowMinSum(int a[][50],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        int min= a[i][0];
        for(int j = 1;j<n;j++){
            if(a[i][j] < min)
            min = a[i][j];
        }
        sum += min;
    }
    return sum;
}
int colMinSum(int a[][50],int n){
    int sum = 0;
    for(int j = 0;j<n;j++){
        int min = a[0][j];
        for(int i=1;i<n;i++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
        sum += min;
    }
    return sum;
}

int diagonal1(int a[][50],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += a[i][i];
    }
    return sum;
}
int diagonal2(int a[][50],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i][n-i-1];
    }
     return sum;
}
   
int main(){
    int n;
    int a[50][50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int r = rowMinSum(a,n);
    int c = colMinSum(a,n);
    int d1 = diagonal1(a,n);
    int d2 = diagonal2(a,n);
    int tot = r + c + d1 + d2;
    printf("%d",tot);
}