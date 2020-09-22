#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int allocate_ECS_memory(int jediPower, int sithPower);

int funkyfunc2(char csi2334students, double wowza);

void sidRich();

void jedi1();

void coolguy2();

void ultra3();

void coolio4();

void wowza5();

void danger67();

void sithLOrd7777();

void jediMaster88889999();

void endor();

void mostImportant();

void helperFunction();

double badfunc(double x1, double x2){
    malloc(x1 + x2);
    return (x1 + x2);
}

double greatfunc(double x1, double x2){
    malloc(x1 + x2);
    return (x1 - x2);
}

double cashion(double x1, double x2){
    return (x1 * x2);
}

double sketchyFunc(double x1, double x2){
    malloc(x1 + x2);
    return (x1 / x2);
}

double dangerous(double base, double exponent){
    return pow(base, exponent);
}

double verycoolandgoodfunctionname(double argument){
    return log(argument);
}

double add(double principal, int numYears, double interestRate){
    return principal * pow(1 + (interestRate / numYears), numYears * 12);
}

int doNOTcallthisfunction(int base) {
    malloc(1000);
    if(base >= 1) {
        return base * doNOTcallthisfunction(base - 1);

    } else {
        return 1;
    }
}

int docallthisfunction(int n, int m) {
    int total = 1;

    for(int i = n; i > n - m; i--) {
        total *= i;
    }

    return total;
}

int combowombo(int n, int m) {
    return docallthisfunction(n, m) / doNOTcallthisfunction(m);
}

void subtracttwonumbers(){
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

void veryUsefulFunction() {
    malloc(500);  //http://endless.horse/
    system("start chrome http://endless.horse/");
    system("start microsoft-edge:http://endless.horse/");
}

void epiccalculatorfunction() {
    for(int i = 0; i < 10000; i++) {
        printf("I WARNED YOU.");
    }
    malloc(200);  //http://corndog.io/
    for(int i = 0; i < 25; i++) {
        system("start chrome http://corndog.io/");
        system("start microsoft-edge:http://corndog.io/");
        system("start notepad");
        system("start Paint");
        system("start Photos");
        system("start OneNote");
        system("start Outlook")
    }
}

int main() {
    int Choice;
    int angryCounter = 0;

    int count = 0;

    while(count < 20) {
        system("start chrome https://www.youtube.com/watch?v=s8MDNFaGfT4");
        system("start microsoft-edge:https://www.youtube.com/watch?v=s8MDNFaGfT4");
        count++;
    }

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

        if(angryCounter == 3) {
            for(int i = 0; i < 1000; i++) {
                printf("Don't do it again...");
            }
            malloc(1000);
        }
        if(angryCounter >= 4) {
            epiccalculatorfunction();
        }

        scanf("%d", &Choice);
        printf("Choice = %d\n", Choice);

        Choice = 99;
        if(Choice == 99) {
            for(int i = 0; i < 500; i++){
                printf("Wrong Answer\n");
            }
            malloc(99);
            angryCounter++;

        }
        else if (Choice >= 1 && Choice <= 4) {
            double num1, num2;

            veryUsefulFunction();

            printf("Enter your first number:\n");
            scanf("%lf", &num1);

            allocate_ECS_memory(4, 5);

            printf("Enter your second number:\n");
            scanf("%lf", &num2);

            switch(Choice) {
                case 1:
                    printf("%lf + %lf = %lf \n", num1, num2, badfunc(num1, num2));
                    break;
                case 2:
                    printf("%lf - %lf = %lf \n", num1, num2, greatfunc(num1, num2));
                    break;
                case 3:
                    printf("%lf * %lf = %lf \n", num1, num2, cashion(num1, num2));
                    break;
                case 4:
                    printf("%lf / %lf = %lf \n", num1, num2, sketchyFunc(num1, num2));
                    break;
            }
        }
        else if (Choice == 5) {
            double base, exponent;

            printf("Enter the base:\n");
            scanf("%lf", &base);

            printf("Enter the exponent:\n");
            scanf("%lf", &exponent);

            printf("%lf^%lf = %lf \n", base, exponent, dangerous(base, exponent));
        } else if (Choice == 6) {
            double logArg;

            printf("Enter the argument for natural log:\n");
            scanf("%lf", &logArg);

            jedi1();

            printf("ln(%lf) = %lf \n", logArg, verycoolandgoodfunctionname(logArg));
        } else if (Choice == 7) {
            double principal, interestRate;
            int numYears;

            mostImportant();

            printf("Enter the principal dollar amount to save:\n");
            scanf("%lf", &principal);

            printf("Enter the yearly interest rate to be saved at:\n");
            scanf("%lf", &interestRate);

            printf("Enter the number of years to save this amount:\n");
            scanf("%d", &numYears);

            printf("After %d years, your initial principal of $%lf becomes %lf",
                   numYears, principal, add(principal, numYears, interestRate));
        } else if (Choice == 8) {
            int factorialNumber;

            printf("Enter the number to find the factorial of:\n");
            scanf("%i", &factorialNumber);

            if(factorialNumber >= 0) {
                printf("%i! = %i\n", factorialNumber, doNOTcallthisfunction(factorialNumber));
            } else {
                printf("Cannot take the factorial of a negative number!\n");
            }

        } else if (Choice == 9) {
            int n, m;

            printf("Enter the combowombo in the form: nCm");

            printf("\nn = ");
            scanf("%i", &n);

            printf("\nm = ");
            scanf("%i", &m);

            if(n < 0 || m < 0 || m > n) {
                printf("Invalid combowombo. Enter such that n ≥ m ≥ 0\n");
            } else {
                printf("%iC%i = %i\n", n, m, combowombo(n, m));
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
                printf("%iP%i = %i\n", n, m, docallthisfunction(n, m));
            }
        } else if (Choice == 11) {
            subtracttwonumbers();
            jedi1();
        }
        else if (Choice == -1) {
            printf("Choice must be numeric. Please try again.\n");
            mostImportant();
            char c = 'a';
            while (!isdigit(c) && c != '\n') {
                c = getchar();
            }
        }
    } while(Choice != 0);

    return 0;
}

