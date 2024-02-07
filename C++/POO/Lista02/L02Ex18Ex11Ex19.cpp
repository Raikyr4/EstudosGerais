#include <iostream>
#include <vector>

using namespace std;

class Ponto2D {
private:
    double x;
    double y;

public:
    Ponto2D(double x, double y) : x(x), y(y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void desenhar(vector<vector<char>>& matriz) {
        int i = static_cast<int>(y);
        int j = static_cast<int>(x);
        matriz[i][j] = 'o';
    }
};

class Linha2D {
private:
    Ponto2D ponto1;
    Ponto2D ponto2;

public:
    Linha2D(const Ponto2D& ponto1, const Ponto2D& ponto2) : ponto1(ponto1), ponto2(ponto2) {}

    void desenhar(vector<vector<char>>& matriz) {
        ponto1.desenhar(matriz);
        ponto2.desenhar(matriz);

        double x1 = ponto1.getX();
        double y1 = ponto1.getY();
        double x2 = ponto2.getX();
        double y2 = ponto2.getY();

        int i1 = static_cast<int>(y1);
        int j1 = static_cast<int>(x1);
        int i2 = static_cast<int>(y2);
        int j2 = static_cast<int>(x2);

        // Desenhar a linha usando o algoritmo de Bresenham
        int deltaX = abs(j2 - j1);
        int deltaY = abs(i2 - i1);
        int sX = j1 < j2 ? 1 : -1;
        int sY = i1 < i2 ? 1 : -1;
        int erro = deltaX - deltaY;

        while (i1 != i2 || j1 != j2) {
            matriz[i1][j1] = 'x';
            int erroDuplo = erro * 2;

            if (erroDuplo > -deltaY) {
                erro -= deltaY;
                j1 += sX;
            }

            if (erroDuplo < deltaX) {
                erro += deltaX;
                i1 += sY;
            }
        }
    }
};

class Retangulo {
private:
    Ponto2D ponto1;
    Ponto2D ponto2;

public:
    Retangulo(const Ponto2D& ponto1, const Ponto2D& ponto2) : ponto1(ponto1), ponto2(ponto2) {}

    void desenhar(vector<vector<char>>& matriz) {
        ponto1.desenhar(matriz);
        ponto2.desenhar(matriz);

        double x1 = ponto1.getX();
        double y1 = ponto1.getY();
        double x2 = ponto2.getX();
        double y2 = ponto2.getY();

        int i1 = static_cast<int>(y1);
        int j1 = static_cast<int>(x1);
        int i2 = static_cast<int>(y2);
        int j2 = static_cast<int>(x2);

        // Desenhar linhas horizontais
        for (int j = j1; j <= j2; ++j) {
            matriz[i1][j] = 'x';
            matriz[i2][j] = 'x';
        }

        // Desenhar linhas verticais
        for (int i = i1; i <= i2; ++i) {
            matriz[i][j1] = 'x';
            matriz[i][j2] = 'x';
        }
    }
};

int main() {
    const int altura = 10;
    const int largura = 10;

    vector<vector<char>> matriz(altura, vector<char>(largura, '.'));

    Ponto2D pontoA(2.5, 3.5);
    Ponto2D pontoB(8.5, 6.5);
    Linha2D linha(pontoA, pontoB);

    Ponto2D pontoC(4.5, 2.5);
    Ponto2D pontoD(7.5, 8.5);
    Retangulo retangulo(pontoC, pontoD);

    linha.desenhar(matriz);
    retangulo.desenhar(matriz);

    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            cout << matriz[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
