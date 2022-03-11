#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define IN 1 /* inside a word */
#define NUMBER 30 /* outside a word */
#define M  10

int sqrt_02(int question);


int main()
{
    int c, nb,nt,nl;
    nb=nt=nl=0;
    while(c=getchar()!=EOF){ // EOF(end of file) 文件结束符 ctrl+Z,回车
        if(c == '\0'){
            ++nb;
        }
        if(c=='\t'){
            ++nt;
        }
        if(c == '\n'){
            ++nl;
        }
    }
    printf("%d,%d,%d\n",nb,nt,nl);
     
    system("pause");
} 


