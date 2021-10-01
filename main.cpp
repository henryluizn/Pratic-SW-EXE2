#include "Retangulo.hpp"
#include <iostream>
#include <sstream>

using namespace std;

Retangulo getDados (Retangulo ret, int i){

    cout << "\nLendo dados do " << i << " retangulo:";
    try
    {
        string altura, base;
        cout << "\nAltura: " ;
        getline(cin, altura);
        
        cout << "\nBase: ";
        getline(cin, base);

        ret.nomeRetangulo = ret.getNomeRetangulo();
        ret.altura = stof(altura);
        ret.base = stof(base);
        return ret;
    }
    catch(const std::exception& e)
    {
        cout << "\nErro ao ler os dados do retangulo. Insira um dado valido.\n";
        return getDados(ret, i);
    }

}

void maiorArea(Retangulo ret_1, Retangulo ret_2)
{
    if ( (ret_1.area > 0) && (ret_2.area > 0))
    {
        if (ret_1.area > ret_2.area)
        {
            cout << "\n\nA maior area eh do retangulo " << ret_1.nomeRetangulo << " : " << ret_1.area;
        }else if (ret_1.area == ret_2.area)
        {
            cout << "\n\nAs duas areas sao iguais!";
        }else if (ret_1.area < ret_2.area)
        {
            cout << "\n\nA maior area eh do retangulo " << ret_2.nomeRetangulo << " : " << ret_2.area;
        }
    }
}

void maiorPerimetro(Retangulo ret_1, Retangulo ret_2)
{
    if ((ret_1.perimetro > 0) && (ret_2.perimetro > 0))
    {    
        if (ret_1.perimetro > ret_2.perimetro)
        {
            cout << "\n\nO maior perimetro eh o do retangulo " << ret_1.nomeRetangulo << " : " << ret_1.perimetro;
        }else if (ret_1.perimetro == ret_2.perimetro)
        {
            cout << "\n\nOs dois retangulos possuem perimetros iguais!";
        }else if (ret_1.perimetro < ret_2.perimetro)
        {
            cout << "\n\nO maior perimetro eh o do retangulo " << ret_2.nomeRetangulo << ": " << ret_2.perimetro;
        }
    }
}

int main(int argc, char const *argv[])
{
    Retangulo ret_1;
    Retangulo ret_2;
    cout << "\nEste programa realiza o calculo da area e do perimetro de dois retangulos" 
         << "\nNo final da execucao sera retornado qual o retangulo de maior area e de maior perimetro\n";

    ret_1 = getDados(ret_1, 1);
    ret_2 = getDados(ret_2, 2);

    cout << "\nArea e perimetro do retangulo " << ret_1.nomeRetangulo << " : ";
    ret_1.area = ret_1.calculaArea(ret_1.base, ret_1.altura);
    ret_1.perimetro = ret_1.calculaPerimetro(ret_1.base, ret_1.altura);

    cout << "\nArea e perimetro do retangulo " << ret_2.nomeRetangulo << " : ";
    ret_2.area = ret_2.calculaArea(ret_2.base, ret_2.altura);
    ret_2.perimetro = ret_2.calculaPerimetro(ret_2.base, ret_2.altura);

    maiorArea(ret_1, ret_2);
    maiorPerimetro(ret_1, ret_2);        

    return 0;
}
