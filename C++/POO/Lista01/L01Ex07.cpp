#include <iostream>
#include <string>
#include <sstream>

std::string InteiroLongoParaEnderecoIP(unsigned long inteiroLongo) {
    // Converte o inteiro longo para o formato de endereço IP.
    unsigned char bytes[4];
    bytes[0] = (inteiroLongo >> 24) & 0xFF;
    bytes[1] = (inteiroLongo >> 16) & 0xFF;
    bytes[2] = (inteiroLongo >> 8) & 0xFF;
    bytes[3] = inteiroLongo & 0xFF;

    // Cria uma string formatada com os quatro bytes separados por pontos.
    std::stringstream ss;
    ss << static_cast<int>(bytes[0]) << "." << static_cast<int>(bytes[1]) << "."
       << static_cast<int>(bytes[2]) << "." << static_cast<int>(bytes[3]);

    return ss.str();
}

int main() {
    unsigned long inteiroLongo = 3232235777; // Exemplo de um inteiro longo representando o endereço IP 192.168.1.1

    std::string enderecoIPFormatado = InteiroLongoParaEnderecoIP(inteiroLongo);
    std::cout << "Endereço IP formatado: " << enderecoIPFormatado << std::endl;

    return 0;
}
