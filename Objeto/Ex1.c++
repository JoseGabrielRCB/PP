// Implemente uma classe para representrar numeros complexos no formato a + bi (inde i = raiz -1)
// com geters,seters,consultor padrão,construtor parametizando e funcao de soma

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class NumComplex
{
    //quando o tipo de acesso não for especificado  é privado
private:
    int a;
    int b;

public:
    NumComplex(int real = 0, int imaginario = 0) : a(real), b(imaginario) {}

    int GetNumComplex_a() const
    {
        return a;
    }

    int GetNumComplex_b() const
    {
        return b;
    }

    void SetNumComplex_a(int a) 
    {
         this->a=a;
    }

    void SetNumComplex_b(int b) 
    {
         this->b=b;
    }

    NumComplex Soma(NumComplex Valor_1)
    {
        NumComplex soma_total;
        soma_total.a = a + Valor_1.a;
        soma_total.b = b + Valor_1.b ;

        return soma_total;
    }
};

int main()
{
    NumComplex num_1(1, 2), num_2(2, 1), num_3;

    num_1.SetNumComplex_a(2);
    num_1.SetNumComplex_b(1);

    num_3 = num_1.Soma(num_2);

    cout << num_3.GetNumComplex_a() << "+" << num_3.GetNumComplex_b() << "i" << endl;
}