#include <iostream>

using namespace std;

class FacNumber
{
privado:
    int num, den;

público:
    // FacNumber() : num(0),den(1)
    //{}
    FacNumber(const int num = 0, const int den = 1) : num(num), den(den)
    {
    }
    ~NúmeroFac()
    {
    }

    void setDen(const int den)  
    {
        isto->covil = covil;
    }
    void setNum(const int num)
    {
        isto->num = num;
    }
    int getDen() const
    {
        covil de retorno;
    }
    int getNum() const
    {
        retornar num;
    }
    FacNumber mult(FacNumber outro) const
    {
        Número de Fac ret;

        ret.num = num * outro.num; // Faz parte da mesma classe, não precisa fazer isso ou set/get
        ret.den = den * outro.den;

        retornar ret;
    }

    FacNumber operator=(FacNumber other)
    {
        num = other.num;
        den = other.den;

        return FacNumber(num, den);
    }
};

int principal()
{
    FacNumber numfrac(5, 2), numfrac2, fracOther;

    cout << numfrac.getNum() << '/' << numfrac.getDen() << endl;
    /*numfrac.setDen(2);
    numfrac.setNum(1);
    numfrac2.setDen(2);
    numfrac2.setNum(1);

    cout << numfrac.getNum() << "/" << numfrac.getDen() << endl;

    fracOutro = numfrac2.mult(numfrac); // Multiplica frações

    cout << fracOther.getNum() << "/" << fracOther.getDen() << endl;
     */
    retornar 0;
}
int main()
{
    FacNumber f1(num : 1, den : 2), f2(num : 1, den : 2), f3;
    f3 = f1;
    f3.operator=(f1);
    //retona fecnumber
    return 0;
}