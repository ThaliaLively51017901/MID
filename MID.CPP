#include <conio.h>
#include <iostream.h>
void main()
{
char nama[20], nim[8], nilaihuruf;
int nt1, nt2, nt3, nm, nf, ttln, m, n, o, na;
cout<<"Nama         : ";cin>>nama;
cout<<"NIM          : ";cin>>nim;
cout<<"Nilai Tugas 1: ";cin>>nt1;
cout<<"Nilai Tugas 2: ";cin>>nt2;
cout<<"Nilai Tugas 3: ";cin>>nt3;
cout<<"Nilai MID    : ";cin>>nm;
cout<<"Nilai Final  : ";cin>>nf;
ttln=(nt1+nt2+nt3)/3;
m=ttln*20/100;
n=nm*40/100;
o=nf*40/100;
na=m+n+o;
cout<<"\nNama       :     "<<nama;
cout<<"\nNIM        :     "<<nim;
cout<<"\nNilai Akhir:     "<<na;
cout<<"\nNilai Huruf:     "<<nilaihuruf;
if(na >= 80){
cout<<"A";
}
else
if(na >= 70){
cout<<"B";
}
else
if(na >= 60){
cout<<"C";
}
else
if(na >= 50){
cout<<"D";
}
else
cout<<"E";{
}
getch();
}

