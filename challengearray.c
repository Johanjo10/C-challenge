#include<stdio.h>
#include<string.h>

int main(){
    char str[30];

    scanf("%[^\n]", &str);
    getchar();

    int panjang = strlen(str);

    for(int i = 0; i <= strlen(str); i++){
        if(str[i] <= 97 && str[i]>= 122){
            str[i] -=32;
        }
    }
    printf("%s", strupr(str));

    return 0;
}