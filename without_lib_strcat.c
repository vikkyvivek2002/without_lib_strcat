#include<stdio.h>
int main()
{
	char s1[100],s2[100];
    int i,j,len ;
	printf("enter the string1 : ");
	gets(s1);
	printf("ente the string 2 : ");
	gets(s2);
	for(i =0;s1[i]!= '\0';i++)
	len++;
	for(j =0; s2[j]!= '\0';len++,j++)
	{
	s1[len] = s2[j];	
	}
	s1[len]= '\0';
		printf("concated string is : %s\n",s1);  
}