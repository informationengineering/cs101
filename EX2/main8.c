/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = -5;
    int y = 5;
    int z = 1;
    if (x < 0){
        int sum = (x*(-1)*100) + y*10 + z;
        printf("%d",sum);
    }
    else{
        printf("%d",(x*100) + y*10 + z);
    }

    return 0;
}
