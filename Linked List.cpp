#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <malloc.h>

using namespace std;

struct node
{
	string nama;
	int nim;
	node* next;
};

node* head;
node* tail;
node* entry;
node* curr;
node* bantu;
node* del;


void inisialisasi()
{
	head = NULL; 
    tail = NULL; 
}

void input()
{
    node* baru; 
    for(int i=0;i<4;i++) 
	{ 
    	baru = new node; 
    	cout<<"\nMasukkan Nama Mahasiswa : ";
    	cin>>baru->nama;
    	cout<<"Masukkan NIM Mahasiswa  : ";
    	cin>>baru->nim;
    	baru->next = NULL; 
    	if(head == NULL) 
			{
	    		head = baru; 
	        	head->next = NULL;
	      	} 
      	
		else 
			{
        		bantu = head;
        		while(bantu->next != NULL) 
					{ 
						bantu = bantu->next;
	        		}
        		bantu->next = baru; 
      		}
    }
}

void hapus()
{
	string d;
	if (head!=NULL)
	{
		if(head->next!=NULL)
		{
			bantu=head;
			while(bantu->next->next!=NULL)
				{
					bantu=bantu->next;
				}
			del=bantu->next;
			d=del->nama;
			bantu->next=NULL;
			delete del;
		}
		
		else
		{
			d=head->nama;
			head=NULL;
		}
		
		cout<<d<<" Terhapus\n";
	}
	else cout<<" (Masih Kosong)\n";
}

void cetak()
{
    curr = head;
    if(head == NULL) 
    cout<<"\ntidak ada data dalam linked list"<<endl;
    else
    {
        cout<<"\nNama Mahasiswa \t NIM \n";
        while(curr!=NULL) 
            {
                cout<<curr->nama<<"\t\t"<<curr->nim<<endl;
                curr = curr->next;
            }
        cout<<endl;
    }
}

int main()
{
	int nim;
    string mhs;
    inisialisasi();
    input();
    cetak();
    hapus();
    cout<<endl;
    cetak();
    return EXIT_SUCCESS;
}
