#include <stdio.h>
#include <math.h>
int main(){
	float s;
	s=1;
	int n;
	printf("nhap so: ");
	scanf("%",&n);
	int i=1;
	while(i<=n){
		s= s + pow(i,-1);
		i++;
	}
	printf("tong bang: %f",s);
}
