/*CalC

#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c to consume any leftover newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;

            default:
            printf("Invalid operator.\n");
        }
        
        return 0;
    }
*/

/*Check the number is Palindrome or not
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("Palindrome number.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}

*/

/*Addition and Multiplication of matrix
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], mult[10][10];
    int i, j, k, r, c;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    if (r > 10 || c > 10) {
    printf("Error: Maximum allowed size is 10x10.\n");
    return 1; // Exit the program
}


    // Input elements of matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            mult[i][j] = 0;
            for (k = 0; k < c; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}

*/

/*Check the number is prime or not
#include <stdio.h>
int main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        flag = 1;

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime number.\n");
    else
        printf("Not a Prime number.\n");

    return 0;
}
*/


/*Print the fibonacci series
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
*/

/* Check the palindrome of character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads string without spaces

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome string.\n");
    else
        printf("Not a palindrome string.\n");

    return 0;
}
*/

/*Check the number is armstrong 
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    float result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Calculate sum of nth power of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num)
        printf("Armstrong number.\n");
    else
        printf("Not an Armstrong number.\n");

    return 0;
}
*/

//result should be integer


/* Factorial of a number
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d\n", factorial(num));

    return 0;
}

//it show error for negative number
// for larger value it will be long long
*/


/*Searching 

#include <stdio.h>

int main() {
    int a[100], n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }

    printf("Element not found.\n");
    return 0;
}




//   if (n <= 0 || n > 100) {
//         printf("Error: Invalid number of elements. Please enter between 1 and 100.\n");
//         return 1;  // return non-zero to indicate error
    }*/





    
/*Bubble sort

#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;

    printf("Enter number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Error: Invalid number of elements.\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // swap
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

//Handling error

*/

/*Selection sort
#include <stdio.h>

int main() {
    int a[100], n, i, j, min, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Error: Invalid number of elements.\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        // Swap a[i] and a[min]
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/



