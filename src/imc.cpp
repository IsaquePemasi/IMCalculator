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
    std::cout << "               ,,ggddY888Ybbgg,," << std::endl;
    std::cout << "          ,agd8""'   .d8888888888bga," << std::endl;
    std::cout << "       ,gdP""'     .d88888888888888888g," << std::endl;
    std::cout << "     ,dP``        ,d888888888888888888888b," << std::endl;
    std::cout << "   ,dP         ,8888888888888888888888888b," << std::endl;
    std::cout << "  ,8`          ,8888888P```88888888888888888," << std::endl;
    std::cout << " ,8'           I888888I    )88888888888888888," << std::endl;
    std::cout << ",8'            `8888888booo8888888888888888888," << std::endl;
    std::cout << "d'              `88888888888888888888888888888b" << std::endl;
    std::cout << "8                ``8888888888888888888888888888" << std::endl;
    std::cout << "8                  ``88888888888888888888888888" << std::endl;
    std::cout << "8                      ``8888888888888888888888" << std::endl;
    std::cout << "Y,                        `8888888888888888888P" << std::endl;
    std::cout << "`8,                         `88888888888888888'" << std::endl;
    std::cout << " `8,              .oo.       `888888888888888'" << std::endl;
    std::cout << "  `8a             8888        88888888888888'" << std::endl;
    std::cout << "   `Yba           `""'       ,888888888888P'" << std::endl;
    std::cout << "     `Yba                   ,88888888888``" << std::endl;
    std::cout << "       `Yba,             ,8888888888P``                " << std::endl;
    std::cout << "          `Y8baa,      ,d88888888P``" << std::endl;
    std::cout << "               ````YYba8888P888``" << std::endl;
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
    std::cout << "             .-''''''---.___" << std::endl;
    std::cout << "           .'               ''-.___" << std::endl;
    std::cout << "         _'              _'-'''''  '''-   " << std::endl;
    std::cout << "        /    `        .''              '->" << std::endl;
    std::cout << "       .    .|     _-'                   '." << std::endl;
    std::cout << "      .  .''  .   ':         _.------._  ''" << std::endl;
    std::cout << "     .  -      . .'       .-'  '-   .' ` :" << std::endl;
    std::cout << "     | '        >       .'.'''`'-   .'`'_'" << std::endl;
    std::cout << "     |'        <      .'   :__/  : :_.':'" << std::endl;
    std::cout << "  .--'-._      :   .--:     -._.'  '._.'" << std::endl;
    std::cout << " '>      '.     '. | '              .' :" << std::endl;
    std::cout << "'.        :'     '-'.____        .__.  '" << std::endl;
    std::cout << " /         :             :.          .'" << std::endl;
    std::cout << " `.       /              | ''-_  __-'" << std::endl;
    std::cout << "   `.'-'''         .''':''    :-'''''." << std::endl;
    std::cout << "                  :   :               ." << std::endl;
    std::cout << "                  |  :                :" << std::endl;
    std::cout << "                  | :           .''.  :" << std::endl;
    std::cout << "                  |.'.        _.:   '.:" << std::endl;
    std::cout << "                  |    '---'''  :    :'" << std::endl;
    std::cout << "                  |     '      :     :" << std::endl;
    std::cout << "                  .'.___:._   .'    ." << std::endl; 
    std::cout << "                   .  '    '''.     '" << std::endl;
    std::cout << "                   |   :      '    :" << std::endl;
    std::cout << "                   :    .    :    ' :" << std::endl;
    std::cout << "     _.-'''--..__   :   : . :    .  _:" << std::endl;
    std::cout << "  .'      .       '-:   :   '   ..-'  :" << std::endl;
    std::cout << " (         '-       :   :._:   /   _.--'''--._" << std::endl;
    std::cout << "  '          '. _....:  : .   / .-'           '." << std::endl;
    std::cout << "   '           :  .'' '''-'  /-'               ) "<< std::endl;
    std::cout << "    '._        :  :     ..-'                  /" << std::endl;
    std::cout << "       '-._     `'' _ .''''''''-.         _.-" << std::endl;
    std::cout << "          .'...__ .' '           . ____..'" << std::endl; 
    std::cout << "         :         '':-.._______.'" << std::endl;
    std::cout << "          '-.....-'''               " << std::endl;   
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
