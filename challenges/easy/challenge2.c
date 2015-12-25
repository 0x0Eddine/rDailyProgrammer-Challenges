/*
Challenge Number 2
https://www.reddit.com/r/dailyprogrammer/comments/pjbj8/easy_challenge_2/
*/

#include "stdio.h"
int main()
{
	int option;
	printf("Type a numer to calculate a formulae\n");
	printf("#1: First Newton Law\n");
	scanf("%d", &option);
	
	if (option == 1) {
	int f,m,a;
	printf("f = m * a\n");
	printf("m = ");
	scanf("%d", &m);
	printf("a = ");
	scanf("%d", &a);
	f = m * a;
	printf("F = %d \n", f);
	}

	return 0;
}
