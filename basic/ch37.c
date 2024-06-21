#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int numArr[3][4] = {    
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };
    //int **numPtr = numArr;
    int (*numPtr)[4] = numArr;

    printf("%p \n", *numArr);
    printf("%p \n", *numPtr);
    printf("%d \n", sizeof(numArr));
    printf("%d \n", sizeof(numPtr));

    int col, row;

    col = sizeof(numArr)/sizeof(numArr[0]);
    row = sizeof(numArr[0])/sizeof(int);

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("%d ", numArr[i][j]);
        }
        printf("\n");
    }
    
    return 0;   
}
