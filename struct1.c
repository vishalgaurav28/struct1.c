/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

struct employee
{
    int id;
    char name [50];
}e1;
int main()
{
    e1.id=101;
    strcpy(e1.name,"vishal gaurav");
    printf("employee 1 id :%d\n",e1.id);
    printf("employee 1 name:%s\n",e1.name);
    return 0;
}

