#include <iostream>
//#include"string.h"

using namespace std;

class Caddrlist
{
public:
    Caddrlist(string name, string address, string telephone, string birthday);

    void show();

private:
    string name;
    string address;
    string telephone;
    string birthday;
};

Caddrlist::Caddrlist(string name, string address, string telephone, string birthday)
{
    this->name = name;
    this->address = address;
    this->telephone = telephone;
    this->birthday = birthday;
}

void Caddrlist::show()
{
    cout << "name:" << name << endl;
    cout << "address:" << address << endl;
    cout << "telephone:" << telephone << endl;
    cout << "birthday:" << birthday << endl;
}

int main()
{
    Caddrlist list = Caddrlist("James","Cleveland","12345678","1984-12-30");
    list.show();
    return 0;
}