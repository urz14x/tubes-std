#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef string infotype_pramusaji;
typedef struct elmlist_pramusaji *address_pramusaji;

struct elmlist_pramusaji{
    infotype_pramusaji info;
    address_pramusaji next;
};

struct List_pramusaji{
    address_pramusaji first;
};

void createList(List_pramusaji &L);
address_pramusaji alokasi(infotype_pramusaji x);
void addPramusaji(List_pramusaji &L, address_pramusaji P);
void deletePramusaji(List_pramusaji &L, address_pramusaji &P, string pramusaji);
void printInfo(List_pramusaji L);
address_pramusaji findElemen(List_pramusaji L, infotype_pramusaji x);

#endif // PARENT_H_INCLUDED
