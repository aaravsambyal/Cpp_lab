#include<stdio.h>

void swapbyvalue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
printf("value of x and y inside swap by value is %d and %d\n", a,b);
}

int swapbyreference(int *a, int *b){
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
    printf("value of a and b after swapping call by reference is %d and %d\n", *a, *b);
    return 0;
}
int main(){
    int x,y; 
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Before swapping value of x and y is %d and %d\n", x,y);
    
    swapbyvalue(x,y);
    printf("Value of x and y after swapping using call by value x=%d and y=%d\n", x, y);

    swapbyreference(&x,&y);
    printf("X and y after swapping by reference x=%d and y=%d");
    return 0;
}
