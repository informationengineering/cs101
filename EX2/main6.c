/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 1599;
    if(i <= 1500){
        printf("70元");
    }
    else{
        int num = i - 1500;
        if(num % 100){
            int k = ((num/30) + 1)*10;
            printf("%d 元", 70+k);
        }
        else{
            printf("%d 元", 70 + (num/30)*10);
        }
    }

    return 0;
}
