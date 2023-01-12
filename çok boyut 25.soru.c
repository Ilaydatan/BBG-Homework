//klavyeden girilen kenar uzunluðuna (1-20) göre ekranda "*" karakterlerinden eþkenar üçgen oluþturan program//
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
