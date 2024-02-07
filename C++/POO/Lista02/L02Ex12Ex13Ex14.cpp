#include <iostream>
#include <string>
using namespace std;

class Livro {
public:
    string titulo;
    string autor;
    string editora;
    int anoPublicacao;
    int numPaginas;
};

class LivroDeLivraria : public Livro {
public:
    double preco;
    int estoque;
};

class LivroDeBiblioteca : public Livro {
public:
    int numCopiasDisponiveis;
    int dias_emprestimo;

     // Método para emprestar livro
    bool emprestarLivro() {
        if (numCopiasDisponiveis > 0) {
            numCopiasDisponiveis--;
            return true;
        } else {
            return false;
        }
    }
};

int main()
{

}
