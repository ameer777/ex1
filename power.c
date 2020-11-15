#include <stdio.h>
#include "myMath.h"
#define e 2.718281828459045

double Exponent(int x){
    
    double ans = 1;
    for(int i = 0 ; i < x ; i ++){
        ans= ans *e;
    }
    return ans;
}

double power(double x , int y){
    
    double ans = 1;
    for(int i = 0 ; i < y ; i++){
        ans = ans *x;
    }
    return ans;
}