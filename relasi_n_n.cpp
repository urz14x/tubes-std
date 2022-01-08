#include "relasi_n_n.h"

void createList(List_r &L){
    first(L) = NULL;
};

address_r alokasi(address_pramusaji P, address_tamu T){
    address_r R = new elm_r;
    parent(R) = P;
    child(R) = T;
    next(R) = NULL;
    prev(R) = NULL;
    return R;
};

void insertFirst(List_r &L, address_r P){
    if(first(L) == NULL){
        first(L) = P;
        next(P) = P;
        prev(P) = P;
    }else {
        next(P) = first(L);
        prev(P) = prev(first(L));
        next(prev(P)) = P;
        prev(first(L)) = P;
        first(L) = P;
    }
};

void deleteElement(List_r &L, address_r &P){
    if(next(P) == P){
        first(L) = NULL;
    }else {
        if(first(L) == P){
            first(L) = next(P);
        }
        next(prev(P)) = next(P);
        prev(next(P)) = prev(P);
    }
    prev(P) = NULL;
    next(P) = NULL;
};

address_r findElement(List_r L, address_pramusaji P, address_tamu T){
    address_r R = first(L);
    if(R!=NULL){
        do {
            if(parent(R) == P && child(R) == T){
                return R;
            }
            R = next(R);
        }while(R!=first(L));
    }
    return NULL;
};

address_r findElement(List_r L, infotype_pramusaji px, infotype_tamu tx){
    address_r R = first(L);
    if(R!=NULL){
        do {
            if(info(parent(R)) == px && info(child(R)) == tx){
                return R;
            }
            R = next(R);
        }while(R!=NULL);
    }
    return NULL;
};

void connect(List_r &LR, List_pramusaji LP, List_tamu LT, infotype_pramusaji px, infotype_tamu tx){
    address_pramusaji P = findElemen(LP, px);
    address_tamu T = findElemen(LT, tx);
    if(P!=NULL && T!=NULL){
        address_r R = alokasi(P, T);
        insertFirst(LR, R);
    }

};

void disconnect(List_r &LR, infotype_pramusaji px, infotype_tamu tx){
    address_r R = findElement(LR, px, tx);
    if(R!=NULL){
        deleteElement(LR, R);
        delete R;
    }

};

void printRelasi(List_r LR, List_pramusaji LP){
    address_pramusaji P = first(LP);
    cout<<"Print relasi dari Pramusaji: "<<endl;
    while(P!=NULL){
        cout<<info(P)<<" - ";
        address_r R = first(LR);
        if(R!=NULL){
            do {
                if(parent(R)==P){
                    cout<<info(child(R))<<", ";
                }
                R = next(R);
            }while(R!=first(LR));
        }
        cout<<endl;
        P = next(P);
    }
    cout<<endl<<endl;
};
void printRelasiTamu(List_r LR, List_tamu LT){
    address_tamu P = first(LT);
    cout<<"Print relasi dari Child"<<endl;
    while(P!=NULL){
        cout<<info(P)<<" - ";
        address_r R = first(LR);
        if(R!=NULL){
            do {
                if(child(R) == P){
                    cout<<info(parent(R))<<", ";
                }
                R = next(R);
            }while(R!=first(LR));
        }
        cout<<endl;
        P = next(P);
    }
    cout<<endl<<endl;
};
void deleteFirst(List_r &LR, List_pramusaji &LP){
    address_r R = first(LR);
    address_pramusaji P = first(LP);
    if(R!=NULL){
        do {
            if(parent(R) == P){
                address_r T = R;
                R = next(R);
                deleteElement(LR, T);
                delete T;
                if(first(LR) == NULL){
                    R = NULL;
                }
            }else {
                R=next(R);
            }
        }while(R!=first(LR));
    }
    delete P;
};
