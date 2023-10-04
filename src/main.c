#include <stdio.h>
#include <stdbool.h>

#define INPUT_SIZE 256
int main(void)
{
    char array[INPUT_SIZE];
    while(true) {
        printf("Enter Input: ");
        fgets(array, INPUT_SIZE, stdin);

        printf("Your string is: %s", array);
    }
    return 0;
}