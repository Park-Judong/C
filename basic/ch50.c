//직사각형 넓이 구하기
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Rectangle {
    int x1, y1;
    int x2, y2;
};

int main()
{
    struct Rectangle rect;
    int area;

    rect.x1 = 20;
    rect.y1 = 20;
    rect.x2 = 40;
    rect.y2 = 30;

    int height= abs(rect.y1-rect.y2);
    int width= abs(rect.x1-rect.x2); 

    area = height * width;

    printf("%d\n", area);

    return 0;
}
