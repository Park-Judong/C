//구조체: 관련 정보를 하나의 의미로 묶을 때 사용
#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

struct Dashboard {
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
};

int main()
{
    struct Dashboard d1;

    d1.speed = 80;
    d1.engineTemp = 200;
    d1.rpm = 1830;
    d1.mileage = 5821.442871f;
    //strcpy = (d1.fuel, 'F');  
    d1.fuel = 'F';

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d℃\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}
