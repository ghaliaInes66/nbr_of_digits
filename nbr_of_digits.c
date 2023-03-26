#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int digit_nbr(int);
int main(int argc, char *argv[]) {
	int nbr=atoi(argv[1]);
	printf("the nember of digits is :%i",digit_nbr(nbr));
	return 0;
}

int digit_nbr (int nbr){
	if
	(nbr<10) return 1;
	else
	 return 1+digit_nbr(nbr/10);
}
