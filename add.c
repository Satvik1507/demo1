#include <stdio.h>
int main() {    

    int number1=10, number2=5, sum;
    
    printf("Enter two integers: ");
    //scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}