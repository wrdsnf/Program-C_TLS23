#include <iostream>
using namespace std;
 
int main()
{
  cout << "##  Program C++ Kalkulator Sederhana  ##" << endl;
  cout << "========================================" << endl;
  cout << endl;
 
  int pil;
  float num1, num2;
 
  cout << "1. Penjumlahan"<< endl;
  cout << "2. Pengurangan"<< endl;
  cout << "3. Perkalian"  << endl;
  cout << "4. Pembagian"  << endl;
  cout << "5. Modulus"    << endl;
  cout << endl;
 
  cout << "Input pilihan operasi (1/2/3/4/5): ";
  cin >> pil;
  cout << "Angka pertama: ";
  cin >> num1;
  cout << "Angka kedua: ";
  cin >> num2;
  cout << endl;
 
  switch (pil) {
   case 1:
     cout << "Hasil dari " << num1 << " + " << num2 << " = " << num1+num2;
     break;
   case 2:
     cout << "Hasil dari " << num1 << " - " << num2 << " = " << num1-num2;
     break;
   case 3:
     cout << "Hasil dari " << num1 << " * " << num2 << " = " << num1*num2;
     break;
   case 4:
     cout << "Hasil dari " << num1 << " / " << num2 << " = " << num1/num2;
     break;
   case 5:
     cout << "Hasil dari " << num1 << " % " << num2 << " = " << 
             (int)num1 % (int)num2;
     break;
   default :
     cout << ("Maaf, pilihan operasi tidak tersedia");
  }
 
  cout << endl;
  return 0;
}