#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Dcomplexo
{
private:
    float a, b;

public:
    Dcomplexo() : a(0.0), b(0.0) // contrutor padrão
    {
    }

    Dcomplexo(const float a, const float b) : a(a), b(b) // construtor parametizado
    {
    }

    float getA() const
    {
        return a;
    }

    float getB() const
    {
        return b;
    }

    void setA(const float a)
    {
        this->a = a; // o this serve para diferenciar o parametro da função para o dado membro da classe
    }

    void setB(const float b)
    {
        this->b = b;
    }

    Dcomplexo soma(const Dcomplexo other) const // é constanste pois não altera os objetos chamadores
    {

        return Dcomplexo(a + other.a, b + other.b); // cria um novo objeto anonimo
    }
};

int main()
{
    Dcomplexo c1, c2(2.0, 3.0);

    const Dcomplexo CC(1.0, 2.0);

    // CC.getA(); // o compilador apenas perimte chamar as funções marcadas como const , pois o valor tb
    // marcado como const

    c1 = CC.soma(c2);

    //cout << 
}
