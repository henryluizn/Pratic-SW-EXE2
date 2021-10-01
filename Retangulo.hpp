#ifndef RETANGULO_HPP
#define RETANGULO_HPP
#include <string>

using namespace std;
class Retangulo
{
    public:
    // ATRIBUTOS
        float base;
        float altura;
        float area;
        float perimetro;
        string nomeRetangulo; 
    
    // METODOS
    float calculaArea(float base, float altura);
    float calculaPerimetro(float base, float altura);
    std::string getNomeRetangulo();
};

#endif