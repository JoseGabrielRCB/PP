#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class DfiscSizeIntArry
{
private:
    int *ptr;
    unsigned size;

public:
    DfiscSizeIntArry(unsigned size = 10) : size(size), ptr(new int[size])
    {
        for (unsigned i = 0; i < size; i++)
        {
            ptr[i] = 0;
        }
    }

    unsigned GetSize() const
    {
        return size;
    }

    void setElem(const int elem, unsigned i) const
    {
        ptr[i] = elem;
    }

    int  GetElem(int i) const
    {
        return ptr[i];
    }

    ~DfiscSizeIntArry() // destrutor
    {
        delete[] ptr;
    }
};

int main()
{
    DfiscSizeIntArry myArray;
    

    for (unsigned i = 0; i < myArray.GetSize(); i++)
    {
        int g = rand()%10;
        cout << g << endl << "VALOR array";
        
        myArray.setElem(g,i);
        cout << myArray.GetElem(i) << endl;
    }
}
