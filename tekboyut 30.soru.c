#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char cumle[100];
	char isaret[]={',',';',':','?','!','.'};
	int i=0,j=0;
	
	printf("bir cumle giriniz:\n");
	gets(cumle);
	
	while(cumle[i]!='\0')
	{
		if(cumle[i]==','||cumle[i]==';'||cumle[i]=='?'||cumle[i]==':'||cumle[i]=='!'||cumle[i]=='.')
			j++;
		
	
		i++;
		
	}
	printf("\ncumledeki noktalama isareti sayisi: %d",j);
	
	return 0;
}
