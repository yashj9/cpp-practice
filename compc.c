//use to examine certain doubts

#include<stdio.h>

struct st1
{
    int x;
};


int main(void) {
    struct st1 abc;
    printf("Give value \n");
    scanf(" %d", &abc.x);
    printf("The value given is : %d \n", abc.x);
    return 0;
}