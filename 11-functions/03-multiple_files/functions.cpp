int max (int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min (int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int add_and_mult (int a, int b)
{
    return ((++a) * (++b));
}