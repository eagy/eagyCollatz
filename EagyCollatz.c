/**
* This program checks a positive integer satisfies the collatz conjecture. 
*
* Completion time: 0.25 Hours
*
* @author Daniel Eagy, Acuna
* @version 3/12/2019
*/


#include <stdio.h>
#include <stdlib.h>


int termination(int n) {
    int total = 0;
    
    while(n != 1) {
        if (n%2 == 0)
            n = n/2;
        else
            n = 3*n+1;
        
        total++;
        printf("Current Value: %d\tIteration: %d\n", n, total);
    }
    
    return n;
}

int main() {
    int input; 
    
    printf("Enter any integer: ");
    scanf("%d", &input);
    
    termination(input);
    return 0;
}

