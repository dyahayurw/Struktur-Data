#include<iostream>
using namespace std;

int main()
{
	int matA[2][2]= {4, 8, 2, 10};
	int matB[2][2]= {-5, 8, 4, -12};
	int hasil[2][2];
	int i,j,k, jumlah=0;
	
	cout<<" Matriks A"<<endl;
	for (int i=0; i<2; i++) 
	{
		for (int j=0;j<2;j++) 
			{
				cout<<matA[i][j]<<" ";
			}
		cout<<endl;
	}
	
	cout<<"\n Matriks B"<<endl;
	for (int i=0; i<2; i++) 
	{
		for (int j=0;j<2;j++) 
			{
				cout<<matB[i][j]<<" ";
			}
		cout<<endl;
	}
		
	for(i = 0; i < 2; i++)
	{
    	for(j = 0; j < 2; j++)
			{
        		for(k = 0; k < 2; k++)
					{
          				jumlah = jumlah + matA[i][k] * matB[k][j];
        			}
        		hasil[i][j] = jumlah;
        		jumlah = 0;
      		}
    }
    
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < 2; i++)
	{
      for(j = 0; j < 2; j++)
	  {
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
	}
	
system ("pause");
return 0;

}
