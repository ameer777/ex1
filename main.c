#include <stdio.h>
#include "myMath.h"

int main()
{
    double x;
   printf("please enter a double number : \n");
   scanf("%lf" , &x);
   
   double ans_i = Exponent(x) + power(x , 3) - 2;
   double ans_ii = mul(x , 3) + power(mul(x , 2) , 2);
   double ans_iii = ((power(mul(x , 4), 3)) / 5) - mul(x , 2);
   
   printf("answer for i is %.4lf \n",ans_i);
   printf("answer for ii is %.4lf \n",ans_ii);
   printf("answer for iii is %.4lf \n",ans_iii);
   
}
