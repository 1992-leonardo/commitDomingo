#include <iostream>
#include <string>

int main() {
    std::string idade;
    std::cout << "Digite sua idade por favor: " << std::endl;
    std::string resposta = "";
    std::getline(std::cin, resposta);

    while (resposta.empty()) {
        std::cout << "Você não digitou nada, por favor, informe algo: " << std::endl;
        std::getline(std::cin, resposta);
    }

    int idadeInt = std::stoi(resposta);

    if (!idadeInt < 18)
     {
        std::cout << "Você é maior de idade" << std::endl;
        
        return false;
    } 
    else 
    {
        std::cout << "Você é menor de idade" << std::endl;
    }

    return 0;
}
