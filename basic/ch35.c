#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num1 = 20;
    int *numPtr1;

    numPtr1 = &num1;

    int *numPtr2;

    long long *numPtr3 = (long long *) malloc(sizeof(long long));

    int *numPtr4 = NULL;

    printf("numPtr4: %p\n", numPtr4);

    if(numPtr4 == NULL){
        numPtr4 = (int *)malloc(1024);
    }

    printf("numPtr4: %p\n", numPtr4);

    memset(numPtr3, 0, sizeof(long long));          //char array OR array initiation with 0

    printf("numPtr3: %llx\n", *numPtr3);

    numPtr2 = (int *)malloc(sizeof(int));

    printf("numPtr2: %d\n", *numPtr2);

    *numPtr2 = 11;

    printf("numPtr2: %d\n", *numPtr2);

    printf("%p\n", numPtr1);

    printf("%p\n", numPtr2);

    free(numPtr2);

    return 0;
}
