#include<stdio.h>
int main(){
int i = 0;
int arr[] = {4,6,7,2,9};
int *ptr = arr;

for(int i=0;i<5;i++){

    printf("%d\n", *ptr);
    ptr++;

}
}