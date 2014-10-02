#include<stdio.h>

int main(void)

{

	struct entry

	{

		int value;

		struct entry *next;

	};

	struct entry n1,n2,n3;
	
	n1.value=100;
	n2.value=200;
	n3.value=300;
	
	int i;
	
	n1.next=&n2;
	n2.next=&n3;
	
	i=n1.next->value;
		
	printf("n1.next->value = %i\n",n1.next->value);
	
	i=n2.next->value;
	
	printf("n2.next->value = %i",n2.next->value);
	
}
