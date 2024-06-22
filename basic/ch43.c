#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일
#include <stdlib.h>

int main()
{
    char s1[20];    // 크기가 20인 char형 배열을 선언
    char *s2 = (char *)malloc(sizeof(char) * 20);  // char 20개 크기만큼 동적 메모리 할당

    sprintf(s2, "Hello, %s", "world!");    // "Hello, %s"로 서식을 지정하여 s1에 저장

    printf("%s\n", s2);    // Hello, world!: 문자열 s1 출력

    sprintf(s1, "Hello, %s", "world!");    // "Hello, %s"로 서식을 지정하여 s1에 저장

    printf("%s\n", s1);    // Hello, world!: 문자열 s1 출력

    free(s2);    // 동적 메모리 해제

    return 0;
}
