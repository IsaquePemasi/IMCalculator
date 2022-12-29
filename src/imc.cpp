#include <iostream>
#include "imc.h"

void situacao (float imc ){
    if (imc < 17)
    {
    std::cout << "Magreza grave: muito abaixo do peso" << std::endl;    
    std::cout << "pode apresentar: insuficiencia cardiaca, anemia grave e enfraquecimento do sistema imunologico " << std::endl;    
    std::cout << "           .'|   /`." << std::endl;
    std::cout << "         .'.-.`-'.-.`." << std::endl;
    std::cout << "    ..._:   .-. .-.   :_..." << std::endl;
    std::cout << "  .'    '-.(o ) (o ).-'    `." << std::endl;
    std::cout << " :  _    _ _`~(_)~`_ _    _  :" << std::endl;
    std::cout << ":  /:   ' .-=_   _=-. `   ;|  :" << std::endl;
    std::cout << ":   :|-.._  '     `  _..-|:   :" << std::endl;
    std::cout << " :   `:| |`:-:-.-:-:'| |:'   :" << std::endl;
    std::cout << "  `.   `.| | | | | | |.'   .'" << std::endl;
    std::cout << "    `.   `-:_| | |_:-'   .'" << std::endl;
    std::cout << "      `-._   ````    _.-'" << std::endl;
    std::cout << "          ``-------''" << std::endl;
    } else if (imc > 17 && imc < 18.5)
    {
    std::cout << "Magreza leve: abaixo do peso" << std::endl;    
    std::cout << "pode apresentar: problemas de saude ligados a desnutricao " << std::endl;  
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;


    }else if (imc > 18.5 && imc < 24.9)
    {
    std::cout << "Eutrofico: peso normal" << std::endl;    
    std::cout << "Saudavel  " << std::endl;
    std::cout << " +--^----------,--------,-----,--------^-," << std::endl;
    std::cout << " | |||||||||   `--------'     |          O" << std::endl;
    std::cout << " `+---------------------------^----------|" << std::endl;
    std::cout << "   ``_,---------,---------,--------------'" << std::endl;
    std::cout << "     / XXXXXX /'|       /'" << std::endl;
    std::cout << "    / XXXXXX /  ``    /'" << std::endl;
    std::cout << "   / XXXXXX /`-------'" << std::endl;
    std::cout << "  / XXXXXX /" << std::endl;
    std::cout << " / XXXXXX /   " << std::endl;
    std::cout << "(________(                " << std::endl;
    std::cout << " `------'              " << std::endl;    
    }else if (imc > 25 && imc < 29.9)
    {
    std::cout << "Sobrepeso: acima do peso" << std::endl;    
    std::cout << "pode apresentar: fadiga, varizes e ma circulacao " << std::endl; 
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;    
    }else if (imc > 30 && imc < 34.9)
    {
    std::cout << "Obesidade 1" << std::endl;    
    std::cout << "pode apresentar: diabetes, infarto, angina e aterosclerose " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;    
    }else if (imc > 35 && imc < 39.9)
    {
    std::cout << "Obesidade 2: severa" << std::endl;    
    std::cout << "pode apresentar: falta de ar e apneia do sono " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;     
    }else if (imc > 40)
    {
    std::cout << "Obesidade 3: morbida" << std::endl;    
    std::cout << "pode apresentar: refluxo infarto, avc e dificuldade de locomocao " << std::endl; 
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;   
    }  
}
