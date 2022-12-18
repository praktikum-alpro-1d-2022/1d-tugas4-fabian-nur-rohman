#include <iostream>
using namespace std;
int main(){
    int tahun;
    cout<<"          Mencari tahun kabisat"<<endl;
    cout<<"Masukan tahun yang ingin anda cari tahu: ";
    cin>>tahun;

    if(tahun % 4 == 0){
        cout<<tahun<<" adalah tahun kabisat."<<endl;
    } else {
        cout<<tahun<<" bukan tahun kabisat."<<endl;
    }

    return 0;
}
