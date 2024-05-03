#include<iostream>
using namespace std;

int main () {

	int pin, pilih, tambah_saldo, tarik, setor;
	int saldo_awal = 200000;

	do {
		cout <<"\t\t\t\t\t===========================================================================\t\t\t" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t     SELAMAT DATANG    \t\t\t\t\t\t\t" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t          DI        \t\t\t\t\t\t\t" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t   BANK Ramah Pelajar  \t\t\t\t\t\t\t" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t    By : Khairunnisa  \t\t\t\t\t\t\t" << endl;
		cout << endl;
		cout <<"\t\t\t\t\t==========================================================================\t\t\t" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t      Masukkan PIN Anda : ";
		cin >> pin;
		cout << endl;
	
		
		
		menu :
		cout <<"\t\t\t\t\t==========================================================================\t\t\t" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t Silahkan Pilih Transaksi" << endl;
		cout << endl;
	
		cout << "\t\t\t\t\t\t1. Tarik Saldo" << endl;
		cout << "\t\t\t\t\t\t2. Tambah Saldo" << endl;
		cout << "\t\t\t\t\t\t3. Cek Saldo" << endl;
		cout << "\t\t\t\t\t\t4. Keluar" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\tPilih (1-4) : ";
		cin >> pilih;
		cout <<"\t\t\t\t\t==========================================================================\t\t\t" << endl;
		cout << endl;
		switch (pilih){
			case 1 : 
				tarik :
				cout << "\t\t\t\t\t\t   Masukkan jumlah saldo yang ingin ditarik : ";
				cin >> tarik;
				cout<< endl;
				if (tarik > saldo_awal){
					cout << "\t\t\t\t\t\t\tMohon maaf, saldo Anda tidak cukup."<< endl;
				}else{
					saldo_awal -= tarik;
					cout << "\t\t\t\t\t\t\t    Berhasil melakukan penarikan." << endl;
				}
				cout << endl;
				goto menu;
				break;
			case 2 :
				setor :
				cout << "\t\t\t\t\t\t\t\t   Masukkan jumlah Saldo : ";
				cin >> setor;
				cout << endl;
				if (setor < 10000){
					cout << "\t\t\t\t\t\t\tMaaf, minimal saldo yang di setor adalah 10000";
				}else{
					cout << "\t\t\t\t\t\t\t      Saldo Anda berhasil ditambahkan." << endl;
					saldo_awal += setor;
				}
				
				cout << endl;
				goto menu;
				break;
			case 3 : 
				cout << "\t\t\t\t\t\t\t      Sisa saldo Anda adalah : " << saldo_awal << endl;
				cout << endl;
				goto menu;
				break;
			case 4 :
				cout << "\t\t\t\t\t\t\tTerimakasih telah melakukan transaksi di Bank kami." << endl;
				cout << endl;
				cout <<"\t\t\t\t\t==========================================================================\t\t\t" << endl;
				break;
			default :
				cout << "\t\t\t\t\t\t\tKode invalid. Silahkan pilih menu yang tersedia." << endl;
				goto menu;
		}
	} while ( true );
	
	return 0;
}
