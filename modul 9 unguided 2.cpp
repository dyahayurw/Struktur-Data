#include <iostream>
#define N 255
using namespace std;
 
void replace(char*, char, char);
int main()
{
	char data[N], find, ganti;
	
	printf("\nMasukkan string: ");
	scanf("%[^\n]", data);
	printf("\nKarakter yang dicari: ");
	getchar();scanf("%c", &find);
	printf("Karakter pengganti: ");
	getchar();scanf("%c", &ganti);
	replace(data,find, ganti);
	printf("\nHasil ganti: %s\n\n", data);
	
	return 0;
}
 
void replace(char *data, char find, char replace)
{
	int i=0;
	 
	while(*data !='\0')
	{
		*data=((*data == find)?replace:*data);
		data++;
	    i++;
	}
}
