#include<stdio.h>

int main(){
    int angka1;
    int angka2, angka3;

    scanf("%d", &angka1);
    scanf("%d %d", &angka2, &angka3);

    if(angka1 >= angka2 && angka1 <= angka3){
        printf("%d diantara %d dan %d", angka1, angka2, angka3);
    }else {
        printf("%d tidak diantara %d dan %d", angka1, angka2, angka3);
    }
}