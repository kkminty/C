#include <stdio.h>
 #include <stdlib.h>
/* 函数声明 */
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