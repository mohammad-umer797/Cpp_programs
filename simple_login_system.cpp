#include<iostream>
using namespace std;

string email;
string password;
void login_program(){
    cout<<"Enter your email: ";
    cin>>email;

    cout << "Enter the password: ";
    cin>>password;
}

int main(){

    string Email = "@abbasihere864";
    string Password = "umerabbasi1234";
    bool login_system = true;

    login_program();

    while (login_system)
    {
    if (email == Email && password == Password){
        cout<<"You are entered in the login system";
        login_system = false;
    }
    else {
        cout << "Your password is incorrect, Try again"<<endl;
        login_program();
    }
    }
return 0;
}