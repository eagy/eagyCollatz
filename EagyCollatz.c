/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EagyCollatz.c
 * Author: deagy
 *
 * Created on March 12, 2019, 9:31 AM
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

