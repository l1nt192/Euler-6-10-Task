#include "func.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Task_6(int n) 
{
    int sum_of_squares = 0;
    int square_of_sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum_of_squares += i * i;
    }
    int sum = n * (n + 1) / 2; 
    square_of_sum = sum * sum;
    int difference = square_of_sum - sum_of_squares;
    return difference;
}

unsigned long long int Task_7(int n) 
{
    if (n <= 0)
        return 0; 
    int count = 0; 
    unsigned long long int number = 2; 
    while (count < n)
    {
        if (Prime(number)) 
        {
            count++;
            if (count == n) 
            {
                return number;
            }
        }
        number++;
    }
    return 0;
}


long long int Task_8(char* digits_, int count_)
{
    int len = my_strlen(digits_);
    long long int max_product = 0;
    long long int product;
    for (int i = 0; i <= len - count_; i++)
    {
        product = 1;
        for (int j = 0; j < count_; j++)
        {
            product *= digits_[i + j] - '0';
        }
        if (max_product < product)
        {
            max_product = product;
        }
    }
    return max_product;
}
int Task_9(int sum_)
{
    int  c;
    for (int a = 1; a <= sum_ / 3; a++)
    {
        for (int b = a; b <= sum_ / 2; b++)
        {
            c = sum_ - a - b;
            if ((a * a + b * b == c * c) && ((a + b + c) == sum_))
                return a * b * c;
        }
    }
    return -1;
}
long long int Task_10(int limit)
{
    long long int sum = 0;
    int* arr = (int*)calloc(limit, sizeof(int));
    if (arr == NULL)
    {
        printf("Ошибка при выделении памяти\n");
        return -1;
    }
    for (int i = 2; i < limit; ++i)
        arr[i] = 1;
    for (int i = 2; i * i < limit; ++i) {
        if (arr[i] == 1) {
            for (int j = i * i; j < limit; j += i)
                arr[j] = 0;
        }
    }
    for (int i = 2; i < limit; ++i)
    {
        if (arr[i] == 1) 
        {
            sum += i;
        }
    }
    free(arr);
    return sum;
}

