#include "child.h"

void createListTamu(List_tamu &L){
    first(L) = NULL;
};

address_tamu alokasiTamu(infotype_tamu x){
    address_tamu P = new elmlist_tamu;
    info(P) = x;
    next(P) = NULL;
    return P;
};

void addTamu(List_tamu &L, address_tamu P){
    next(P) = first(L);
    first(L) = P;
};

void deleteTamu(List_tamu &L, address_tamu &P, string tamu){
    cout<<"----------------------------"<<endl;
    P = first(L);
    if(!P){
        cout<<"Data Tamu "<< tamu <<" tidak ditemukan" <<endl;
    }else if (P != NULL ){
        if(info(P) == tamu){
            first(L) = next(P);
            next(P) = NULL;
            cout<<"Data tamu "<<tamu<<" berhasil dihapus"<<endl;
            cout<<endl;
            return;
        }else {
            cout<<"Data Tamu "<< tamu <<" tidak ditemukan" <<endl;
        }
    }
    cout<<endl;
    cout<<"----------------------------"<<endl;
};

void printInfo(List_tamu L){
    address_tamu P = first(L);
    cout<<"----------------------------"<<endl;
    cout<<"List Tamu"<<endl;
    cout<<endl;
    if(!P){
        cout<<"Belum ada data Tamu"<<endl;
    }
    while(P != NULL){
        cout<<info(P)<<", ";
        P = next(P);
    }
    cout<<endl<<endl;
    cout<<"----------------------------"<<endl;
};

address_tamu findElemen(List_tamu L, infotype_tamu x){
    address_tamu P = first(L);
    cout<<"----------------------------"<<endl;
    while(P != NULL){
        if(info(P) == x){
            cout<<"Data tamu "<<x <<" ditemukan"<<endl;
            break;
        }
        P = next(P);
    }
    if(!P){
        cout<<"data tamu "<<x<<" tidak ditemukan"<<endl;
    }
    cout<<"----------------------------"<<endl;
    return NULL;
    cout<<endl<<endl;
};
