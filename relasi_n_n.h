#ifndef RELASI_N_N_H_INCLUDED
#define RELASI_N_N_H_INCLUDED

#include "parent.h"
#include "child.h"
#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define prev(P) P->prev
#define parent(P) P->parent
#define child(P) P->child

typedef struct elm_r *address_r;
struct elm_r {
    address_pramusaji parent;
    address_tamu child;
    address_r next;
    address_r prev;
};

struct List_r{
    address_r first;
};

void createList(List_r &L);
address_r alokasi(address_pramusaji P, address_tamu T);
void insertFirst(List_r &L, address_r P);
void deleteElement(List_r &L, address_r &P);

address_r findElement(List_r L, address_pramusaji P, address_tamu T);
address_r findElement(List_r L, infotype_pramusaji px, infotype_tamu tx);

void connect(List_r &LR, List_pramusaji LP, List_tamu LT, infotype_pramusaji px, infotype_tamu tx);
void disconnect(List_r &LR, infotype_pramusaji px, infotype_tamu tx);

void printRelasi(List_r LR, List_pramusaji LP);
void printRelasiTamu(List_r LR, List_tamu LT);

void deleteFirst(List_r &LR, List_pramusaji &LP);
#endif // RELASI_N_N_H_INCLUDED
