// Author: Daniel J Eagy
// Version: 1.0 

#include <stdio.h>

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

int main(void) {
    int input; 
    
    printf("Enter any integer: ");
    scanf("%d", &input);
    
    termination(input);
     
    return 0;
}

