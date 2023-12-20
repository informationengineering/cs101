/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
    float x;
    for(int i=0; i<=1000000; i=i+1){
        if (i%2 == 1)
            x = x - (1.0 / ((2.0*i)+1));
        else
            x = x + (1.0 / ((2.0*i)+1));
   }
   x = x * 4.0;
   printf("%f", x);

    return 0;
}
