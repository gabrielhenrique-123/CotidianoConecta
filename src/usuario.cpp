#include "usuario.hpp"

User::User() {}

User::User(string name, string cpf, string birth, string email) : name(name), cpf(cpf), birth(birth), email(email) {}

User::~User() {}

string User::getName() const {
    return name;
}

string User::getNumber() const {
    return number;
}

string User::getEmail() const {
    return email;
}

string User::getCPF() const {
    return cpf;
}

string User::getFuncao() const {
    return funcao;
}

string User::getBirth() const {
    return birth;
}

void User::setName(string name) {
    this->name = name;
}

void User::setNumber(string number) {
    this->number = number;
}

void User::setEmail(string email) {
    this->email = email;
}

void User::setCPF(string cpf) {
    this->cpf = cpf;
}

void User::setFuncao(string funcao) {
    this->funcao = funcao;
}

void User::setBirth(string birth) {
    this->birth = birth;
}

void User::show() {
    cout << "Name: " << name << endl;
    cout << "Number: " << number << endl;
    cout << "Email: " << email << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Funcao: " << funcao << endl;
    cout << "Birth: " << birth << endl;
}

bool User::operator==(const User& other) const {
    return (name == other.name &&
            number == other.number &&
            email == other.email &&
            cpf == other.cpf &&
            funcao == other.funcao &&
            birth == other.birth);
}

void User::saveToFile(const string filename) const {
    ofstream file("dataBank.txt");

    if (file.is_open()) {
        file << "Name: " << name << endl;
        file << "Number: " << number << endl;
        file << "Email: " << email << endl;
        file << "CPF: " << cpf << endl;
        file << "Funcao: " << funcao << endl;
        file << "Birth: " << birth << endl;

        file.close();
    } else {
        cerr << "Error: Unable to open file for writing: " << filename << std::endl;
    }
}

User::User(const User& other) {
    name = other.name;
    number = other.number;
    email = other.email;
    cpf = other.cpf;
    funcao = other.funcao;
    birth = other.birth;
}

User& User::operator=(const User& other) {
    if (this != &other) {
        name = other.name;
        number = other.number;
        email = other.email;
        cpf = other.cpf;
        funcao = other.funcao;
        birth = other.birth;
    }
    return *this;
}
