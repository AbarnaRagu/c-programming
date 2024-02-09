#include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 
int main()
{
    char c[10];
    int i,j=0,n,t=0;
    printf("Enter a string : ");
    gets(c);
    printf("non reapeating characters in string:");
 
    for(i=0;i<strlen(c);i++ )
    {
    	t=0;
     	for(j=0;j<strlen(c);j++)
        {
        	if(c[i]==c[j])
        	      t++;
        	if(t>1)  
			break;    
        }
        if(t==1)
        {
          printf("%c  ",c[i]);
		}
        
    }
}
     
    
