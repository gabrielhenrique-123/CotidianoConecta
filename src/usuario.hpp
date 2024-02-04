#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class User{
    protected:
        string name;
        string number;
        string email;

    public:
        User();
        User(string name, string number, string email);
        
        virtual ~User();

        string getName() const;
        string getNumber() const;
        string getEmail() const;

        void setName(string name);
        void setNumber(string number);
        void setEmail(string email);

        //bool operator==(const )       //Tem que sobrecarregar o operador -- classe canonica

        User(const User&);
        User& operator=(const User&);
};