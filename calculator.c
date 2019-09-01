#include <stdio.h>

float sumation(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float devide(float a, float b) {
    return a / b;
}


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
                result = multiply(a, b);
                break;
        case'/':
                if (b == 0) {
                    printf("2nd oprend must be non zero\b");
                    return 0;
                }
                result = devide(a, b);
                break;
        default:
                printf("\n invalid operator");
    }

   printf("\n the result of %.2f %c %.2f = %.2f",a,operator, b,result);
   return 0;
}
