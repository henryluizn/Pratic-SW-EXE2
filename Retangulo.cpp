#include "Retangulo.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include "string.h"

using namespace std;

float Retangulo::calculaArea(float base, float altura)
{
    try
    {
        float area =  base * altura;

        if (area < 0)
        {
            cout << "\n\tNao eh possivel calcular a area com pelo menos um dos lados negativo. Tente novamente\n";
            return -1;     
        } else if (area == 0)
        {
            cout << "\n\tNao eh possivel calcular a area com pelo menos um dos lados igual a zero. Tente novamente\n";
            return -1;
        } else if ((base < 0) || (altura < 0))
        {
            cout << "\n\tNao eh possivel calcular a area com pelo menos um dos lados negativo. Tente novamente\n";
            return -1;
        }
        
        cout << "\n\tA area eh: " << area;
        return area;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
        cout << "\nErro ao calcular a area do retangulo. Tente novamente.\n";
        return -1;
    }
}


float Retangulo::calculaPerimetro(float base, float altura){
    
    try
    {
        float perimetro = 2 * (base + altura);

        if (perimetro < 0) 
        {
            cout << "\n\tNao eh possivel o calcular o perimetro com lados negativos. Tente novamente.\n";
            return -1;
        }else if (perimetro == 0)
        {
            cout << "\n\tNao eh possivel calcular o perimetro com pelo menos um lado igual a zero. Tente novamente.\n";
            return -1;
        }else if ( (base < 0) || (altura < 0))
        {
            cout << "\n\tNao eh possivel calcular o perimetro com pelo menos um lado igual a zero. Tente novamente.\n";
            return -1;
        }
        cout << "\n\tO perimetro eh: " << perimetro;
        return perimetro;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
        cout << "\nErro ao calcular o perimetro do retangulo. Tente novamente.\n";
        return -1;
    }
    
}


std::string Retangulo::getNomeRetangulo(){

    try
    {        
        string nome;
        cout << "\nInsira o nome do Retangulo: ";
        getline(cin, nome);
        if (strlen(nome.c_str()) <= 0 )
        {
            cout << "\nInsira um nome valido. Tente novamente.\n";
            return getNomeRetangulo();
        }
        return nome;    
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
        cout << "\nErro ao atribuir o nome. Tente novamente.\n";
        return getNomeRetangulo();
    }
}