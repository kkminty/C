#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

 
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


