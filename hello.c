#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

 
long count;//长整型
void move(int n,char A,char B,char C){//将n个圆盘从A立柱借助B立柱移动到C立柱上

if(n==1){//当只有一个圆盘时
    printf("移动第%d次：%c->%c\n",++count,A,C);
}else{
    move(n-1,A,C,B);//注意立柱顺序变为A、C、B
    printf("移动第%d次：%c->%c\n",++count,A,C);
    move(n-1,B,A,C);
    }
}
int main(){
 //SetConsoleOutputCP(65001); 
 count=0;//在主函数中将全局变量count初始化
 int n;//圆盘总数
 printf("请输入需要移动的总圆盘数：\n");
 scanf("%d",&n);
 move(n,'A','B','C');


 system("pause");
}


