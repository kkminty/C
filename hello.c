#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int max(int a, int b){
    return a>b ? a : b;
}

void main(){
    int x, y, maxval;
    //定义函数指针
    int (*pmax)(int, int) = max;  //也可以写作int (*pmax)(int a, int b)
    printf("Input two numbers:");
    scanf("%d %d", &x, &y);
    maxval = (*pmax)(x, y);
    printf("Max value: %d\n", maxval);
    
    system("pause");
}


