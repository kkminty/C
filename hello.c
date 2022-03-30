#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void main(){
    int arr[]={99,12,1,55,102};
    int *p=arr+4; //int *p=&arr[0]；指向数组第0个元素
    int len = sizeof(arr)/sizeof(int); //求数组的长度
    printf("%d\n",len);
    
    for(int i=0;i<len;i++){
        printf("%d\t",*p--);
    }
    system("pause");
}


