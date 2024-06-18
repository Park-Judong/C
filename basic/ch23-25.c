#include <stdio.h>
 
int main()
{
    unsigned char num1 = 3;     //  3: 0000 0011
    unsigned char num2 = 24;    // 24: 0001 1000
 
    unsigned char num5 = 131;    //  131: 1000 0011
    char num6 = -125;            // -125: 1000 0011
 
    unsigned char num3;
    char num4;

    num3 = num5 >> 5;    // num1의 비트 값을 오른쪽으로 5번 이동
    num4 = num6 >> 5;    // num2의 비트 값을 오른쪽으로 5번 이동

    unsigned char flag = 0;

    flag |= 1;    // 0000 0001 마스크와 비트 OR로 여덟 번째 비트를 켬

    if (flag & 1)    // & 연산자로 0000 0001 비트가 켜져 있는지 확인
        printf("0000 0001은 켜져 있음\n");
    else
        printf("0000 0001은 꺼져 있음\n");

    printf("%u\n", num1 << 3);  // 24: 0001 1000
    printf("%u\n", num2 >> 2);  //  6: 0000 0110

    printf("%u\n", num3);    //  4: 0000 0100: 맨 뒤의 11은 사라지고 0000 0100이 됨
    printf("%d\n", num4);    // -4: 1111 1100: 모자라는 공간은 부호 비트의 값인 1로  
                             // 채워지므로 1111 1100이 됨
 
    return 0;
}
