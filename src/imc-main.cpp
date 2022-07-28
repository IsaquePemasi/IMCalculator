#include "imc.h"
#include <iostream>

int main()
{
    float altura, peso, imc;

    std::cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << std::endl;
    std::cout << "I Digite o seu peso (Kg):                    I" ;
    std::cin >> peso;
    std::cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII"<< std::endl;
    std::cout << "I Digite a sua altura (metro e centimetro):  I" ;
    std::cin >> altura;
    std::cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII"<< std::endl;
    imc = peso /(altura * altura);
    std::cout << "I Seu IMC: " << imc <<"                           I"<< std::endl;
    std::cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << std::endl;

    situacao(imc);

    system("Pause");
    return 0;
}
