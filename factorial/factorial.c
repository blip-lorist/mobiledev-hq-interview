#include <stdio.h>
#include <stdlib.h>

void factorial(int x);
int multiply(int j, int product[], int index);

/* test factorial function */
main()
{
     factorial(0);
     printf("is the factorial of 0.\n\n");

     factorial(-1);
     printf("is the factorial of -1.\n\n");
     
     factorial(32768);
     printf("is the factorial of 32768.\n\n");

     factorial(6);
     printf("\nis the factorial of 6.\n\n");

     factorial(19);
     printf("\nis the factorial of 19.\n\n");

     factorial(100);
     printf("\nis the factorial of 100.\n\n");

    factorial(8);
}

/* define the factorial function */
void factorial(int x)
{
    if( x <= 0 ) {
        printf("%d was provided. Please input a positive integer.\n", x);
    }
    else if(x > 32767) {
        printf("This exceeds the signed integer limit. Please try a smaller input.\n");
    }
    else if( x == 1 ) {
        printf("1");
    }
    else {
        /* I had no clue how to handle factorials for larger numbers, but was determined to figure it out. 
        Mahalo to the folks who wrote these helpful articles and led me to this solution:
        http://www.geeksforgeeks.org/factorial-large-number/
        http://codingstreet.com/calculating-factorial-of-large-numbers-in-c/
        */ 

        /* Rather than storing our output in a single int (which has size limits), we're using an array to hold it */ 
        int product[500], index, carry, i, j;
        product[0] = 1;
        index = 0;
        
        for(j=x; j>=2; j--) {
            index = multiply(j, product, index);
        }

        for(i=index; i>=0; i--) {
            /* print our output on the fly, since no built-in data type will support numbers this large */
            printf("%d", product[i]);
        }
    }
}

int multiply(int j, int product[], int index) {
        int carry = 0; 
        int i; 
        for (i = 0; i <= index; i++) {
            
            carry = (product[i]*j)+carry; 
            product[i] = carry % 10;

            carry = carry/10;
        }
        while (carry > 0){
            product[++index] = carry%10;
            carry = carry/10;
        }

        return index;
}
