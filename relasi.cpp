#include "relasi.h"

void connect(address_pramusaji P, address_tamu &C){
    if(P!=NULL && C!=NULL){
      parent(C) = P;
    }
};

void disconnect(address_tamu &C){
    if(C!=NULL){
        parent(C) = NULL;
    }
};

void printRelation(List_pramusaji LP, List_tamu LT){
    address_pramusaji P;
    address_tamu C;

    P = first(LP);
    cout<<"List Relasi"<<endl;
    while(P!=NULL){
        cout<<"Pramusaji: "<<info(P)<<endl;
        cout<<"Tamu: ";
        C = first(LT);
        while(C!=NULL){
            if(parent(C) == P){
                cout<<info(C)<<", ";
            }
            C = next(C);
        }
        cout<<endl;
        P = next(P);
    }
    cout<<endl;
};
