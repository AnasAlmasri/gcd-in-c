// This program takes in two inputs
// calculates GCD and outputs it
// GCD calculation follows the Euclidean method

// include header files
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int gcd_calculator(int num1, int num2); // function prototype inclusion

int main(int num1){ // function main() starts execution
    // declare variables
    int m, n, menu=1, temp, gcd;

    while (menu!=-1){
        // prompt user to input m and n
        printf("\nEnter two integers: ");
        if (scanf("%d %d", &m, &n)!=2){ // if input does not consist of two integers
            printf("Invalid input.\n"); // alert user
            break; // end program
        } else { // if input consists of two integers
            // make sure m is positive
            if (m<0)
                m = -m;
            // make sure n is positive
            if (n<0)
                n = -n;
            // if n>m swap the values
            if (n>m){
                temp=m;
                m=n;
                n=temp;
            }

            if (n==0)
                gcd = m; //set GCD to value of m following Euclidean rules
            else // if n!=0 call function gcd_calculator() and assign  return value to gcd
                gcd = gcd_calculator(m,n);
            // output GCD value
            printf("Greatest Common Divisor: %d\n\n", gcd); // output GCD value
        }
        // prompt user to determine next operation
        printf("(1) to restart program, (-1) to end program.\n");
        scanf("%d", &menu);
    } // end while loop

    return 0; // to indicate successful execution
}


// function gcd_calculator()
// takes in two inputs
// calculates GCD and returns it
int gcd_calculator(int num1, int num2){
    int rem; // declare variables

    // loop until num2==0
    while (num2 != 0){
        // find remainder then swap values following the Euclidean Method
        rem = num1%num2;
        num1 = num2;
        num2 = rem;
    }
    return num1; // return GCD value to caller
} // function gcd_calculator() ends execution
