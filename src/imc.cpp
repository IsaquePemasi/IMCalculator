#include <iostream>

void situacao (float imc ){
    if (imc < 17)
    {
    std::cout << "Magreza grave: muito abaixo do peso" << std::endl;    
    std::cout << "pode apresentar: insuficiencia cardiaca, anemia grave e enfraquecimento do sistema imunologico " << std::endl;    

    } else if (imc > 17 && imc < 18.5)
    {
    std::cout << "Magreza leve: abaixo do peso" << std::endl;    
    std::cout << "pode apresentar: problemas de saude ligados a desnutricao " << std::endl;     
    }else if (imc > 18.5 && imc < 24.9)
    {
    std::cout << "Eutrofico: peso normal" << std::endl;    
    std::cout << "Saudavel  " << std::endl;    
    }else if (imc > 25 && imc < 29.9)
    {
    std::cout << "Sobrepeso: acima do peso" << std::endl;    
    std::cout << "pode apresentar: fadiga, varizes e ma circulacao " << std::endl;     
    }else if (imc > 30 && imc < 34.9)
    {
    std::cout << "Obesidade 1" << std::endl;    
    std::cout << "pode apresentar: diabetes, infarto, angina e aterosclerose " << std::endl;    
    }else if (imc > 35 && imc < 39.9)
    {
    std::cout << "Obesidade 2: severa" << std::endl;    
    std::cout << "pode apresentar: falta de ar e apneia do sono " << std::endl;     
    }else if (imc > 40)
    {
    std::cout << "Obesidade 3: morbida" << std::endl;    
    std::cout << "pode apresentar: refluxo infarto, avc e dificuldade de locomocao " << std::endl;    
    }  
}


int main()
{
    float altura, peso, imc;

    std::cout << "Digite o seu peso (Kg): " ;
    std::cin >> peso;
    std::cout << "Digite a sua altura (metro e centimetro): " ;
    std::cin >> altura;

    imc = peso /(altura * altura);
    std::cout << "Seu IMC: " << imc << std::endl;

    situacao(imc);

    system("Pause");
    return 0;
}
