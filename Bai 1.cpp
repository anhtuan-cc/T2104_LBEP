#include <stdio.h>
 int main(){
 	int s,n;
 	printf("Cong tu 1 den ");
 	scanf("%d",&n);
 	int i=1;
 	while(i<=n){
 		s=s+i;
 		i=i+1;
	 }
	 printf("tong se bang: %d",s);
 }
