/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int y = 1;
int x = 1;

int main(){
    while(y<=9){
        printf("%d*%d=%d\t",y,x,y*x);
    x<9 ? x++:(x=1,y++,printf("\n"));
    }
    
    return 0;
}
