#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size1;
    int size2;
    
    int *numPtr = (int *)malloc(sizeof(int) * 10); 
    int **m = (int **)malloc(sizeof(int) * 5);   

    for(int j=0;j<5;j++){
        m[j] = (int *)malloc(sizeof(int) * 6);
    }

    for(int k=0;k<5;k++){
        for(int l=0;l<6;l++){
            m[k][l] = k*10+l;
        }
    }

    for(int k=0;k<5;k++){
        for(int l=0;l<6;l++){
            printf("%d\n",m[k][l]);
        }
    }

    for(int k=0;k<5;k++){
            free(m[k]);
    }

    //free(m);
    
    
    for(int i=0;i<10;i++){
        numPtr[i] = i;
    }

    for(int i=0;i<10;i++){
        printf("%d\n", numPtr[i]);
    }    

    //free(numPtr);    
    
    
    scanf("%d", &size1);
    scanf("%d", &size2); 

    int numArr[size1];    
    
    return 0;
}
