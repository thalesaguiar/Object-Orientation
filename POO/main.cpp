#include <iostream>
#include <string>

using namespace std;

class Person {

  private :
    string cpf;

  public :
    string name;
    int age;

    void setCPF(string userCPF){
      cpf = userCPF;
    }

    string getCPF(){
      return cpf;
    }

    void showCPF(){
      cout << "Seu CPF é " << getCPF();
    }


};



int main(){

    string cpf;
    Person student;
    student.name = "Thales";
    student.age = 24;
    cout << "Digite seu CPF" << endl;
    cin >> cpf;

    student.setCPF(cpf);
    student.showCPF();

    return 0;
}