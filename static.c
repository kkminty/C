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

/************************************************/
/*函数递归实现汉纳塔*/
/************************************************/
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

/************************************************/
/*定义一个指针变量并且取值*/
/************************************************/
void main(){
    int a = 100,b=999,temp;
    int *pa = &a,*pb=&b;   //定义指针变量时用*pa， &a为取地址
    printf("a=%d,b=%d",*pa,*pb);
    temp = *pa;
    *pa =*pb;   //除定义之外的所有的 *pa为取值
    *pb = temp;

    printf("a=%d,b=%d",a, b);

    system("pause");
}

/************************************************/
/*定义一个指针变量和数组*/
/************************************************/
void main(){
    int a[10];  //数组其实和指针相似，用地址取值
    int i;
    for (i=0;i<10;i++){
        printf("%d",*(a+i)); //*a表示取数组a的值
    }

    int *p;
    for(p=a;p<(a+10);p++){ 
        printf("%d",*p);
    }
}

/************************************************/
/*定义一个指针变量和字符串*/
/************************************************/
#include <stdio.h>
int main(){
    char str[20] = "c.biancheng.net";
   
    char *s1 = str;
    char *s2 = str+2;
   
    char c1 = str[4];
    char c2 = *str;
    char c3 = *(str+4);
    char c4 = *str+2;
    char c5 = (str+1)[5];
   
    int num1 = *str+2;
    long num2 = (long)str;
    long num3 = (long)(str+2);
    printf("  s1 = %s\n", s1);  //c.biancheng.net
    printf("  s2 = %s\n", s2);  //biancheng.net
    printf("  c1 = %c\n", c1);  //第四个字符的地址 'a'
    printf("  c2 = %c\n", c2); //'c'
    printf("  c3 = %c\n", c3); // 'a'
    printf("  c4 = %c\n", c4); // 'e'='c'+2
    printf("  c5 = %c\n", c5); // 'c' 表示以地址 str+1 为起点，向后偏移5个字符，等价于str[6
   
    printf("num1 = %d\n", num1); //*str+2 == 'c'+2 == 99+2 == 101
    printf("num2 = %ld\n", num2); //字符串 str 的首地址
    printf("num3 = %ld\n", num3); //第 2 个元素的地址
    return 0;
}

/************************************************/
/*定义一个指针变量，初始化为NULL*/
/************************************************/
void main(){
    char *str=NULL;
    int i,n;
    char *buffer;

    printf("The length of input char:");
    scanf("%d",&i);
    buffer = (char*)malloc(i+1); //void* malloc(size_t size);动态分配内存空间10字节,成功返回指向该内存的地址，失败返回NULL
    if(buffer=NULL) exit(1);//终结程序，0正常退出，1/-1异常退出 判断是否分配成功
    for(n=0;n<i;n++){
        buffer[n]=rand()%26+'a';
    }
    buffer[i]='\0';
    printf("char is %s\n",buffer);
    free(buffer);
}
/************************************************/
/*定义一个数组存放的都是指针变量*/
/************************************************/
int main(){
    int a=18,b=1,c=4;
    int *arr[3]={&a,&b,&c};// 定义一个指针数组
    int **parr=arr; //parr 是指向数组 arr 的指针，确切地说是指向 arr 第 0 个元素的指针
    printf("%d,%d,%d\n",*arr[0],*arr[1],*arr[2]);
    printf("%d,%d,%d\n",**(parr+0),**(parr+1),**(parr+2));

}
/************************************************/
/*玩转指针和二级指针*/
/************************************************/
int main(){
    char *lines[5] = {
        "COSC1283/1284",
        "Programming",
        "Techniques",
        "is",
        "great fun"
    };
    char *str1 = lines[1];
    char *str2 = *(lines + 3);
    char c1 = *(*(lines + 4) + 6);
    char c2 = (*lines + 5)[5];
    char c3 = *lines[0] + 2;
    printf("str1 = %s\n", str1); // 数组中1，programming
    printf("str2 = %s\n", str2); // lines + 3 为数组中第 3 个元素的地址
    printf("  c1 = %c\n", c1); //
    printf("  c2 = %c\n", c2); //
    printf("  c3 = %c\n", c3); //
    return 0;
}
/************************************************/
/*使用指针遍历二维数组*/
/************************************************/
void main(){
    int arr[3][4]={ {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };
    int (*p)[4];
    p=arr;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d",*(*(p+i)+j));
        }
        printf("\n");
    }
    system("pause");
}
/************************************************/
/*创建一个指针函数并调用指针*/
/************************************************/

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