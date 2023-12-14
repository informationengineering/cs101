/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 2;
    if (i % 3 == 0){
        printf("Love");
    }
    else if (i % 5 == 0) {
        printf("IU");
    }
    else if (i % 15 == 0){
        printf("Love IU");
    }
    else{
        printf("%d",i);
    }
    

    return 0;
}
