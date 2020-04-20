#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	int n;
	int cari,ketemu=0;
	int A[100];
	
	cout<<"\nPROGRAM SEARCHING LINIER\n";
	cout<<"\n=========================\n"<<endl;
	cout<<"Masukkan banyak data : ";
	cin>>n;
	cout<<endl;
	for (i=1;i<=n;i++)
		{
			cout<<"Masukkan data ke-"<<i<<":";
			cin>>A[i];
		}
	cout<<endl;
	cout<<"Bilangan yang ingin dicari : ";
	cin>>cari;
	cout<<endl;
	
	for (i=0;i<=n;i++)
		{
			if (A[i]==cari)
			{
				ketemu=1;
				cout<<"Data ditemukan, Index ke- : "<<i;
				cout<<endl;
			}
		}

	if (ketemu==0)
		{
			cout<<"Data tidak ditemukan"<<endl;
		}
		
	getch();
	
}


