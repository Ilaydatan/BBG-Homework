//klavyeden girilen kenar uzunlu�una (1-20) g�re ekranda "*" karakterlerinden e�kenar ��gen olu�turan program//
#include <stdio.h>
#include <stdlib.h>

int main()
 {
	int i,j,k,kenar;
	printf("Lutfen eskenar ucgenin kenar uzunlugunu 1-20 arasinda giriniz: ");
	scanf("%d",&kenar);
	
	for(i=1;i<=kenar;i++)
	{
		for(j=kenar;j-i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		
		printf("\n");
	}
	return 0;
}
