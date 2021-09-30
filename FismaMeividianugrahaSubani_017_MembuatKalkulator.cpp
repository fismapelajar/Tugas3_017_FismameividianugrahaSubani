#include <iostream>
using namespace std;

int main(){
	int pil,angka1,angka2;
	float hasil;
	string operasi;
	
	cout <<"\tKALKULATOR";
	cout <<"\nPilih Operasi Matematika";
	cout <<"\n1. Penjumlahan";
	cout <<"\n2. Pengurangan";
	cout <<"\n3. Perkalian";
	cout <<"\n4. Pembagian";
	cout <<"\n5. Modulus";
	cout <<"\n";
	
	cout <<"Masukkan Pilihan  =";
	cin >>pil;
	cout <<" Angka Pertama  =";
	cin >>angka1;
	cout <<" Angka Kedua  =";
	cin >>angka2;
	
	switch (pil){
		case 1 : hasil = angka1+angka2;
		operasi = '+';
		break;
		
		case 2 : hasil = angka1-angka2;
		operasi = '-';
		break;
	
		case 3 : hasil = angka1*angka2;
		operasi = '*';
		break;
		
		case 4 : hasil = angka1/angka2;
		operasi = '/';
		break;
		
		case 5 : hasil = angka1%angka2;
		operasi = '%';
		break;
		
		default : 
		cout <<"\nSyntax ERROR *_*";
		break;
	}
	
	cout <<"\n"<<angka1<<operasi<<angka2<<"="<<hasil;
	
	return 0;
}
