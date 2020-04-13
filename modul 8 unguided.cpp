#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

typedef struct TNode
{
	int data;
	TNode *next;
	TNode *prev;
};

TNode *head;

void init() 
{
	head = NULL;
}

int isEmpty() 
{
	if(head == NULL)
	return 1;
	else
	return 0;
}

void insertDepan(int value) 
{
	TNode *baru;
	baru = new TNode; 
	baru->data = value; 
	baru->next = NULL; 
	baru->prev = NULL; 
	if(isEmpty() == 1) 
		{
			head = baru; 
			head->next = NULL;
			head->prev = NULL;
		}
	else 
		{
			baru->next = head; 
			head->prev = baru;
			head = baru; 
		}
	cout<<"Data Masuk\n";
}

void insertBelakang(int value) 
{
	TNode *baru, *bantu;
	baru = new TNode; 
	baru->data = value; 
	baru->next = NULL; 
	baru->prev = NULL; 
	if(isEmpty() == 1) 
		{
			head = baru; 
			head->next = NULL;
			head->prev = NULL;
		}
	else 
		{
			bantu=head;
			while (bantu->next!=NULL)
				{
					bantu=bantu->next;	
				}
			baru->next = baru;
			head->prev = bantu;
		}
	cout<<"Data Masuk\n";
}

void insertTengah(int value, int cari) 
{
	TNode *baru, *bantu, *bantu2;
	baru = new TNode; 
	baru->data = value; 
	baru->next = NULL; 
	baru->prev = NULL; 
	bantu = head; 
	while(bantu->data != cari)
		{
			bantu = bantu->next; 
		}
	bantu2 = bantu->next; 
	baru->next = bantu2; 
	bantu2->prev = baru;
	bantu->next = baru; 
	baru->prev = bantu;
}

void deleteDepan() 
{
	TNode *hapus;
	if(isEmpty() == 0) 
	{
		if(head->next != NULL) 
		{
			hapus = head; 
			head = head->next; 
			head->prev = NULL; 
			delete hapus;
		}
		else 
		{
			head = NULL; 
		}
		cout<<"Data terhapus\n";
	}
	else 
	cout<<"Data kosong\n";
}

void deleteBelakang() 
{
	TNode *hapus;
	if(isEmpty() == 0) 
		{
			if(head ->next != NULL) 
				{
					hapus = head; 
					while (hapus->next!=NULL)
						{
							hapus=hapus->next;
						}
					hapus->prev->next=NULL;
					delete hapus; 
				}
			else 
				{
					head = NULL; 
				}
			cout<<"Data terhapus\n";
		}
	else 
	cout<<"Data kosong\n";
}

void deleteTengah(int cari) 
{
	TNode *hapus, *bantu, *bantu2;
	hapus = head; 
	while(hapus->data!= cari)
		{
			hapus=hapus->next; 
		}
	bantu2 = hapus->next; 
	bantu = hapus->prev;
	bantu->next = bantu2;
	bantu2->prev = bantu;
	cout<<"Data terhapus\n";
	delete hapus;
}

void clear() 
{
	TNode *bantu, *hapus;
	bantu = head; 
	while (bantu != NULL) 
		{
			hapus = bantu;
			bantu = bantu->next;
			delete hapus; 
		}
	head = NULL; 
}
	

void cetak() 
{
	TNode *bantu;
	bantu = head; 
	if(isEmpty() ==0)
	{
			while (bantu != NULL)
		{
			//printf("%d", bantu->data); // cetak data pada setiap node
			cin>>bantu->data;
			bantu = bantu->next; 
		}
		cout<<"\n";
	}
	else 
	cout<<"data kosong";
}

int main()
{
	char karakter;
	int i;
	
	for(int i=0;i>=0;i++)
		{
			cout<<"Masukkan karakter ke- "<<i<<" : "<<karakter;
		}
	cout<<"Data Asli : ";
	cout<<"Data setelah dienkripsi : ";
}


