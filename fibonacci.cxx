#include <stdio.h>
int main()
{
	int n, i;
	int term_1 = 0, term_2 = 1, nextTerm;
	printf("Enter the total terms number to see fibonacci series :");
	
	scanf("%d", &n);
	printf("Fibonacci series :\n");
	
	for (i = 1; i <= n; i++){
		printf("%d\n",term_1);
		nextTerm = term_1 + term_2;
		term_1 = term_2;
		term_2 = nextTerm;
	}
printf("\n");
return 0;
}
