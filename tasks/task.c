#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 3 || atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
    {
        printf("Incorrect Command Line Arguments.\n");
        return 0;
    }

    int num1;
    int num2;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
