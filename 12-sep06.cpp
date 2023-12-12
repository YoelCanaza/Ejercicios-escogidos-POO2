//Ejercicio 12-sep06
#include <iostream>
#include <string>

using namespace std;


class Carta {
public:
    Carta(string valor, string palo) : valor_(valor), palo_(palo) {}

 
    friend ostream& operator<<(ostream& os, const Carta& carta) {
        os << "Carta: " << carta.valor_ << " de " << carta.palo_;
        return os;
    }

private:
    string valor_;
    string palo_;
};

template <typename T>
void Intercambio(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    Carta As1("As", "Corazones");
    Carta As2("As", "Treboles");

    cout << "Antes del intercambio: " << endl;
    cout << As1 << endl;
    cout << As2 << endl; 


    Intercambio(As1, As2);

    cout << "Despues del intercambio: " << endl;
    cout << As1 << endl; 
    cout << As2 << endl; 

    return 0;
}
