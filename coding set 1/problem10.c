#include <stdio.h>

int main()
{
    // pointer to an array
    int arr1[5] = {1, 2, 3, 4, 5};
    int (*p)[5] = &arr1;
    printf("Values of array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", (*p)[i]);
    }

    // array of pointers
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    
    int * arr2[5] = {&a, &b, &c, &d, &e};
    printf("Values of array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *arr2[i]);
    }
    return 0;
}
