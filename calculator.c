#include <stdio.h>

float sumation(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float

int main() {
    char operator;
    float  a, b, result = 0;

    printf("\n enter the  operator(+,-,*,/)");

    scanf ("%c",&operator);

    printf("\n enter the operands (a,b)");

    scanf("%f%f",&a,&b);

    switch (operator) {
        case'+':
                result = sumation(a, b);
                break;
        case'-':
                result = subtraction(a, b);
                break;
        case'*':
                result = a * b;
                break;
        case'/':
                result = a / b;
                break;
        default:
                printf("\n invalid operator");
    }

   printf("\n the result of %.2f %c %.2f = %.2f",a,operator, b,result);
   return 0;
}