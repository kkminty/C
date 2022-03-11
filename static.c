/* 这里是整理的程序代码，每个小程序之间通过***隔开
*
*/

#include <stdio.h>
 #include <stdlib.h>

/***全局变量和函数声明 ***/
void func1(void);
static int count=10;        /* 全局变量 - static 是默认的 */
int main()
{
  while (count--) {
      func1();
  }
  return 0;
} 
void func1(void)
{
/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */                
  static int thingy=5;
  thingy++;
  printf(" thingy is %d , count is %d\n", thingy, count);
/*count 作为全局变量可以在函数内使用，thingy 使用 static 修饰后，不会在每次调用时重置。*/
  system("pause");
}


/************************************************/
/* 统计输入的空格，换行和制表符*/
/************************************************/
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


/************************************************/
/*利用函数地递归来实现 一个数地阶乘 !5=!4*5=!3*4*5 */
/************************************************/

double factorial(unsigned int i)
{
   if(i <= 1)
   {
      return 1;
   }
   return i * factorial(i - 1);
}
int  main()
{
    int i = 5;
    printf(" The factorial of %d is %f\n", i, factorial(i));

    system("pause");
    return 0;
}