/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    int i = 1234;
    int len, ten_thousand, thousand, hundred, ten, unit, new_i;
    if(i >= 10000){
        len = 5;
        int a = i/10000;
        ten_thousand = a;
        thousand = (i-a*10000)/1000;
        hundred = (i-a*10000-thousand*1000)/100;
        ten = i%100/10;
        unit = i%10;
        new_i = ten_thousand*10000 + unit*1000 + hundred* 100 + ten*10 + thousand;
    }
    else if(i >= 1000){
        len = 4;
        unit = i%10;
        ten =  (i%100-unit)/10;
        hundred = i%1000/100;
        thousand = i/1000;
        new_i = unit*1000 + hundred* 100 + ten*10 + thousand;
    }
    else if(i >= 100){
        len = 3;
        unit = i%10;
        ten = (i%100-unit)/10;
        hundred = i/100;
        thousand = 0;
        new_i = unit*1000 + hundred* 100 + ten*10 + thousand;
    }
    else if(i >= 10){
        len = 2;
        unit = i%10;
        ten =  i/10;
        hundred = 0;
        thousand = 0;
        new_i = unit*1000 + hundred* 100 + ten*10 + thousand;
    }
    else{
        len = 1;
        unit = i;
        ten = 0;
        hundred = 0;
        thousand = 0;
        new_i = unit*1000 + hundred* 100 + ten*10 + thousand;
    }
    printf("%d",new_i);
    
    return 0;
}