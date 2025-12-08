#include <stdio.h>
#include <string.h>

char reverse(char s[]){
    int i = 0,j = strlen(s) - 1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i ++;
        j --;
    }
}
int main(){
    char input[100];
    fgets(input,sizeof(input),stdin);

    char *word = strtok(input," \n");
    int pos = 1;

    while(word != NULL){
        if(pos % 2 == 0){
            reverse(word);
            printf("%s\n",word);
        }
        pos ++;
    word = strtok(NULL," \n");
    }
    

}