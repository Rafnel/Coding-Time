#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double add(double x1, double x2){
    return (x1 + x2);
}

double subtract(double x1, double x2){
    return (x1 - x2);
}

double multiply(double x1, double x2){
    return (x1 * x2);
}

double divide(double x1, double x2){
    return (x1 / x2);
}

double power(double base, double exponent){
    return pow(base, exponent);
}

double naturalLog(double argument){
    return log(argument);
}

double compoundInterest(double principal, int numYears, double interestRate){
    return principal * pow(1 + (interestRate / numYears), numYears * 12);
}

int factorial(int base) {
    if(base >= 1) {
        return base * factorial(base - 1);
    } else {
        return 1;
    }
}

int permutation(int n, int m) {
    int total = 1;

    for(int i = n; i > n - m; i--) {
        total *= i;
    }

    return total;
}

int combination(int n, int m) {
    return permutation(n,m) / factorial (m);
}



void playGuessingGame(){
    time_t t;
    srand((unsigned) time(&t));

    int random = rand() % 100 + 1;

    int selection = -1;
    int tries = 1;

    printf("I have generated a number between 1 and 100. Try to guess it!\n");
    while(selection != random){
        // give them hints if they suck
        if(tries == 4){
            if(random % 3 == 0){
                printf("HINT: My number is divisible by 3...\n");
            }
            else{
                printf("HINT: My number is NOT divisible by 3...\n");
            }
        }
        else if(tries == 8){
            if(random % 2 == 0){
                printf("HINT: My number is divisible by 2...\n");
            }
            else{
                printf("HINT: My number is not divisible by 2...\n");
            }
        }

        printf("Attempt %d: Make a guess:\n", tries);
        scanf("%d", &selection);

        if(selection == random){
            printf("Wow! You got it! %d is my number. It only took you %d guesses.\n", selection, tries);
        }
        else if(selection > random){
            printf("Your number is too high...\n");
        }
        else{
            printf("Your number is too low...\n");
        }

        tries++;
    }
}

int main() {

    int Choice;
    printf("Welcome to the the Epic Calculator System (ECS)!\n");

    do {
        Choice = -1;
        printf("1. Add\n"
               "2. Subtract\n"
               "3. Multiply\n"
               "4. Divide\n"
               "5. Power\n"
               "6. Natural Log\n"
               "7. Compound Interest\n"
               "8. Factorial\n"
               "9. Combination\n"
               "10. Permutation\n"
               "11. Play Guessing Game!\n"
               "0. Exit\n");

        printf("Select the operation you would like to perform!\n");
        scanf("%d", &Choice);
        printf("Choice = %d\n", Choice);

        if (Choice >= 1 && Choice <= 4) {
            double num1, num2;

            printf("Enter your first number:\n");
            scanf("%lf", &num1);

            printf("Enter your second number:\n");
            scanf("%lf", &num2);

            switch(Choice) {
                case 1:
                    printf("%lf + %lf = %lf \n", num1, num2, add(num1, num2));
                    break;
                case 2:
                    printf("%lf - %lf = %lf \n", num1, num2, subtract(num1, num2));
                    break;
                case 3:
                    printf("%lf * %lf = %lf \n", num1, num2, multiply(num1, num2));
                    break;
                case 4:
                    printf("%lf / %lf = %lf \n", num1, num2, divide(num1, num2));
                    break;
            }
        }
        else if (Choice == 5) {
            double base, exponent;

            printf("Enter the base:\n");
            scanf("%lf", &base);

            printf("Enter the exponent:\n");
            scanf("%lf", &exponent);

            printf("%lf^%lf = %lf \n", base, exponent, power(base, exponent));
        } else if (Choice == 6) {
            double logArg;

            printf("Enter the argument for natural log:\n");
            scanf("%lf", &logArg);

            printf("ln(%lf) = %lf \n", logArg, naturalLog(logArg));
        } else if (Choice == 7) {
            double principal, interestRate;
            int numYears;

            printf("Enter the principal dollar amount to save:\n");
            scanf("%lf", &principal);

            printf("Enter the yearly interest rate to be saved at:\n");
            scanf("%lf", &interestRate);

            printf("Enter the number of years to save this amount:\n");
            scanf("%d", &numYears);

            printf("After %d years, your initial principal of $%lf becomes %lf",
                    numYears, principal, compoundInterest(principal, numYears, interestRate));
        } else if (Choice == 8) {
            int factorialNumber;

            printf("Enter the number to find the factorial of:\n");
            scanf("%i", &factorialNumber);

            if(factorialNumber >= 0) {
                printf("%i! = %i\n", factorialNumber, factorial(factorialNumber));
            } else {
                printf("Cannot take the factorial of a negative number!\n");
            }

        } else if (Choice == 9) {
            int n, m;

            printf("Enter the combination in the form: nCm");

            printf("\nn = ");
            scanf("%i", &n);

            printf("\nm = ");
            scanf("%i", &m);

            if(n < 0 || m < 0 || m > n) {
                printf("Invalid combination. Enter such that n ≥ m ≥ 0\n");
            } else {
                printf("%iC%i = %i\n", n, m, combination(n, m));
            }

        } else if (Choice == 10) {
            int n, m;

            printf("Enter the permutation in the form: nPm");

            printf("\nn = ");
            scanf("%i", &n);

            printf("\nm = ");
            scanf("%i", &m);

            if(n < 0 || m < 0 || m > n) {
                printf("Invalid permutation. Enter such that n ≥ m ≥ 0\n");
            } else {
                printf("%iP%i = %i\n", n, m, permutation(n, m));
            }
        } else if (Choice == 11) {
            playGuessingGame();
        }
        else if (Choice == -1) {
            printf("Choice must be numeric. Please try again.\n");
            char c = 'a';
            while (!isdigit(c) && c != '\n') {
                c = getchar();
            }
        }
    } while(Choice != 0);

    return 0;
}