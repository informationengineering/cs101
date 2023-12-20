/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    int temp;
    int n = 7;

    for(int i = 1; i <= n; i++){
        temp = (15-(2*i-1))/2;
        temp = floor(temp);
        printf("%*d ", temp,i);
        for(int j = 1; j <= i-1; j++){
            printf("%d ",i);
        }
        
        printf("\n");
    }

    return 0;
}
    