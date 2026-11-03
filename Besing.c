#include <stdio.h>
int main (){
    // Check if the number is even or odd
    int number;
    printf("Enter any Number:");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%d Even number!",number);
    }else{
        printf("%d Odd number!",number);
    }






return 0;
}