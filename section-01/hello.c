
#include <stdio.h>
#include <stdlib.h>
// Exercise 2: FizzBuzz function
void FizzBuzz(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("FizzBuzz\n");
    }
    else if (n % 3 == 0)
    {
        printf("Fizz\n");
    }
    else if (n % 5 == 0)
    {
        printf("Buzz\n");
    }
}
int main(void)
{
    // Exercise 1: Hello World
    printf("Hello, World!\n");
    // Exercise 2: Create an array of 20 integers
    int *numbers = malloc(20 * sizeof(int));
    if (numbers == NULL)
    {
        return 1;
    }
    // Fill the array with numbers 1 through 20
    for (int i = 0; i < 20; i++)
    {
        *(numbers + i) = i + 1;
    }
    printf("\nExercise 2 - Array from 1 to 20:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d: ", *(numbers + i));
        FizzBuzz(*(numbers + i));
    }
    printf("\nExercise 2 - Loop from 1 to 30:\n");
    for (int i = 1; i <= 30; i++)
    {
        printf("%d: ", i);
        FizzBuzz(i);
    }
    free(numbers);
    return 0;
}
