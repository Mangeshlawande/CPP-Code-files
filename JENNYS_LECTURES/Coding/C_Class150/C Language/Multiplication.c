#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
    int i;
    
    // If b is negative, make it positive for simplicity (it won't change the result)
    if (b < 0) {
        b = -b;
        a = -a;
    }
    
    for (i = 0; i < b; i++) {
        result += a;
    }
    
    return result;
}

int main() {
    int num1, num2, product;
    
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &num1, &num2);
    
    // Call the multiply function
    product = multiply(num1, num2);
    
    printf("Product using addition: %d\n", product);
    
    return 0;
}
