#include <iostream>
#include "parent.h"
#include "child.h"
#include "menu.h"

#include "relasi_n_n.h"

using namespace std;

int main()
{
    int pilihan;
    pilihan = selectMenu();
    string insertPramusaji;
    string delPramusaji;
    string findPramusaji;
    string connectPramusaji;

    string insertTamu;
    string findTamu;
    string delTamu;
    string connectTamu;

    List_pramusaji Pramusaji;
    List_tamu Tamu;
    List_r relasi;

    address_pramusaji P;
    address_tamu T;

    createList(Pramusaji);
    createListTamu(Tamu);


    while(pilihan != 0){
        switch(pilihan){
        case 1:
            cout<<"Masukan pramusaji: "<<endl;
            cin>>insertPramusaji;
            addPramusaji(Pramusaji, alokasi(insertPramusaji));
            cout<<endl;
            cout<<"Berhasil Menambahkan Pramusaji "<< insertPramusaji <<endl<<endl;
            break;
        case 2:
            cout<<endl;
            printInfo(Pramusaji);
            break;
        case 3:
            cout<<"Masukan nama pramusaji yang ingin di hapus: "<<endl;
            cin>>delPramusaji;
            deletePramusaji(Pramusaji, P, delPramusaji); //Delete first
            break;
        case 4:
            cin>>findPramusaji;
            findElemen(Pramusaji, findPramusaji);
            break;

        case 5:
            cout<<"Masukan tamu: "<<endl;
            cin>>insertTamu;
            addTamu(Tamu, alokasiTamu(insertTamu));
            cout<<endl;
            cout<<"Berhasil Menambahkan Tamu "<< insertTamu <<endl<<endl;
            break;
        case 7:
            printInfo(Tamu);
            break;
        case 6:
            cout<<"Masukan nama tamu yang ingin di hapus: "<<endl;
            cin>>delTamu;
            deleteTamu(Tamu, T, delTamu); //Delete first
            break;
        case 8:
            cin>>findTamu;
            findElemen(Tamu, findTamu);
            break;
        case 9:
            cout<<"Pramusaji yang akan dihubungkan: "<<endl;
            cin>>connectPramusaji;
            cout<<"Tamu yang akan di hubungkan: "<<endl;
            cin>>connectTamu;
            createList(relasi);

            break;
        case 13:
            printRelasi(relasi, Pramusaji);
            printRelasiTamu(relasi, Tamu);
            break;
        }


        pilihan = selectMenu();
    }

            //Relasiin
            //cout<<"Masukan Data Pramusaji"<<endl;
           // cin>>relasiPramusaji;
          //  cout<<"Masukan Data Tamu"<<endl;
         //   cin>>insertTamu;
         //   connect(relasi, Pramusaji, Tamu, relasiPramusaji, insertTamu);
         //   break;


    return 0;
}
