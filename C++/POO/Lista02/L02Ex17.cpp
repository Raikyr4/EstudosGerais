#include <iostream>
#include <string>
using namespace std;

class PoligonoRegular {
    
private:
    int numLados;

public:
    PoligonoRegular(int numLados) : numLados(numLados) {}

    void setNumLados(int Lados) {
        numLados = numLados;
    }

    int getNumLados() const {
        return numLados;
    }

    string getNome() const {
        switch (numLados) {
            case 3:
                return "Triângulo";
            case 4:
                return "Quadrado";
            case 5:
                return "Pentágono";
            case 6:
                return "Hexágono";
            case 7:
                return "Heptágono";
            case 8:
                return "Octógono";
            case 9:
                return "Eneágono";
            case 10:
                return "Decágono";
            default:
                return "Polígono com número de lados inválido.";
        }
    }
};
