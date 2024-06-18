#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*char memu;

    //scanf("%c", &memu);

    switch (memu)
    {
        case 'f':
            printf("환타");
            break;
        case 'c':
            printf("콜라");
            break;
        case 'p':
            printf("포카리스웨트");
            break;
        default:
            printf("판매하지 않는 제품");
            break;
    }

    int alpha;
    
    //scanf("%d", &alpha);
    
    while(alpha >= 1200){
        alpha = alpha -1200;
        printf("%d\n", alpha);
    }
    

    unsigned int num1;
    unsigned int sum = 0;

    //scanf("%d", &num1);

    unsigned int i = 0;
    do
    {
        sum = sum + i;
        i++;        
    } while (i <= num1);

    printf("%d\n", sum);
*/
/*
    int x1;
    int x2;
    int z;

    scanf("%d %d", &x1, &x2);
    
    z = x1;

    while (1)
    {
        if(z > x2)
            break;
        else if(z % 10 == 7){
            z++;
            continue;
        }
            

        printf("%d ", z);
        z++;
    }

        return 0;
*/

    int i;
    int j;
    int q;
    scanf("%d", &j);
    
    for(i=0;i<j;i++){
        for(q=0;q<2*j-1;q++){
            if(q > (j-i-2) && q < (j+i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
