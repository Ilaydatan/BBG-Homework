//Klavyeden girilen 8 taban�ndaki pozitif tamsay�y� 10 taban�na d�n��t�ren program//

#include <stdio.h>
#include <math.h>

int main()
{
	
	int sayi= 0, i = 0,sekizlik;

	
	printf("sekizlik tabanda bir sayi giriniz:");
	scanf("%d",&sekizlik);
	
	
	while(sekizlik != 0) {
        sayi += (sekizlik%10) * pow(8,i);
        ++i;
        sekizlik/=10;
    }

    i = 1;
    
    printf("\nsayinin onluk tabandaki karsiligi:%d",sayi);
    
return 0;
}
