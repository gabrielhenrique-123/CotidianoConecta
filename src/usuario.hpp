#ifndef _USUARIO_HPP_
#define _USUARIO_HPP_
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;


class User{
    protected:
        string name;
        string number;
        string birth;
        string email;
        string cpf;
        string funcao;

    public:
        User();
        User(string name, string cpf, string birth, string email);
        
        virtual ~User();

        string getName() const;
        string getNumber() const;
        string getEmail() const;
        string getCPF() const;
        string getFuncao() const;
        string getBirth() const;

        void setName(string name);
        void setNumber(string number);
        void setEmail(string email);
        void setCPF(string cpf);
        void setFuncao(string funcao);
        void setBirth(string birth);

        void show();

        void saveToFile(const string filename) const;

        bool operator==(const User&) const;       

        User(const User&);
        User& operator=(const User&);
};

#endif
