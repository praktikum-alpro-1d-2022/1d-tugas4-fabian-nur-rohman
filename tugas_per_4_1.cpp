#include <iostream>
using namespace std;
int main(){
    int bil;
    cout<<"Masukan bilangan: ";
    cin>>bil;

    if(bil % 2 == 0){
        cout<<bil<<" adalah bilangan genap."<<endl;
    } else {
        cout<<bil<<" adalah bilangan ganjil."<<endl;
    }
    
    return 0;
}