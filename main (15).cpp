#include<iostream>
using namespace std;

int tambah(int m, int n);

int main(){
  int a, b;
  a = 5;
  b = 9;

  cout <<"Nilai Sebelum Fungsi Digunakan ";
  cout <<"\na = "<<a<<" b = "<<b;
  tambah(a,b);
  cout <<"\nNilai Setelah Fungsi Digunakan";
  cout <<"\na = "<<a<<" b = "<<b;
  
getchar();
}
int tambah(int m, int n){
    m+=5;
    n+=7;
    cout<<"\n\nNilai di dalam Fungsi Tambah()";
    cout<<"\nm = "<<m<<" n = "<<n;cout<<endl;
  return 0;
  }