#include <iostream>
#include <conio.h>
using namespace std;

void garis(){
		cout<<"========================================================================="<<endl;;
	}
int main(){
	system ("color a");
	string a;
	char b,d,e;
	int c,f,g,h,i,j;
	garis();
	cout<<"\t \t \t Aplikasi Bengkel\n";
	garis();
	cout<<"Kode Servis \t Servis \t\t\t Kategori \t Tarif"<<endl;
	cout<<"     1 \t\t Membersihkan Mesin \t\t Sedang \t 200.000"<<endl;
	cout<<"     2 \t\t Memperbaiki Mesin \t\t Berat \t \t 500.000"<<endl;	
	cout<<"     3 \t\t Membersihkan Suku Cadang \t Ringan \t 50.000"<<endl;
	cout<<"     4 \t\t Memperbaiki Suku Cadang \t Sedang \t 100.000"<<endl;
	cout<<"     5 \t\t Mengganti Suku Cadang \t\t Sedang \t 150.000"<<endl;
	garis();
	cout<<"Masukkan Plat Nomor Kendaraan \t \t : ";
	cin>>a;	
	garis();
	cout<<"Masukkan Kode Servis  \t\t\t : ";
	cin>>b;
	garis();
	if (b=='1'){
	cout<<"Servis \t \t \t \t\t : Membersihkan Mesin"<<endl;
	cout<<"Kategori \t \t \t\t : Sedang"<<endl;
	cout<<"Tarif \t \t \t \t\t : 210.000"<<endl;
	}else if(b=='2'){
	cout<<"Servis \t \t \t \t\t : Memperbaiki Mesin"<<endl;
	cout<<"Kategori \t \t \t \t : Berat"<<endl;
	cout<<"Tarif \t \t \t \t \t : 500.000"<<endl;
	}else if(b=='3'){
	cout<<"Servis \t \t \t \t \t : Membersihkan Suku Cadang"<<endl;
	cout<<"Kategori \t \t \t \t : Ringan"<<endl;
	cout<<"Tarif \t \t \t \t \t : 50.000"<<endl;
	}else if(b=='4'){
	cout<<"Servis \t \t \t \t \t : Memperbaiki Suku Cadang"<<endl;
	cout<<"Kategori \t \t \t\t : Sedang"<<endl;
	cout<<"Tarif \t \t \t \t \t : 100.000"<<endl;
	}else if(b=='5'){
	cout<<"Servis \t \t \t \t \t : Mengganti Suku Cadang"<<endl;
	cout<<"Kategori \t \t \t \t : Sedang"<<endl;
	cout<<"Tarif \t \t \t \t \t : 150.000"<<endl;
	}
	garis();
	cout<<"Berapa Banyak Servis Yang Anda Lakukan \t : ";
	cin>>c;
	garis();
	if(b=='1'){
	f=c*210000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;
		
	}
	else if(b=='2'){
	f=c*500000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;
			
	}
	else if(b=='3'){
	f=c*50000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;	
	}
	else if(b=='4'){
	f=c*100000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;	
	}
	else if(b=='5'){
	f=c*150000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;	
	}
	if(f>=1000000){
		g=f*10/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=800000){
		g=f*8/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=600000){
		g=f*6/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=400000){
		g=f*4/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=200000){
		g=f*2/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}else{
		g=0;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;	
		}
	h=f-g;
	cout<<"Total Akhir \t\t\t\t : ";cout<<h<<endl;
	garis();
	cout<<"Bayar \t\t\t\t\t : ";
	cin>>i;
	j=i-h;
	cout<<"Kembalian \t\t\t\t : ";cout<<j<<endl;
	garis();
	cout<<"\t\t\t\t Terimakasih"<<endl;
	garis();
	return 0;
}
