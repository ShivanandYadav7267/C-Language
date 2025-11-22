#include <stdio.h>
#include <math.h>

/*1. Find Percentage of a Student (5 Subjects of 100 Marks Each)
int main() {
    int math, coumputer, english, physics, chemistry;
    int totalMarks = 0;
    float percentage = 0.0;

    // Input marks for 5 subjects
    printf("Enter marks of math : \n");
    scanf("%d", &math);

    printf("Enter marks of computer : \n");
    scanf("%d", &coumputer);

    printf("Enter marks of english : \n");
    scanf("%d", &english);

    printf("Enter marks of physics : \n");
    scanf("%d", &physics);

    printf("Enter marks of chemistry : \n");
    scanf("%d", &chemistry);


    totalMarks = math + coumputer + english + physics + chemistry;

    // Check if total marks exceed 500

    printf("Total Marks = %d\n", totalMarks);
    percentage = (totalMarks / 500.0) * 100;

    //For output
    printf("Total Marks = %d out of 500\n", totalMarks);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
*/

/*
// Q2. Sum of even and odd numbers from 1 to n.
int main (){

int n, i, evenSum = 0, oddSum = 0;
printf("Enter a number: \n");
scanf("%d", &n);

// Loop from 1 to n

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum = evenSum + i; // Add to even sum
        } else {
            oddSum = oddSum + i; // Add to odd sum
        }
    }

    // Print the results
    printf("Sum of even numbers  %d\n", evenSum); // output  2+4+6+8+10 = 30
    printf("Sum of odd numbers  %d\n", oddSum);  // output  1+3+5+7+9 = 25

    return 0;
}
*/




/*12. Write a program to print the sum of all numbers up to a given number.
int main () {

int n;
int sum = 0;
retry:
printf("Enter a positive number : ");
scanf("%d",&n);
if(n<=0){
    printf("Invalid input. Please try again.\n");
    goto retry;
}
for(int i = 1; i<=n; i++){

        sum += i;

    }
    printf("Total sum is : %d",sum);


    return 0;
}
*/

/*13. Write a program to find the factorial of a given number.


int main (){
int n;
unsigned long long factorial = 1;
retry:
printf("Enter a positive number : ");
scanf("%d",&n);
if(n<0){
    printf("Factorial is not defined for negative numbers.\n");
    goto retry;
}
for(int i = 1; i<=n; i++){
        factorial *= i;
    }
    printf("Factorial of %d is = %llu",n,factorial);
    return 0;
}
*/



/*14. Write  a program t oprint sum of even and odd numbers from 1 to N numbers.

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Even numbers is : ");
    for (int k = 1; k <= n; k++)
    {
        if (k % 2 == 0)
        {
            printf("%d ",k);
        }
    }

     printf("\nOdd numbers is : ");
    for (int k = 1; k <= n; k++)
    {
        if (k % 2 != 0)
        {
            printf("%d ", k);
        }
    }

    return 0;
}
*/
/*16. Write a program to check whether the entered number is primre or not.
int main()
{
    int number;
    int  isPrime = 1;
    printf("Enter the number : ");
    scanf("%d", &number);
    if(number<=1){
        isPrime = 0;
    }
    for (int i = 2; i <=number/2; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        printf("%d is a prime number.\n",number);
    }else 
    {
    printf("%d is not a prime number.",number); 
    } 
    return 0;
}
*/

/*17. Write a program to find the sum of digits of the entered number.

int main (){
int num;
int  digit = 0,sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Sum of digit of %d is = ",num);
while(num !=0){
    digit = num%10;
    sum += digit;
    num = num/10;
        printf("%d",digit);
        if(num > 0){
            printf(" + ");
        }
        if(num == 0){
        printf(" = %d",sum);
    }
}
    return 0;
}
*/

/*18. Write a program to find the reverse of a number.
int main (){
    int num, digit, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    while(num !=0){
        digit = num%10;
    sum = sum*10 + digit;
    num = num/10;
    
}
printf("Reverse number is = %d",sum);
return 0;
}
*/



/*19. Write a program to print Armstrong numbers from 1 to 100.
int main (){

int num,number, sum = 0, power = 0;
printf("Enter a positive number : ");
scanf("%d", &num);

number = num;
int temp = num;
while (num != 0){
    num = num/10;
    power++;
}
while(number != 0){
    int digit = number%10;
    sum = sum + pow(digit, power);
    number = number/10;
}
  if(sum == temp){
printf("%d is a Armstrong number.",temp);
}else{
    printf("%d is not an Armstrong number.\n",temp);
}
return 0;
}


*/
