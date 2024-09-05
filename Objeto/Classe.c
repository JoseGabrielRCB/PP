
#include <stdio.h>
#include <stdlib.h>

struct Seila
{
    int i;
    char c;
};

void print(struct Seila sl)
{
    printf("%d - %c", sl.i, sl.c);
}

int main()
{
    struct Seila var;
    print(var);
}
