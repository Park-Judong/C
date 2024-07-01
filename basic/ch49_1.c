#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point3D {
    float x;
    float y;
    float z;
};

struct Person {
    char name[20];
    int age;
    char address[100];
};

typedef struct {
    char name[20];
    int number;
    int displacement;
} Car;
 
int main()
{
    struct Person * p2 = (struct Person *)malloc(sizeof(struct Person));

    strcpy(p2->name,"고길동");
    p2->age = 40;
    strcpy(p2->address,"서울시 서초구 반포동");

    Car * c1 = (Car *)malloc(sizeof(Car));

    strcpy(c1->name,"스텔라");
    c1->number=3421;
    c1->displacement=2000;

    struct Point3D p1 = { 10.0f, 20.0f, 30.0f };
    struct Point3D *ptr;

    ptr = &p1;

    printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);

    printf("이름: %s\n", p2->name);
    printf("나이: %d\n", p2->age);
    printf("주소: %s\n", p2->address);

    printf("자동차 이름: %s\n", c1->name);
    printf("자동차 번호: %d\n", c1->number);
    printf("배기량: %dcc\n", c1->displacement);

    free(p2);
    free(c1);

    return 0;
}
