//klavyeden girilen bir kelimenin harfleri aras�na birer tane bo�luk koyarak yeniden yazd�ran program//
#include <stdio.h>
#include <string.h>

int main() {
  char kelime[100];

  printf("Kelimeyi giriniz: ");
  gets(kelime); 
  
  for (int i = 0; i < strlen(kelime); i++) 
    printf("%c ", kelime[i]);
  
  printf("\n"); 

  return 0;
}
