#include <stdio.h>

long long int factorial(int n) {
	long long int u = 1;
	for(int i = 1; i <= n ; i++) {
		u = u * i;
	}
	return u;
}
	
int main() {
	long long int s = 0,p;
	for(int n = 1; n <= 20; n++) {
		s = s + factorial(n);
	}
	
	printf("    %lld",s);
}