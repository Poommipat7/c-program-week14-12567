#include <stdio.h>
int testPointerByPointers()
{
    int *pc, c,d;
    float *pa, e;
    c = 5;
    d = -15;
    e = 20.5;

    pc = &c;
    printf("%d\n", c); //? 5
    pc = &d;
    printf("%d", *pc);//? -15
    pa = &e;
    printf("%d", *pa);//?
    return 0;
}