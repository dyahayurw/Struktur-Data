#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
	int i,j,k,a,m;
	char nama[6][20], temp[60];
	
	cout<<"\nProgram Mengurutkan Karakter\n";
	
	for (i=1; i<=6; i++)
	{
		cout<<"Input"<<i<<" = "; gets(nama[i]);
		if (i>1)
		{
			for (j=1; j<=(i-1); j++)
			{
				a=(strcmp(nama[i], nama[j]));
				if (a<=0)
				{
					strcpy(temp, nama[i]);
					for (k=(i-1); k>=j;k--)
					{
						m=(k+1);
						strcpy (nama[m],nama[k]);
					}
					strcpy (nama[j],temp);
				}
			}
		}
	}
	cout<<"\nOutput : \n";
	for (i=1;i<=6;i++)
	{
		cout<<" "<<nama[i];
	}
	return 0;
}

