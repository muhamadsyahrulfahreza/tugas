#include <iostream>
using namespace std;

struct mhs
{ char nama[20],nim[10],matkul[15];
  int sks;
};
struct mhs bayar[2];

int main ()
{
  int bts,var,tetap;
  for(int i=0; i<2; i++)
  {
    //input data
    cout<<"\n\n-------------------------------\n";
    cout << "\nNama mhs         = ";
    cin >> bayar[i].nama;
    cout << "\nNIM              = ";
    cin >> bayar[i].nim;
    cout << "\nMata Kuliah       = ";
    cin >> bayar[i].matkul;
  
  input:
  if (bayar[i].sks < 0 || bayar[i].sks > 2)
  {
    cout<<"Program tidak sesuai\n";
    goto input;
  }
  cout<<"\nJumlah sks     = ";
  cin>>bayar[i].sks;
  if (bayar[i].sks==0)
  {
    tetap=25000;
    var=bayar[i].sks*25000;
  }
  else if (bayar[i].sks==2)
  {
    tetap=30000;
    var=bayar[i].sks*30000;
  }
  cout << endl;
  //output data
  cout << "\n\n-------------------------------------------\n";
  cout << " Output ";
  cout << "\n--------------------------------------------\n";
  cout << "\nNama mhs = " << bayar[i].nama;
  cout << "\nNIM = " << bayar[i].nim;
  cout << "\nJumlah sks = " << bayar[i].sks;
  cout << "\nSpp tetap = " << tetap;
  cout << "\nSpp variabel = " << var;
  cout << endl<<endl;
} 

}