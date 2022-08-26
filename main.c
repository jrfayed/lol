#include <stdio.h>
#include <stdlib.h>
struct s {

    int x;
    char y;
    int z;

    }s,*p;


int main()
{

    p=&s;
    p->z='y';
    p->z='O';
    printf("%c",s.z);




    return 0;
}
