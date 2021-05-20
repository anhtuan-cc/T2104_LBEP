#include <stdio.h>
#include <math.h>
int main(){
	double s;
	s=1;
	int n;
	printf("nhap so");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		s=s*i;
		i++;
	}
	printf("%d! bang %f",n,s);
}
