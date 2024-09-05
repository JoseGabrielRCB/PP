#include <iostream>
#include <iomanip>

using namespace std;

class Metro
{
private:
    float metros;

public:
    // contructor
    Metro(float val = 0) { metros = val; }
    // GetSet
    float GetMetro() { return metros; }
    void SetMetro(float val) { metros = val; }

    // Function
    // type operations
    Metro operator+(Metro A) { return A.GetMetro() + metros; }
    Metro operator-(Metro A) { return metros - A.GetMetro(); }
    Metro operator++(int) { return metros++; }
    Metro operator++() { return ++metros; }
    // Type compartion
    bool operator==(Metro A)
    {
        if (metros == A.GetMetro())
            return 1;
        return 0;
    }

    bool operator<(Metro A)
    {
        if (metros < A.GetMetro())
            return 1;
        return 0;
    }

    bool operator<=(Metro A)
    {
        if (metros <= A.GetMetro())
            return 1;
        return 0;
    }

    bool operator>(Metro A)
    {
        if (metros > A.GetMetro())
            return 1;
        return 0;
    }

    bool operator>=(Metro A)
    {
        if (metros >= A.GetMetro())
            return 1;
        return 0;
    }

    bool operator!=(Metro A)
    {
        if (metros != A.GetMetro())
            return 1;
        return 0;
    }

    operator float() { return metros; }
};