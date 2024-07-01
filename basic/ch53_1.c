#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person *p[5];

    for(int i=0;i<5;i++){
        p[i] = (struct Person*)malloc(sizeof(struct Person));
        //memset(p[i], 0, sizeof(struct Person));
    }

    //scanf("%s %d %s %d %s %d %s %d %s %d\n", &(p[0]->name), &(p[0]->age),&(p[1]->name), &(p[1]->age),&(p[2]->name), &(p[2]->age),&(p[3]->name), &(p[3]->age),&(p[4]->name), &(p[4]->age));

    scanf("%s %d %s %d %s %d %s %d %s %d\n", p[0]->name,&(p[0]->age), p[1]->name,&(p[1]->age), p[2]->name,&(p[2]->age), p[3]->name,&(p[3]->age), p[4]->name,&(p[4]->age));

    //int Max=0;
    struct Person * M = (struct Person*)malloc(sizeof(struct Person*));
    //memset(M, 0, sizeof(struct Person));

    for(int j=0; j<sizeof(p) / sizeof(struct Person *)-1;j++){
        if(j==0){
            //Max = p[1]->age;wn
            M = p[0];
        }
        //printf("%d %d\n", p[j]->age, p[j+1]->age);
        if(p[j]->age    >=  p[j+1]->age){
            //M = p[j];
        }else if(p[j]->age  <   p[j+1]->age){
            M = p[j+1];
        }
        //printf("%d번째 M name: %s\n",M->name);
    }

    printf("%s\n", M->name);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        free(p[i]);
    }

    return 0;
}
