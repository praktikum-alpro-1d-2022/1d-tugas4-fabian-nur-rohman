#include <iostream>
using namespace std;
int main(){
    string username;
    string password;

    cout<<"Masukan Username anda: ";
    cin>>username;
    cout<<"Masukan Password anda: ";
    cin>>password;

    if(username == "admin"){
        if(password == "admin1"){
            cout<<"Username dan Password sesuai, Login berhasil."<<endl;
        }else{
            cout<<"Username sesuai, Password tidak sesuai."<<endl;
        }
    }else{
        if(password == "admin1"){
            cout<<"Username tidak sesuai, Password sesuai."<<endl;
        }else{
            cout<<"Username dan Password tidak sesuai."<<endl;
        }
    }

    return 0;
}
