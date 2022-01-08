#include "parent.h"

//create list pramusaji
void createList(List_pramusaji &L){
    first(L) = NULL;
};

address_pramusaji alokasi(infotype_pramusaji x){
    address_pramusaji P = new elmlist_pramusaji;
    info(P) = x;
    next(P) = NULL;
    return P;
};
//insert first
void addPramusaji(List_pramusaji &L, address_pramusaji P){
    next(P) = first(L);
    first(L) = P;
};


//Delete first
void deletePramusaji(List_pramusaji &L, address_pramusaji &P, string pramusaji){
    cout<<"----------------------------"<<endl;
    P = first(L);
    while(P != NULL){
        if(info(P) == pramusaji){
            cout<<"Data pramusaji "<<pramusaji<<" berhasil dihapus"<<endl;
            first(L) = next(P);
            next(P) = NULL;
        }
        P = next(P);
    }

    cout<<"----------------------------"<<endl;
    cout<<endl;
};
//Print info pramusaji
void printInfo(List_pramusaji L){
    cout<<"----------------------------"<<endl;
    address_pramusaji P = first(L);
    cout<<"List Pramusaji :"<<endl;
    cout<<endl;
    if(!P){
        cout<<"Belum ada data pramusaji"<<endl;
    }
    while(P != NULL){
        cout<<info(P)<<", ";
        P = next(P);
    }
    cout<<endl;
    cout<<"----------------------------"<<endl;
    cout<<endl<<endl;
};

address_pramusaji findElemen(List_pramusaji L, infotype_pramusaji x){
    address_pramusaji P = first(L);
    cout<<"----------------------------"<<endl;
    while(P != NULL){
        if(info(P) == x){
            cout<<"Data Pramusaji "<< x <<" ditemukan"<<endl;
            break;
        }
        P = next(P);
    }
    if(!P){
        cout<<"data pramusaji "<<x<<" tidak ditemukan"<<endl;
    }
    cout<<"----------------------------"<<endl;
    return NULL;
    cout<<endl<<endl;
};
