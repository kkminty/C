#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void main(){
    int a = 100,b=999,temp;
    int *pa = &a,*pb=&b;   
    printf("a=%d,b=%d",*pa,*pb);
    temp = *pa;
    *pa =*pb;
    *pb = temp;

    printf("a=%d,b=%d",a, b);

    system("pause");
}


