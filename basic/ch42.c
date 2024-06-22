#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>

int main()
{
    char s1[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
    char s2[10];              // 크기가 10인 char형 배열을 선언
    //char *s3 = "Hello";    // 문자열 포인터
    char *s3 = (char *)malloc(sizeof(char)*20);         // 문자열 포인터

    strcpy(s2, s1);        // s1의 문자열을 s2로 복사
    
    printf("%s\n", s2);    // Hello

    strcpy(s3, s2);    // 실행 에러 왜? 문자열 포인터에 사용불가 왜? "Hello": 메모리주소: 읽기전용 

    printf("%s\n", s3);

    strcat(s3, s1);

    printf("%s\n", s3);

    free(s3);

    

    return 0;
}
