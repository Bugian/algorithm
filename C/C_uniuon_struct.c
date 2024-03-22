/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

union myUnion{
    int intVal;
    char charVal[4];
};

struct myStruct{
    unsigned int field1: 1; // 1 bit
    unsigned int field2: 2; // 2 biti
    unsigned int field3: 3; // 3 biti
};

int main()
{
    union myUnion u;
    u.intVal = 0x12345678;
    printf("charVal[0]= %d\n", u.charVal[0]);
    
    struct myStruct s = {1, 2, 15};
    printf("field1 = %x, field2 = %x, field3 = %x\n", s.field1, s.field2, s.field3);
    
    long x = 30000 + 30000;
    printf ("%ld", x);

    return 0;
}
