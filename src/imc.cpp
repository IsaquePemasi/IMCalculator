#include <iostream>

int main()
{
    float altura, peso, imc;

    std::cout << "Digite o seu peso (Kg): " ;
    std::cin >> peso;
    std::cout << "Digite a sua altura (metro e centimetro): " ;
    std::cin >> altura;

    imc = peso /(altura * altura);
    std::cout << "Seu IMC: " << imc << std::endl;

    if (imc )
    {
        /* code */
    }
    

    system("Pause");
    return 0;
}
