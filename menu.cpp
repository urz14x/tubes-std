#include <iostream>
using namespace std;

int selectMenu(){
    cout<<"===== MENU ======"<<endl;
    cout<<"1. Menambahkan pramusaji baru"<<endl;
    cout<<"2. Menampilkan data pramusaji"<<endl;
    cout<<"3. Menghapus pramusaji tertentu"<<endl;
    cout<<"4. Mencari pramusaji X"<<endl;
    cout<<"==============================="<<endl;
    cout<<"5. Menambahkan tamu baru"<<endl;
    cout<<"6. Menghapus tamu pada pramusaji"<<endl;
    cout<<"7. Menampilkan seluruh tamu pada pramusaji"<<endl;
    cout<<"8. Mencari tamu Y pada Pramusaji"<<endl;
    cout<<"==============================="<<endl;
    cout<<"9. Membuat relasi antara pramusaji X dan tamu Y"<<endl;
    cout<<"10. Menghapus relasi antara pramusaji dan tamu Y"<<endl;
    cout<<"11. Menampilkan jumlah pramusaji yang melayani tamu X beserta data tamu tersebut"<<endl;
    cout<<"12. Menampilkan data pramusaji yang paling banyak melayani tamu"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"Pilihan menu: ";

    int input = 0;
    cin>>input;

    return input;
}
