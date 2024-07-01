#include <stdio.h>

struct EncryptionHeader {
    char flags;
    int abs;
    //int chocolate;
    char array;
};
 
int main()
{
    struct EncryptionHeader header;
 
    printf("%d\n", sizeof(header));

    return 0;
}
