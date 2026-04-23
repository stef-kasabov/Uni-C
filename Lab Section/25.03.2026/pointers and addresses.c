#include <stdio.h>

// some pointers

int main()
{

    int var = 20;
    int *ip;

    ip = &var;

    printf("Address of var ", &var);
    printf("Data of ip ", ip);
    printf("Pointer of ip ", *ip);

    return 0;
}

int main ()
{
    int c, *pc;

    pc = &c; //true

    *pc = c; //true

    pc = c; //false

    *pc = &c; //false

    return 0;
}

int main ()
{
    int c = 5;
    int *p = &c;

    printf("%d", p);

    return 0;
}
