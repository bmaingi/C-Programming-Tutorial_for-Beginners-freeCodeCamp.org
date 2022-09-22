#include <stdio.h>
int main()
{
	char firstname[20], lastname[20];

	printf("Enter youre first name : ");
	scanf("%s", firstname);

	printf("Enter youre last name :");
	scanf("%s", lastname);

	printf("youre Full name is %s %s", firstname, lastname);

	return 0;
}
