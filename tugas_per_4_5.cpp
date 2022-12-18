#include <iostream>
using namespace std;
int main(){
    int kode;
    int jumlah;
    int harga;
    int total;
    string nama;
    string ukuran;

    cout<<"======================================================"<<endl;
    cout<<"| Kode Susu | Nama Produk | Ukuran     | Harga       |"<<endl;
    cout<<"======================================================"<<endl;
    cout<<"| 1         | Dancow      | B = Besar  | Rp.10.000,- |"<<endl;
    cout<<"|           |             | S = Sedang | Rp. 4.250,- |"<<endl;
    cout<<"|           |             | K = Kecil  | Rp. 2.100,- |"<<endl;
    cout<<"======================================================"<<endl;
    cout<<"| 2         | Indomilk    | B = Besar  | Rp. 8.500,- |"<<endl;
    cout<<"|           |             | S = Sedang | Rp. 4.000,- |"<<endl;
    cout<<"|           |             | K = Kecil  | Rp. 2.025,- |"<<endl;
    cout<<"======================================================"<<endl;
    cout<<"| 3         | Sustacal    | B = Besar  | Rp.17.000,- |"<<endl;
    cout<<"|           |             | S = Sedang | Rp.14.500,- |"<<endl;
    cout<<"|           |             | K = Kecil  | Rp. 8.300,- |"<<endl;
    cout<<"======================================================"<<endl;
    cout<<"Masukan Kode Susu(1-3): ";
    cin>>kode;
    switch(kode){
        case 1:
            nama = "Dancow";
            cout<<"Masukan Ukuran (b/s/k): ";
            cin>>ukuran;
            if(ukuran == "b" ){
                harga = 10000;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else if(ukuran == "s" ){
                harga = 4250;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else if(ukuran == "k" ){
                harga = 2100;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else{
                cout<<"Tidak ada ukuran itu."<<endl;
            }
            break;
       case 2:
            nama = "Indomilk";
            cout<<"Masukan Ukuran (b/s/k): ";
            cin>>ukuran;
            if(ukuran == "b" ){
                harga = 8500;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else if(ukuran == "s" ){
                harga = 4000;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else if(ukuran == "k" ){
                harga = 2025;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else{
                cout<<"Tidak ada ukuran itu."<<endl;
            }
            break;
        case 3:
            nama = "Sustacal";
            cout<<"Masukan Ukuran (b/s/k): ";
            cin>>ukuran;
            if(ukuran == "b" ){
                harga = 17000;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else if(ukuran == "s" ){
                harga = 14500;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else if(ukuran == "k" ){
                harga = 8300;
                cout<<"Masukan Jumlah Pembelian: ";
                cin>>jumlah;
                total = harga * jumlah;
                cout<<endl;
                cout<<"Susu "<<nama<<endl;
                cout<<"Harga Susu Rp."<<harga<<",-"<<endl;
                cout<<"Jumlah "<<jumlah<<endl;
                cout<<"Total Harga Rp."<<total<<",-"<<endl;
            }else{
                cout<<"Tidak ada ukuran itu."<<endl;
            }
            break;
        default:
            cout<<"Kode yang anda masukan salah."<<endl;
            break;
    }

    return 0;
}
