#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//using namepace std;

struct data_pembeli
{
	char* kode_beli[100]={"P001","P002","P003","P004","P005"};
	char* status[100]={"M","M","BM","BM","M"};
	char* nama[100]={"Diana","Rina","Lina","Doni","Dodi"};
};

struct data_barang
{
	char kode_barang={"BRG001","BRG002","BRG003","BRG004","BRG005"}
	char* nama_barang[20]={"Pensil","Buku Tulis","Penghapus","Penggaris","Ballpoint"};
	int harga[20]={2000,3500,1000,1500,2500};
};

using namespace std;
int main()
int jb, harga;

{
	data_pembeli shop;
	cout<<"Kode Pembeli : "; cin>>shop.kode_beli;
	cout<<"Nama Pembeli : ";
	cin>>shop.nama;
	cout<<"Status Pembeli : ";
	cin>>shop.status;
	cout<<"Kode Barang : "<<kode_barang;
	cout<<"Nama Barang : ";
	cin>>shop.nama_barang;
	cout<<"Harga Barang : ";
	cin>>shop.harga;
	cout<<"Jumlah Barang : ";
	cin>>jb;
	cout<<"Sub Total : ";
	cin>>jb*harga;
	
	
}

