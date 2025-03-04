#include <stdio.h>
#include <stdlib.h>

/*
all the memory is given in heap 
we have 4 functions for dynamic memory allocation :
1. malloc
2. calloc
3. realloc
4.free

malloc - memory allocation
All allocated memory is initialized by Garbage Value
calloc - contiguous allocation
All allocated memory is initialized by 0(ZERO)

*/
int main() {
    int *ptr;
    ptr = (int*)malloc(10*sizeof(int));
    int *ptr2;
    ptr2 = (int*)calloc(10,sizeof(int));

    ptr = (int*)realloc(ptr,20*sizeof(int));
    free(ptr);
    return 0;
}