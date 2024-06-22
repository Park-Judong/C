#include <stdio.h>
#include <string.h>    

int main()
{
    char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
    char s2[10];    // 크기가 10인 char형 배열을 선언하고 문자열 할당, 배열 크기 고정 

    printf("문자열을 입력하세요: ");
    scanf("%s", s2);

    printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
    printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함

    int ret = strcmp(s1, s2);    // 두 문자열이 같은지 문자열 비교

    switch (ret)
    {
    case 0:
        printf("두 문자열이 같음\n");
        break;
    case 1:
        printf("%s보다 %s가 큼\n", s2, s1);
        break;
    case -1:
        printf("%s보다 %s가 큼\n", s1, s2);
        break;
    }

    printf("%d\n", ret);         // 0: 두 문자열이 같으면 0

    //aaa: 97 97 97, aab: 97 97 98, aac: 97 97 99

    printf("%d\n", strcmp("aaa", "aaa"));    //  0: aaa와 aaa는 같으므로 0
    printf("%d\n", strcmp("aab", "aaa"));    //  1: aab와 aaa 중에서 aab가 크므로 1
    printf("%d\n", strcmp("aab", "aac"));    // -1: aab와 aac 중에서 aac가 크므로 -1

    return 0;
}
