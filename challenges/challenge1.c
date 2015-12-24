/*
Challenge Number 1
https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/
*/

#include "stdio.h"

int main()
{
	char name[15];
	int age;
	char usrnm[15];

	printf("What is your name? ");
	scanf("%s", name);
	printf("How old are you? ");
	scanf("%d", &age);
	printf("What is your reddit username? ");
	scanf("%s", usrnm);
	printf("You name is %s, you are %d years old, and your reddit username is %s.\n", name, age, usrnm);
	
	return 0;
}
