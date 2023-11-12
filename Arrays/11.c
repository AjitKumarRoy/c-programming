// int arr[] = {1, 2, 3, 4, 5}
//For the given array what will the following give?
//*(arr + 2)
//*(arr + 5)


#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];

    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+5));


    return 0;
}
