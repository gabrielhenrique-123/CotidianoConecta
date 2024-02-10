#ifndef _USUARIO_HPP_
#define _USUARIO_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

/**
 * @brief Classe que representa um usuário genérico.
 */
class User {
protected:
    string name;    /**< Nome do usuário */
    string birth;   /**< Data de nascimento do usuário */
    string email;   /**< Email do usuário */
    string cpf;     /**< CPF do usuário */
    string funcao;  /**< Função do usuário */

public:
    /**
     * @brief Construtor padrão.
     */
    User();

    /**
     * @brief Construtor que inicializa os membros com valores fornecidos.
     * @param name Nome do usuário.
     * @param cpf CPF do usuário.
     * @param birth Data de nascimento do usuário.
     * @param email Email do usuário.
     */
    User(string name, string cpf, string birth, string email);

    /**
     * @brief Destrutor virtual.
     */
    virtual ~User();

    // Métodos de acesso (getters)
    string getName() const;
    string getEmail() const;
    string getCPF() const;
    string getFuncao() const;
    string getBirth() const;

    // Métodos de modificação (setters)
    void setName(string name);
    void setEmail(string email);
    void setCPF(string cpf);
    void setFuncao(string funcao);
    void setBirth(string birth);

    /**
     * @brief Exibe as informações do usuário.
     */
    void show();

    /**
     * @brief Salva as informações do usuário em um arquivo.
     * @param filename Nome do arquivo onde as informações serão salvas.
     */
    void saveToFile(const string &filename) const;

    /**
     * @brief Sobrecarga do operador de igualdade.
     * @param user Usuário a ser comparado.
     * @return true se os usuários são iguais, false caso contrário.
     */
    bool operator==(const User&) const;

    // Construtor de cópia e operador de atribuição
    User(const User&);
    User& operator=(const User&);
};

#endif
