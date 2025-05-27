#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void login(){
	string username, nim, password, nama;
	username ="gevan";
	nim ="2400018126";
	cout << "masukan username\n";
	cin >> username;
	cout << "masukan password anda\n";
	cin >> password;
	if (username == nama  , password == nim)
	cout<<"anda berhasil login";
	else 
	cout <<"username atau nim salah";
	}

void daftarmatkul(){
int matkul;
	cout<<"pilih lah matakuliah\n";
	cout<<"1.matdis\n";
	cout<<"2.alpro\n";
	cout<<"3.pweb\n";
	cout<<"4.keluar";
	cin >> matkul;
	
	switch(matkul);{
	case 1:{
		cout<<"1.matdis";
		break;
	}case 2:{
		cout<<"2.alpro";
		break;
	}case 3:{
		cout<< "3.pweb";
		break;
	}default:{
		cout<<"anda keluar";
		break;
	}
	ofstream (out, "krs.txt")
	return 0;
 } } 


void hpsmatkul(){
	char hps
	cout<< "pilih mana yang mau di hapus";
	cin>> hps;
	ofstream (out, "krs.txt")
}

void bea(){
	int ukt, djarum, muhammad, emas;
	char bea
 	ukt = 1100000;
	djarum = 100000;
	muhammad = 10000;
	emas= 50000;
	cout<< "pilih program beasiswa";
	cin>> beas;
	cout<<"1.djarum (100000)\n";
	cout<<"2.muhammadiyah(100000)\n";
	cout<<"3.indonesia emas(50000)\n";
    switch(beas){
	case 1:{
		cout<< ukt "-" djarum "=" ukt-djarum ;
		break;
	}case 2:{
		cout<< ukt "-" muhammad "=" ukt=muhammad ;
		break;
	}case 3:{
		cout<< ukt "-" emas "=" ukt-emas;
		break;
	}default:{
		cout<<"pilihan tidak valid";
		break;
	}
	ofstream (out, "krs.txt")
}
	return 0;
}

void metode(){
	char pilih
	cout<< "pilih metode pembaran\n";
	cout<< "1.bri\n";
	cout<< "2.mandiri\n";
	cout<< "3.bsi\n";
	cin>>  pilih
	switch(pilih){
		case:1{
			cout<<"anda memilih bri";
			break;
		}case:2{
			cout<<"anda memilih mandiri\n"
			break;
		}case:3{
		cout<<"anda memilih bsi\n";
		break;
		}default{
			cout<<"pilihan tidak valid\n";
			break;
		}}}}

int main(){
	login;
	daftarmatkul;
	hpsmatkul;
	bea;
	metode;
	return 0;
}
