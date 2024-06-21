#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int numArr1[10] = { 0, };      // Every Element: 0
    int numArr2[5] = {4,5,6,7,8};
    int sum1=0, sum2=0;
    int *Ptr;

    //Converting 10 to 2
    int a, j = 0, k;
    int rest;
    int Arr[20];

    printf("변환할 10진수 양수: ");
    scanf("%d", &a);

    if(a == 0){
        printf("2진수: 0\n");

        return 0;
    }else if(a < 0){
        printf("2진수: 음수\n0");

        return 0;
    }else{
        do{
            rest = a % 2;
            a = a / 2;
            Arr[j] = rest;
            j++;
        }while(a>=1);
    }

    for(k = j - 1; k >= 0; k--){
        if(k==j-1){
            printf("binary: ");
        }
        
        printf("%d ", Arr[k]);
        if(k==0){
            printf("₂");
        }
    }
    printf("\n");


    Ptr = numArr2;

    for(int i = sizeof(numArr2)/sizeof(int) - 1; i >= 0; i--){
        printf("%d\n", *(Ptr+i));
        sum2 += *(Ptr+i);
        printf("%d\n", sum2);
    }

    printf("%d\n", numArr1[2]);    
    printf("%d\n", numArr1[12]);    

    for(int i = sizeof(numArr2)/sizeof(int) - 1; i >= 0; i--){
        printf("%d\n", numArr2[i]);
        sum1 += numArr2[i];
    }

    printf("%d\n", sum1);
    printf("%d\n", sum2);

    return 0;
}
