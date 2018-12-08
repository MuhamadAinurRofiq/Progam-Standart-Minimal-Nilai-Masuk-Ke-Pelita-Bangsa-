#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    float n1,n2,n3,rata_rata;
    cout<<" Persyaratan masuk ke universitas PELITA BANGSA"<<endl;
    cout<<"=================================================="<<endl;
    cout<<endl;
    cout<<" Berapakah jumlah nilai UN mu?"<<endl;
    cout<<endl;
    cout<<" Pertama masukkan nilai Matematikamu :  ";
    cin>>n1;
    cout<<" kedua massukkan nilai B.indonesiamu :  ";
    cin>>n2;
    cout<<" ketiga masukkan nilai B.inggrismu :  ";
    cin>>n3;
    rata_rata= (n1+n2+n3)/3;
    cout<<endl;
    cout<< "Nilai rata ratamu adalah : "<<rata_rata<<endl;
    cout<<endl;
    if (rata_rata>7)
    {
        cout<<" SELAMAT KAMU DITERIMA "<<endl;
    }
    else
    {
        cout<<" MAAF KAMU TIDAK DITERIMA "<<endl;

    }

    return 0;
}
