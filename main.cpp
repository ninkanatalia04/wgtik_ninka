#include <iostream>
#include "DLL.h"


using namespace std;

int main()
{
    List L;
    infotype p;
    int choose, n, ID_faktur, harga, stok, jumlahData;
    string Judul_Buku;
    char kembali;
    infotype info;
    adr q;
    createList_1301210471(L);

    choose = pilihMenu();
    while (choose != 0){
        switch(choose){
        case 1:{
            cout << "Jumlah data yang akan ditambahkan : ";
            cin >> jumlahData;
            for (int i = 0; i<=jumlahData; i++){
                cout << "ID_faktur : ";
                cin >> ID_faktur;
                cout << "Judul Buku : ";
                cin >> Judul_Buku;
                cout << "Stok Buku : ";
                cin >> stok;
                cout << "Harga buku : Rp ";
                cin >> harga;
                p = newElementList_1301210471(ID_faktur, Judul_Buku, stok, harga);
                q = newElement_1301210471(p);
                insertFirst_1301210471(L, q);
            }
        }break;
        case 2:{
            cout <<"Data pada list : " << endl;
            showAllData_1301210471(L);
            }break;
        case 3:{
            cout << "Data pembelian ke 4 pada list : " << endl;
            tampilDataKe4_1301210471(L);
            }break;
        }
        cout << "Kembali ke menu utama? (y/n) : ";
        cin >> kembali;
        if (kembali == 'y' || kembali == 'Y'){
            choose = pilihMenu();
        }else{
            cout << "Anda telah keluar dari program" << endl;
        }
    }
    return 0;
}
