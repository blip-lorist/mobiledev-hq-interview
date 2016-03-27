#include <stdio.h>
#include <stdlib.h>

long long int factorial(int x);

/* test factorial function */
main()
{
    /* Valid inputs */
    printf("The factorial of 6 is %lld", factorial(6));
    printf("The factorial of 19 is %lld", factorial(19));


    /* Invalid inputs 
    printf("The factorial of -1 is %d", factorial(-1)); */
}

/* define the factorial function */
long long int factorial(int x)
{
    int product;

    if( x <= 0 ) {
        fprintf(stderr, "%d was provided. Please input a positive integer.\n", x);
        exit(-1);
    }
    else if(x > 32767) {
        fprintf(stderr, "This exceeds the signed integer limit. Please try a smaller input. \n");
        exit(-1);
    }
    else if( x == 1 ) {
        product = 0;
        return product;
    }
    else {
        product = x;
        while( x > 1 ) {
            x--;
            product = product * x;
        }
        return product;
    }
}
