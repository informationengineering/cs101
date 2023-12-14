/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 119;
    if(i <= 30){
        printf("免費");
    }
    else if(i >= 240){
        printf("240元");
    }
    else{
        if(i % 30){
            int a = ((i/30) + 1)*30;
            printf("%d 元", a);
        }
        else{
            printf("%d 元", i);
        }
    }

    return 0;
}
