
#include <stdio.h>
#include <string.h>

void main()
{
 char pt[26] = {'a', 'b', 'b', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
 char ct[26] = {'B', 'E', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'M', 'N', 'O', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'Y', 'D', 'C', 'Z', 'A'};
 char p[20] = {'\0'}, c[20] = {'\0'}, r[20] = {'\0'};
 int i, j;

 printf("\nEnter the plain text: ");
 scanf("%s", p);
 //(encryption)
 for (i = 0; i < strlen(p); i++)
 {
		for (j = 0; j < 26; j++)
		{
			if (pt[j] == p[i])
			{
				c[i] = ct[j];
			}
		}
 }
 printf("\nCipher text: %s\n", c);
 //(decryption)
 for (i = 0; i < strlen(c); i++)
 {
		for (j = 0; j < 26; j++)
		{
			if (ct[j] == c[i])
			{
				r[i] = pt[j];
			}
		}
 }
 printf("Plain text: %s\n", r);
}
