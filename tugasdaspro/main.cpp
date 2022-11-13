#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int uang = 5000;
    int harga,jumlah;

    cout << "Harga Permen 500 1000 300 :"<< endl;

    cout << "Pilih Harga Permen= ";
    cin >>harga;

    if(harga == 500){
        cout << "Dito mendapatkan 5 permen";
    }else if(harga == 1000){
        jumlah= uang/harga;
        cout << "Dito mendapatkan " << jumlah << " permen";
    }else if(harga == 300){
        cout << "Kelipatan harga" <<endl;
        for(int i = 300; i <= uang; i+=300){
            cout << i << " ";
            jumlah+=1;
        }
        cout << endl;
        cout << "Dito mendapatkan " << jumlah << " permen";
    }else{
        cout << "Harga tidak ada di list";
    }

    return 0;
}
