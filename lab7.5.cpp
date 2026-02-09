#include<stdio.h>
long convert(long h, long m, long s);
int main(){
	long h,m,s ;
	scanf("%d %d %d",&h,&m,&s);
	printf("%d",convert(h,m,s));
	
}
long convert(long h, long m, long s){
	s = 3600*h+60*m+s ;
	return s;
}
