#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char youssef[80];  int i,cp,nbv;
    printf("entrer une phrase : \n ");
    gets(youssef);
    cp=1;     nbv=0;
    for (i=0;i<=strlen(youssef)-1;i++)
    {   if (youssef[i]==' ')
        {
                      cp=cp+1;
                      }
        if (youssef[i]=='a' || youssef[i]=='e' || youssef[i]=='i' || youssef[i]=='y' || youssef[i]=='o' || youssef[i]=='u')
        {
                        nbv=nbv+1;
                        }
        
        }
                  printf("le nombre des mots dans cetta phrase est %d \n ",cp);
                  printf("------------------------------------------------------\n");
                  printf("le nombre des voyelles dans cette phrase est : %d \n ",nbv);
                  printf("------------------------------------------------------\n");
  system("PAUSE");	
  return 0;
}
