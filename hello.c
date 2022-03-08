#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define IN 1 /* inside a word */
#define NUMBER 30 /* outside a word */
#define M  10

int main()
{
    static int a[M]={-12,0,6,16,23,45,67,80,100,115};
    int n, low,mid,high,found;
    low = 0;
    high = M-1;
    // bool found = false;
    scanf("%d",&n);

    printf("input number %d\n",n);
    while(low<=high){
        mid =(low +high)/2;
        if(n == a[mid]){
            found = 1;
            break;
        }else if(n>a[mid]){
            low = a[mid]+1;
        }else{
            high = a[mid]-1;
        }

    }
    if(found == 1){
        printf("The index of %d is %d",n,mid);
    }else{
        printf("There is not %d",n);
    }

    system("pause");
} 