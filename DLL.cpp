#include "DLL.h"

void createList_1301210471(List &L){
    first(L) = nil;
    last(L) = nil;
}

adr newElement_1301210471(infotype q){
    adr p = new ElmList;
    info(p) = q;
    next(p) = nil;
    prev(p) = nil;
    return p;
}

infotype newElementList_1301210471(int ID_Faktur, string buku, int stok, int harga){
    infotype p;
    p.ID_faktur = ID_Faktur;
    p.buku = buku;
    p.stok = stok;
    p.cost = harga;
    return p;
}


void insertFirst_1301210471(List &L, adr p){
    if(first(L) != nil && last(L) != nil){
        next(p) = first(L);
        prev(first(L) = p);
        first(L) = p;
    }else{
        first(L) = p;
        last(L) = p;
    }
}

void showAllData_1301210471(List L){
    if (first(L) != nil){
        adr p = first(L);
        while (p != nil){
            cout << "ID faktur: " << info(p).ID_faktur << endl;
            cout << "Judul buku: " << info(p).buku << endl;
            cout << "Stok: " << info(p).stok << endl;
            cout << "Harga: Rp" << info(p).cost << endl;
            p = next(p);
        }
        cout << endl;
    }else{
        cout << "List kosong" << endl;
    }
}

int JumlahData_1301210471(List L){
    adr x = first(L);
    int n = 0;
    if(x == nil){
        return 0;
    }else{
        while (x != nil){
            n++;
            x = next(x);
        }
        return n;
    }
}

void tampilDataKe4_1301210471(List L){
    int n = JumlahData_1301210471(L);
    if(n == 0){
        cout << "Data kosong" << endl;
    }else if(n>0 && n<4){
        cout << "Data tidak ditemukan" << endl;
    }else{
        adr x = first(L);
        for(int a = 1; a < 4; a++){
            x = next(x);
        }
        cout << "ID faktur: " << info(x).ID_faktur << endl;
        cout << "Judul buku: " << info(x).buku << endl;
        cout << "Stok: " << info(x).stok << endl;
        cout << "Harga: " << info(x).cost << endl;
    }
}

int pilihMenu(){
    cout << "=====MENU=====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan data pembelian ke 4" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan Menu : " << endl;

    int input = 0;
    cin >> input;
    return input;
}
