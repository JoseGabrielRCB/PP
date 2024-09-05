#include <iostream>
#include <iomanip>
#include "Metro.h"

#define Milha_Metro 1609.34

using namespace std;

class Milha
{
private:
    float _milha;

public:
    Milha(Metro A) { _milha = A.GetMetro() / Milha_Metro; }
    Milha(float val = 0) { _milha = val; }
    operator Metro()
    {
        return _milha * Milha_Metro;
    }

    operator float() { return _milha; }
};

int main()
{
    Metro A(1609.34), ConvM;
    Milha B(2.34), ConvMM;
    ConvM = B;
    ConvMM = A;
    cout << setprecision(2) << fixed;
    cout << ConvM.GetMetro() << endl;
    cout << ConvMM << endl;
    return 0;
}