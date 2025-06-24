#include <stdio.h>
#include <math.h>

//  count digits
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

// check Armstrong number
int isArmstrong(int num) {
    int original = num, sum = 0, digit, power;
    power = countDigits(num);

    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int n;

    
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);

    
    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}
