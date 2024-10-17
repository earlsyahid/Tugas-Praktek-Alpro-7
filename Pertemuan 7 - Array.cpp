#include <iostream>
using namespace std;

int main()
{
    int jumlah;
    cout<<"Masukkan Jumlah Array: ";
    cin>>jumlah;

        int array[jumlah];

        for (int i=0;i<jumlah;i++)
        {
            cout<<"Masukkan Angka Ke- "<<(i+1)<<": ";
            cin>>array[i];
        }

    int nilaitertinggi = array[0];

        for (int i=1;i<jumlah;i++){
            if (array[i] > nilaitertinggi){
                nilaitertinggi = array[i];
            }
        }
        cout<<""<<endl;
        cout<<"Nilai tertinggi di Array adalah "<<nilaitertinggi<<endl;

    int cekangka;
    cout<<""<<endl;
    cout<<"Masukkan Angka yang ingin diperiksa: ";
    cin>>cekangka;

    bool ditemukan = false;
    int indeks;
    for (int i=0;i<jumlah;i++)
    {
        if (array[i]==cekangka)
        {
        ditemukan = true;
        indeks = i;
        break;
        }
    }

    if (ditemukan)
    {
        cout<<""<<endl;
        cout <<"Angka "<<cekangka<<" Ditemukan di indeks "<<indeks<<endl;
    } else {
        cout <<"Angka "<<cekangka<<" Tidak ditemukan"<<endl;
        }
return 0;
}
