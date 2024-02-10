#include "usuario.hpp"

/**
 * @brief Construtor padrão da classe User.
 */
User::User() {}

/**
 * @brief Construtor que inicializa um objeto User com os dados fornecidos.
 * @param name Nome do usuário.
 * @param cpf CPF do usuário.
 * @param birth Data de nascimento do usuário.
 * @param email Email do usuário.
 */
User::User(string name, string cpf, string birth, string email) : name(name), cpf(cpf), birth(birth), email(email) {}

/**
 * @brief Destrutor da classe User.
 */
User::~User() {}

/**
 * @brief Obtém o nome do usuário.
 * @return O nome do usuário.
 */
string User::getName() const {
    return name;
}

/**
 * @brief Obtém o email do usuário.
 * @return O email do usuário.
 */
string User::getEmail() const {
    return email;
}

/**
 * @brief Obtém o CPF do usuário.
 * @return O CPF do usuário.
 */
string User::getCPF() const {
    return cpf;
}

/**
 * @brief Obtém a função do usuário.
 * @return A função do usuário.
 */
string User::getFuncao() const {
    return funcao;
}

/**
 * @brief Obtém a data de nascimento do usuário.
 * @return A data de nascimento do usuário.
 */
string User::getBirth() const {
    return birth;
}

/**
 * @brief Define o nome do usuário.
 * @param name O novo nome do usuário.
 */
void User::setName(string name) {
    this->name = name;
}



/**
 * @brief Define o email do usuário.
 * @param email O novo email do usuário.
 */
void User::setEmail(string email) {
    this->email = email;
}

/**
 * @brief Define o CPF do usuário.
 * @param cpf O novo CPF do usuário.
 */
void User::setCPF(string cpf) {
    this->cpf = cpf;
}

/**
 * @brief Define a função do usuário.
 * @param funcao A nova função do usuário.
 */
void User::setFuncao(string funcao) {
    this->funcao = funcao;
}

/**
 * @brief Define a data de nascimento do usuário.
 * @param birth A nova data de nascimento do usuário.
 */
void User::setBirth(string birth) {
    this->birth = birth;
}

/**
 * @brief Exibe as informações do usuário.
 */
void User::show() {
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Funcao: " << funcao << endl;
    cout << "Birth: " << birth << endl;
}

/**
 * @brief Sobrecarga do operador de igualdade.
 * Verifica se dois usuários são iguais.
 * @param other O usuário a ser comparado.
 * @return true se os usuários são iguais, false caso contrário.
 */
bool User::operator==(const User& other) const {
    return (name == other.name &&
            email == other.email &&
            cpf == other.cpf &&
            funcao == other.funcao &&
            birth == other.birth);
}

/**
 * @brief Salva as informações do usuário em um arquivo.
 * @param filename O nome do arquivo onde as informações serão salvas.
 */
void User::saveToFile(const string &filename) const {
    ofstream file(filename);

    if (file.is_open()) {
        file << "Name: " << name << endl;
        file << "Email: " << email << endl;
        file << "CPF: " << cpf << endl;
        file << "Funcao: " << funcao << endl;
        file << "Birth: " << birth << endl;

        file.close();
    } else {
        cerr << "Error: Unable to open file for writing: " << filename << std::endl;
    }
}

/**
 * @brief Construtor de cópia da classe User.
 * @param other O usuário a ser copiado.
 */
User::User(const User& other) {
    name = other.name;
    email = other.email;
    cpf = other.cpf;
    funcao = other.funcao;
    birth = other.birth;
}

/**
 * @brief Operador de atribuição da classe User.
 * @param other O usuário a ser atribuído.
 * @return Uma referência para o objeto atual.
 */
User& User::operator=(const User& other) {
    if (this != &other) {
        name = other.name;
        email = other.email;
        cpf = other.cpf;
        funcao = other.funcao;
        birth = other.birth;
    }
    return *this;
}
