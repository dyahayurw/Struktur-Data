#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#define MaxElemen 100

using namespace std;

struct Tumpukan
{
	char isi[MaxElemen];
	int atas;
} T;

void PUSH (char x)
{
	if(T.atas == MaxElemen)
	{
		cout<<"Tumpukan Penuh";
		getch();
	}
	
	else
	{
 		T.atas = T.atas + 1;
		T.isi[T.atas] = x;
	}
}

char POP()
{
	char hasil;
	if(T.atas == 0)
	{
		cout<<"Tumpukan Kosong";
    	hasil = ' ';
	}
	
   else
   {
	    hasil = T.isi[T.atas];
	    T.atas = T.atas - 1;
   }
   return hasil;
}


int main()
{
     int i,juml,belakang;
     char kata[MaxElemen];
     bool palindrome=true;

     T.atas =0;
     cout<<"Aplikasi Stack untuk Membalik kalimat\n";
     cout<<"=========================================\n\n";


     cout<<"Masukkan Kalimat : ";
     cin.getline(kata,sizeof(kata));
     cout<<"\nKalimat Asli : "<<kata;

     juml=strlen(kata);
     belakang=juml-1;
     cout<<endl<<"Jumlah Huruf : "<<juml<<endl;


     for(i=0;i<strlen(kata);i++)
     {
      PUSH(kata[i]);
      }

      cout<<"Kalimat Setelah dibalik : ";

      for (i=0;i<strlen(kata);i++)
      {
       cout<<""<<POP();
      }

      for (int a=0;a<juml;a++)
      {
          if((char)tolower(kata[a])!=(char)tolower(kata[belakang]))
            palindrome=false;
          break;
      }
            if (palindrome)
                cout<<"\n Palindrome";
            else
                cout<<"\n Bukan Palindrome";
            return 0;
       getch();
    }
