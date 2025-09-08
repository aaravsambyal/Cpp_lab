#include<stdio.h>

void reverse(int *arr, int n){

    int *ptr = &arr[n-1];
    for (int i = 0; i<n; i++){
        printf("%d\n", *ptr);
        ptr--;
    }
    
}

int main(){
    int arr[] = {12, 4, 8, 10, 6};
    int *ptr = arr;
    reverse(ptr , 5);

    return 0;
    
}