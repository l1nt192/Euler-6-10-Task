int my_strlen(char* str_)
{
    int len = 0;
    while (*str_)
    {
        len++;
        str_++;
    }

    return len;
}

int Prime(unsigned long long int x)
{
    if (x < 2)
        return 0;
    if (x == 2 || x == 3)
        return 1;
    if (x % 2 == 0 || x % 3 == 0)
        return 0;

    for (unsigned int n = 5; n * n <= x; n += 6)
        if (x % n == 0 || x % (n + 2) == 0)
            return 0;

    return 1;
}


