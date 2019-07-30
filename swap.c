#include <stdio.h>
#include <string.h>
int main()
{
     char swa[20],tmp;
     int i,j;
     scanf("%s",swa);
     for(i=0;i<strlen(swa);i=i+2)
     {
     tmp = swa[i];
     swa[i] = swa[i+1];
     swa[i+1] = tmp;
     }
     printf( "%s",swa);
     getch();
     return 0;
}
