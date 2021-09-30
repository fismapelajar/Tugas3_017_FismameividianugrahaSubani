#include <iostream>
using namespace std;

int main (){
	
	string nama,nim;
	
	cout <<"\tKonversi Nilai Mahasiswa";
	cout <<"\n";
	cout <<"\nNama Mahasiswa =";
	getline(cin,nama);
	cout <<"\nNIM =";
	cin >>nim;
	
	float nilai;
	cout <<"\nMasukkan Nilai dalam Rentang 0-100 =";
	cin >>nilai;
	
	if(nilai>=80 && nilai<=100){
		cout <<"\n\tSelamat Nilai Kamu A";
	}else if(nilai>=65 && nilai<=79){
		cout <<"\n\tSelamat Nilai Kamu B";
	}else if(nilai>=50 && nilai<=64){
		cout <<"\n\tSelamat Nilai Kamu C";
	}else if(nilai>=35 && nilai<=49){
		cout <<"\n\tSelamat Nilai Kamu D";
	}else if(nilai>=0 && nilai<=34){
		cout <<"\n\tSelamat Nilai Kamu E";
	}else{
		cout <<"Nilai yang dimasukkan salah, mohon coba lagi!";
	}
	
	return 0;
}
