#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Node
{
public:
    Node<T> *prox, *ant;
    T key;

    Node(T value)
    {
        prox = ant = nullptr;
        key = value;
    }
};

template <typename T>
class ListEnc
{
private:
    Node<T> *head, *tail;

public:
    ListEnc() { head = tail = nullptr; }

    void InseriIni(T key)
    {
        Node<T> *newNode = new Node<T>(key);
        if (head == nullptr)
        {
            head = tail = newNode;
            return;
        }
        head->ant = newNode;
        newNode->prox = head;
        head = newNode;
    }

    void InseriFim(T key)
    {
        Node<T> *newNode = new Node<T>(key);
        if (tail == nullptr)
        {
            head = tail = newNode;
            return;
        }
        tail->prox = newNode;
        newNode->ant = tail;
        tail = newNode;
    }

    void Imprime()
    {
        Node<T> *aux = head;
        while (aux != nullptr)
        {
            cout << "[" << aux->key << "]" << "-->";
            aux = aux->prox;
        }
        cout << endl;
    }

    void RemoveEnd()
    {
        if (tail == nullptr)
            return;
        Node<T> *aux = tail;
        tail = tail->ant;
        if (tail != nullptr)
            tail->prox = nullptr;
        else
            head = nullptr;
        delete aux;
    }

    void RemoveStart()
    {
        if (head == nullptr)
            return;
        Node<T> *aux = head;
        head = head->prox;
        if (head != nullptr)
            head->ant = nullptr;
        else
            head = nullptr;
        delete aux;
    }

    T &operator[](int index)
    {
        Node<T> *aux = head;
        for (int i = 0; i < index; i++)
            aux = aux->prox;
        return aux->key;
    }

    operator std::string()
    {
        string txt("");
        Node<T> *aux = head;
        while (aux != nullptr)
        {
            txt += to_string(aux->key);
            aux = aux->prox;
        }
        return txt;
    }

    ~ListEnc()
    {
        while (head != nullptr)
        {
            Node<T> *aux = head;
            head = head->prox;
            delete aux;
        }
    }
};

int main()
{
    system("clear");
    ListEnc<int> A;
    A.InseriFim(2);
    A.InseriFim(1);
    A.InseriFim(3);
    A.Imprime();
    cout << A[1] << endl;
    A[0] = 99;
    A.Imprime();
    string lista = A;
    cout << lista;
}