#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL


struct alatTulis{
    string buku;
    int ID_faktur;
    int stok;
    int cost;
};

typedef alatTulis infotype;
typedef struct ElmList *adr;

struct ElmList{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301210471(List &L);
adr newElement_1301210471(infotype x);
infotype newElementList_1301210471(int ID_Faktur, string buku, int stok, int harga);
void insertFirst_1301210471(List &L, adr p);
void showAllData_1301210471(List L);
int JumlahData_1301210471(List L);
void tampilDataKe4_1301210471(List L);
int pilihMenu();
#endif // DLL_H_INCLUDED
