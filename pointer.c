#include<stdio.h>

void helloWorld(){
    printf("Johan febriansyah");
}


int getNumber(){
    return 5;
}

int sum(int *first, int *second){
    printf("alamat = %d\n", first);
    printf("alamat =  %d\n", second);
    int total = *first + *second;
    return total;
}



int main(){
    // int a = 0;

    // int *p;
    // int **p2;
    // p = &a;
    // p2 = &p;


    // printf("%d\n", *p2);
    // printf("%d\n", &p);

    //helloWorld();

    int a = getNumber();
    printf("%d\n", getNumber());
    int first = 2;
    int second = 7;
    int hasilSum = sum(&first, &second);
    printf("%d\n", hasilSum);

}