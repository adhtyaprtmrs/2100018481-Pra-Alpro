#include<iostream> 
using namespace std;
int main() 
{
	int menu,a,b,hasil,jumlah,kurang,bagi,kali;
	
	balik:
	cout<< "Kalkulator Sederhana, Silahkan Pilih Sistem Operasi yang Digunakan" <<endl;
	cout<< "1) Penjumlahan" <<endl;
	cout<< "2) Pengurangan" <<endl;
	cout<< "3) Pembagian" <<endl;
	cout<< "4) Perkalian" <<endl;
	cout<< "0) Keluar" <<endl;
	cout<< "=================================" <<endl;
	cout<< "Masukkan Pilihan Menu = ";
	cin >> menu;
	
	
	switch (menu){
		case 1:
		cout<< "Masukkan bilangan a = ";
		cin >> a;
		cout<< "Masukkan bilangan b = ";
		cin >> b;
		cout<<endl;
		cout<<"Hasil dari Penjumlahan " <<a <<" + " <<b;
		jumlah=a+b;
		cout<<" = "<<jumlah;
		break;
		
		case 2:
		cout<< "Masukkan bilangan a = ";
		cin >> a;
		cout<< "Masukkan bilangan b = ";
		cin >> b;
		cout<<endl;
		cout<<"Hasil dari Pengurangan " <<a <<" - " <<b;
		kurang=a-b;
		cout<<" = "<<kurang;
		break;
		
		case 3:
		cout<< "Masukkan bilangan a = ";
		cin >> a;
		cout<< "Masukkan bilangan b = ";
		cin >> b;
		cout<<endl;
		cout<<"Hasil dari Pembagian " <<a <<" / " <<b;
		bagi=a/b;
		cout<<" = "<<bagi;
		break;
		
		case 4:
		cout<< "Masukkan bilangan a = ";
		cin >> a;
		cout<< "Masukkan bilangan b = ";
		cin >> b;
		cout<<endl;
		cout<<"Hasil dari Perkalian " <<a <<" * " <<b;
		kali=a*b;
		cout<<" = "<<kali;
		break;
		}
		cout<<endl;
		cout<<endl;
		
		goto balik;
	}
	
	
