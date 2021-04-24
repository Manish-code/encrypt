#include<stdio.h>
int main()
{
	char s[100],ch;
	int i,key,c;

	printf("Enter message:");
	gets(s);
	printf("Enter key:");
	scanf("%d",&key);

//	printf("Choose one:\n1.Encrypt\n2.Decrypt\n");
//	scanf("%d\n",&c);

		for(i=0;s[i]!='\0';i++)
		{		
			ch=s[i];
			if(ch>='a' && ch<='z')
			{
				ch=ch+key;
				if(ch>'z')
				{
					ch=ch-'z'+'a'-1;
				}
				s[i]=ch;
			}
		}
		printf("Encrypted message: %s\n",s);
        
		for(i=0;s[i]!='\0';i++)
		{
			ch=s[i];
			if(ch>='a' && ch<='z')
			{
				ch=ch-key;
				if(ch<'a')
				{
					ch=ch+'z'-'a'+1;
				}
				s[i]=ch;
			}
		}
	        printf("Decrypted message: %s\n",s);	
	
	return 0;
	
}

