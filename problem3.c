#include<stdio.h>

void increment(int *p){
    (*p)++;
} 
 
int main(){
    int a = 5;
    increment(&a);
    printf("%d", a);
}