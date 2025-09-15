#include<stdio.h>

int main(){

    char *arr[5]={"Raj", "Rajeev", "Ron", "Rahul", "Rajesh" };

    printf("Names:\n");
    for (int i=0; i<5; i++){
        printf("%s\n", *(arr+i));
    }


}