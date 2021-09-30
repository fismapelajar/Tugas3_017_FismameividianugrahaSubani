#include <iostream>
using namespace std;

int main(){
	string nama,nik;
	
	int jeniskelamin,status,kendaraan,g_pokok,g_kotor,g_bersih,uangmakan,tunjangan,transport,pajak;
	
	cout <<"\tMenghitung Gaji Karyawan";
	cout <<"\n";
	
	cout <<"Nama Karyawan =";
	getline(cin,nama);
	cout <<"NIK =";
	cin >>nik;
	
	cout <<"\n";
	cout <<"Jenis Kelamin";
	cout <<"\n1. Laki-laki\n0. Perempuan";
	cout <<"\nPilih Jenis Kelamin =";
	cin >>jeniskelamin;
	cout <<"Status";
	cout <<"\n1. Menikah\n0. Single";
	cout <<"\nPilih Status =";
	cin >>status;
	cout <<"Kendaraan";
	cout <<"\n1. Mobil\n0. Motor";
	cout <<"\nPilih Kendaraan =";
	cin >>kendaraan;
	
	cout <<"\n";
	cout <<"Gaji Pokok = Rp.";
	cin >>g_pokok;
	cout <<"Uang Makan = Rp.";
	cin >>uangmakan;

	//Tunjangan
	if (jeniskelamin == 1 && status == 1){tunjangan=500;
	}else{
	}
	cout <<"\n Tunjangan Kamu = Rp."<<tunjangan;
	
	//Transport
	if (kendaraan == 1){transport=1000;
	}else if (kendaraan == 0){transport=500;
	}else{
	}
	cout <<"\nBiaya Transport Kamu = Rp."<<transport;
	
	//Gaji Kotor
	g_kotor=g_pokok+uangmakan+tunjangan+transport;
	cout <<"\nGaji Kotor Kamu = Rp."<<g_kotor;	
	
	//Pajak
	pajak=0.05*g_kotor;
	cout <<"\nPajak Kamu = Rp."<<pajak;
	
	//Gaji Bersih
	g_bersih=g_kotor-pajak;
	cout <<"\nGaji Bersih kamu = Rp."<<g_bersih;

	return 0;
}
	

	
	
	
	
	
	
	
	
