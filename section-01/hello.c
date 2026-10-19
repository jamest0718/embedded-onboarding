
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
// Exercise 3: Compare integers in descending order
int compare_descending(const void *a, const void *b)
{
    int num1 = *(const int *)a;
    int num2 = *(const int *)b;
    if (num1 < num2)
        return 1;
    else if (num1 > num2)
        return -1;
    else
        return 0;
}
int main(void)
{
    // Exercise 1: Hello World
    printf("Hello, World!\n");
    // Exercise 2: Dynamically allocate an array of 20 integers
    int *numbers = malloc(20 * sizeof(int));
    if (numbers == NULL)
    {
        return 1;
    }
    // Fill the array with numbers 1 through 20 using pointer notation
    for (int i = 0; i < 20; i++)
    {
        *(numbers + i) = i + 1;
    }
    // Exercise 2: Run FizzBuzz on the array
    printf("\nExercise 2 - FizzBuzz for numbers 1 to 20:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d: ", *(numbers + i));
        FizzBuzz(*(numbers + i));
    }
    // Exercise 2: Run FizzBuzz from 1 to 30
    printf("\nExercise 2 - FizzBuzz loop from 1 to 30:\n");
    for (int i = 1; i <= 30; i++)
    {
        printf("%d: ", i);
        FizzBuzz(i);
    }
    // Exercise 3: Sort the array in descending order
    qsort(numbers, 20, sizeof(int), compare_descending);
    printf("\nExercise 3 - Numbers sorted in descending order:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", *(numbers + i));
    }
    printf("\n");
    // Release the allocated memory
    free(numbers);
    return 0;
}