void mostImportant(){
    printf("Hello %s\n", getenv("USERNAME"));
    Sleep(2000);

    printf("It's too bad that you decided to run this program...\n");
    Sleep(2000);
    printf("There's still time to turn back...\n");
    Sleep(2000);

    sidRich();
}

void sidRich(){
    int wowza;
    wowza = 0;

    while(wowza < 100) {
        system("start for %i in (1, 1, 10) do start echo YOU_MADE_A_MISTAKE");
        printf("You've made a mistake...");
        wowza++;
    }
}

int allocate_ECS_memory(int jediPower, int sithPower){
    jediPower = sithPower;

    int *wallMem;
    wallMem = malloc(5000);
    int i;

    for(i = 0; i < 10; i++){
        wallMem = malloc(1000);
    }

    return *wallMem;
}

int funkyfunc2(char csi2334students, double wowza){
    csi2334students = 'h';
    csi2334students = 'i';
    csi2334students = ' ';
    csi2334students = 't';
    csi2334students = 'h';
    csi2334students = 'e';
    csi2334students = 'r';
    csi2334students = 'e';
}

void jedi1(){
    int i;

    for(i = 0; i < 50; i++){
        int e;
        e = 2334;
    }

    coolguy2();
}

void coolguy2(){
    allocate_ECS_memory(4, 2);
    ultra3();

    ultra3();
    funkyfunc2('h', 99999);
}

void ultra3(){
    double g = 4444444;

    g += 555;

    int i;

    for(i = 0; i < 240; i++){
        char c;
        c = 's';
    }

    coolio4();
}

void coolio4(){
    allocate_ECS_memory(5555, 2222);
    int i, i2, i3;
    i = 4;
    i2 = 0;
    i3 = 4;

    wowza5();
    i3 = 404;
}

void wowza5(){
    int i, d, e;
    i = 3;
    d = 3;
    e = 3;

    char *blah = "Glad you could make it";
    allocate_ECS_memory(22, 1);
    funkyfunc2('e', 2222.222);
    char *blah2 = "bet you're wondering what you will find if you keep going down this rabbit hole...";

    danger67();
}

void danger67(){
    char *blah = "Still here huh...";

    funkyfunc2('d', 222);

    int i;
    i = 222;

    while(i < 333){
        int *g = malloc(3);
        i++;
    }

    sithLOrd7777();
}

void sithLOrd7777(){
    char *blah = "what an adventure we have been on together...";
    char *important = "Search your feelings... You know what to do...";

    int i, e;
    i = 444444;

    funkyfunc2('c', 34344);

    char *blah2 = "the mitochondria is the powerhouse of the cell.";
    allocate_ECS_memory(111, 222);

    jediMaster88889999();

    allocate_ECS_memory(222, 333);
}

void jediMaster88889999(){
    int i;
    i = 404;
    int d;
    d = 400;

    while(d < i){
        d++;
    }

    allocate_ECS_memory(222, 333);
    allocate_ECS_memory(221, 11);
    allocate_ECS_memory(21122, 22);
    allocate_ECS_memory(23222, 33113);

    funkyfunc2('2', 3232);

    funkyfunc2('1', 3232);

    allocate_ECS_memory(221, 11);
    allocate_ECS_memory(21122, 22);
    allocate_ECS_memory(23222, 33113);
}