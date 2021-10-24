#include<iostream>
using namespace std;

int main()
{
    double a,b,c,d,e;
    char x[100];
    cout<<"NILAI KELULUSAN\n";
    cout<<"\n";
    cout<<"Masukan Nama Anda: ";
    cin.getline(x,100);
    
    cout<<"Nilai Absen: ";
    cin>>a;
    
    cout<<"Nilai Tugas: ";
    cin>>b;
    
    cout<<"Nilai UTS: ";
    cin>>c;
    
    cout<<"Nilai UAS: ";
    cin>>d;
    
    e=(0.4*a)+(0.1*b)+(0.2*c)+(0.3*d);
    
    if (e>=50)
    {
        cout<<"\n";
        cout<<"Selamat"<<" "<<x<<","<<"\n";
        cout<<"Anda Lulus, dengan nilai "<<e <<"\n";
    }
    else
    {
        cout<<"\n";
        cout<<"Mohon Maaf"<<" "<<x<<","<<"\n";
        cout<<"Anda Harus Mengulang\n";
    }


    cin.get();
    return 0;

}