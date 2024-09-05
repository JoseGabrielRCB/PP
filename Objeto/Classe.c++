#include <stdio.h>
#include <stdlib.h>

class Seila
{
public:
    void print()
    {
        printf("%d - %c", this->i, this->c);
    }

private:
    int i;
    char c;
};

int main()
{
    Seila obj;
    obj.print();
    return 0;
}
