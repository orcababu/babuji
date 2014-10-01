//program 10.16

//Babu K DBS

#include<stdio.h>
#include<conio.h>

int main(void)

{
	
	void removestring(char source[],int position,int remove_char);
	
	char txt[]={"The wrong son"};
	
	int i,rem,pos;
	
	printf("Enter the position to delete from\n");
	scanf("%i",&pos);
	
	printf("Enter the number of character to remove : \n");
	scanf("%i",&rem);
	
	removestring(txt,pos,rem);
	
	return 0;
	
}

void removestring(char src[],int ps,int rm)

{
	printf("string = %s\n\n",src);
	int i,t,m,ps1;
	t=ps;
	ps1=ps;
	m=ps+rm;
	
	for(i=0;src[i]!='\0';i++)
	{
	//	printf("%c",src[ps1+m]);
		//printf("Hi i am running for\n");
		if(src[m]!='\0')
		
		{
			src[t]=src[m];

			//printf("%c\n",src[t]);

			t++,m++;

		}
	}
		
	for(i=0;i<t;i++)
	{
		
		printf("%c",src[i]);
		
	}
	
}
