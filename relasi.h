#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include "parent.h"
#include "child.h"

void connect(address_pramusaji P, address_tamu &C);
void disconnect(address_tamu &C);
void printRelation(List_pramusaji LP, List_tamu LT);

#endif // RELASI_H_INCLUDED
