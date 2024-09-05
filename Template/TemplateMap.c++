#include <iostream>
#include <string>
#define MAX_MAP_SIZE 10
using namespace std;

template <class K, class V>

class DMap
{
private:
    K keyArray[MAX_MAP_SIZE];
    V valueArray[MAX_MAP_SIZE];
    unsigned nElem;

    bool findKey(K key, unsigned &index)
    {
        index = 0;
        while (index < nElem)
        {
            if (key == keyArray[index])
                return true;
            ++index;
        }
    }

public:
    DMap() : nElem(0)
    {
    }
    bool insert(K key, V value)
    {
        if (nElem >= MAX_MAP_SIZE) // mapa cheio
            return false;

        if (findKey(key))
            return false;
        keyArray[nElem] = key;
        valueArray[nElem] = value;
    }
    bool findKey(K key)
    {
        unsigned i; // valor despresivel
        return findKey(key, i);
    }
    // implementar o delte from value
    bool deleteFromkey(K key)
    {
        unsigned index;
        if (!findKey(key, index))
            return false;
        --nElem;
        if (index != nElem)
        {
            keyArray[index] = keyArray[nElem];
            valueArray[index] = valueArray[nElem];
        }
        return true;
    }
    V &at(K key)
    {
        unsigned index;
        if (find(key, index))
        {
            valueArray[index];
        }
        throw "Dmap ERROR: key not founded!!!";
    }
};

int main()
{
    DMap<string, int> myMap;
    myMap.insert(key : "teste", value : 1);
    myMap.insert(key : "testa", value : 2);

    cout << myMap.at(key : "teste") << " " << myMap.at(key : "testa") << endl;
    myMap.at(key : "teste") = 20;
    cout << myMap.at(key : "teste") << " " << myMap.at(key : "testa") << endl;
    try
    {
        myMap.at(key : "no");
    }
    catch (const char *msg)
    {
        cout << msg;
    }
    return 0;
}