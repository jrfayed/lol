 #include <stdio.h>
#include <stdlib.h>

struct date {
int day;
int mth;
int yr;
};

struct employee {

char name[20];
int id;
float slr;
struct date bd;

};


int main() {

struct employee A={"Abdullah",15,3050.6,20,12,2008};
printf("DOB %d/%d/%d\n",A.bd /*.day,A.bd.mth,A.bd.yr);
printf("%d",&A);










