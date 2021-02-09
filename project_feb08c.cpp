#include  <stdio.h>

int main(){
    
    int i,j;
    printf("enter two numbers: ");
    scanf("%d %d",&i,&j);
    
    // Addition
    
    printf("Addition= : %d \n",i+j);
    printf("subtraction = : %d \n",i-j);
    printf("multiply= : %d \n",i*j);
    printf("Division= : %d \n",i/j);
    printf("Division mod operator= : %d |", i%j);
    
    return 0;
}