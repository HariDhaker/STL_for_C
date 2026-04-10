#include <stdio.h>
#include <stdlib.h>

#define Array(size) _Generic(size, int: intArray(size), char: charArray(size), float: floatArray(size))

int *intArray(int size)
{
    int *arr = (int *)malloc(size * sizeof(*arr));
    return arr;
}
char *charArray(int size)
{
    char *arr = (char *)malloc(size * sizeof(*arr));
    return arr;
}
float *floatArray(int size)
{
    float *arr = (float *)malloc(size * sizeof(*arr));
    return arr;
}

int main()
{
    int *arr1 = Array(5);
    arr1[0] = 2;
    printf("%d", arr1[0]);

    char *arr2 = Array((char)5);
    arr2[1] = 'c';
    printf("%c", arr2[1]);

    float *arr3 = Array((float)5);
    arr3[2] = 1.22;
    printf("%f", arr3[2]);

    return 0;
}