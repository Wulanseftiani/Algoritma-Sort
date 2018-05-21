#include <iostream>
#include <conio.h>

using namespace std;


int f[100];
void merge(int,int,int);
void mergesort(int kecil,int besar)
{
 int hasil;
 if(kecil<besar)
 {
  hasil=(kecil+besar)/2;
  mergesort(kecil,hasil);
  mergesort(hasil+1,besar);
  merge(kecil,hasil,besar);
 }
}
void merge(int kecil,int hasil,int besar)
{
 int a,b,c,d[100],e;
 a=kecil;
 b=kecil;
 c=hasil+1;
 while((a<=hasil)&&(c<=besar))
 {
  if(f[a]<=f[c])
  {
   d[b]=f[a]; a++;
  }
  else
  {
   d[b]=f[c]; c++;
  } b++;
 }
 if(a>hasil)
 {
  for(e=c;e<=besar;e++)
  {
   d[b]=f[e]; b++;
  }
 }
 else
 {
  for(e=a;e<=hasil;e++)
  {
   d[b]=f[e]; b++;
  }
 }
 for(e=kecil;e<=besar;e++)
  f[e]=d[e];
}
void merge()
{
 int num,i;
 string a[i]; 
 cout<<" MERGE SORT PROGRAM "<<endl;

 cout<<endl<<endl;
 cout<<"Masukkan Banyak Bilangan: ";cin>>num;
   cout<<endl;
 cout<<"Sekarang masukkan "<< num <<" Bilangan yang ingin Diurutkan :"<<endl;
 for(i=1;i<=num;i++)
 {
  cout<<"Bilangan ke-"<<i<<" "<<endl;
  cin>>a[i];
 }
 mergesort(1,num);
 cout<<endl;
 cout<<"Hasil akhir pengurutan :"<<endl;
 cout<<endl;
 for(i=1;i<=num;i++)
  cout<<a[i]<<" ";
 cout<<endl<<endl<<endl<<endl;
   getch();
}
