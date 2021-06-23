#include <iostream>
#include <string>
using namespace std;

int main(){
    string vertebra;
    cin >> vertebra;
    string tipo;
    cin >> tipo;
    string classe;
    cin >> classe;

    if (vertebra == "vertebrado" && tipo == "ave" && classe == "carnivoro")
    {
        cout << "aguia" << endl;
    }
    else if (tipo == "ave" && classe == "onivoro")
    {
        cout << "pomba" << endl;
    }

    if (vertebra == "vertebrado" && tipo == "mamifero" && classe == "onivoro")
    {
        cout << "homem" << endl;
    }
    else if (tipo == "mamifero" && classe == "herbivoro")
    {
        cout << "vaca" << endl;
    }

    if (vertebra == "invertebrado" && tipo == "inseto" && classe == "hematofago")
    {
        cout << "pulga" << endl;
    }
    else if (tipo == "inseto" && classe == "herbivoro")
    {
        cout << "lagarta" << endl;
    }

    if (vertebra == "invertebrado" && tipo == "anelideo" && classe == "hematofago")
    {
        cout << "sanguessuga" << endl;
    }
    else if (tipo == "anelideo" && classe == "onivoro")
    {
        cout << "minhoca" << endl;
    }

    return 0;
}