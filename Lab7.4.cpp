#include<stdio.h>
void printHead(int w);
void printBody(int w, int h);
int main(){
	int width,height;
	scanf("%d %d",&width,&height);
	printHead(width);
	printBody(width,height);
	printHead(width);
} 
void printHead(int w){
	for(int i=0;i<w;i++){
		printf("*");
	} printf("\n");
}
void printBody(int w, int h){
	for(int i=0;i<h-2;i++){
		for(int j=0;j<w;j++){
			if(j==0 || j==w-1){
				printf("*");
			} else {
				printf(" ");
			}
		} 
		printf("\n");
	}
}
