/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 2100;
    if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)){
        printf("閏年");
    }
    else{
        printf("不是閏年");
    }
    

    return 0;
}
