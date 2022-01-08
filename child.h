#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include "parent.h"
#include <iostream>
using namespace std;

#define next(P) P->next
#define first(L) L.first
#define info(P) P->info
#define parent(P) P->parent

typedef string infotype_tamu;
typedef struct elmlist_tamu *address_tamu;

struct elmlist_tamu {
    infotype_tamu info;
    address_tamu next;
    address_pramusaji parent;
};

struct List_tamu {
    address_tamu first;
    address_tamu last;
};

void createListTamu(List_tamu &L);
address_tamu alokasiTamu(infotype_tamu x);
void addTamu(List_tamu &L, address_tamu P);
void deleteTamu(List_tamu &L, address_tamu &P, string tamu);
void printInfo(List_tamu L);
address_tamu findElemen(List_tamu L, infotype_tamu x);
#endif // CHILD_H_INCLUDED
