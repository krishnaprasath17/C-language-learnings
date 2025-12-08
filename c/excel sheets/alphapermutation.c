#include <stdio.h>
#include <ctype.h>
int count_a(char s[]){
    int count = 0;
    for(int i = 0;s[i] != '\0';i++){
        if(isalpha(s[i])){
            count ++;
        }
    }
    return 2 << count;
}
int main(){
    char s[1000];
    scanf("%s",&s);

    int result = count_a(s);
    printf("%d",result);
}