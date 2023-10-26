#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDigits(int input);

int main(int argc, char *argv[]) {
    int n, count, number, remainder, sum = 0, temp;
    int armstrongCount = 0; // Counter for Armstrong numbers
    
    number = 0;
    int x = 0;
    int y = 0;
    
    while (armstrongCount < 20) {
        number = y;
        temp = number;
        n = numDigits(number);
        sum = 0;
        
        for (; number != 0; number /= 10) {
            remainder = number % 10;
            
            count = n;
            while (count > 1) {
                remainder *= number % 10;
                count--;
            }
            
            sum += remainder;
        }
        
        if (sum == temp) {
            printf("%d is an Armstrong number.\n", temp);
            armstrongCount++; // Increment the counter
        }
        
        y++;
    }
    
    return 0;
}

int numDigits(int input) {
    int count = 0;
    while (input > 0) {
        count++;
        input /= 10;
    }
    return count;
}