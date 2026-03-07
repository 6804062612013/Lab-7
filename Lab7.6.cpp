#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
void fillRandom(int arr[][20], int M, int N);
int check(int arr[][20] ,int M ,int N ,int a ) ;
int main() {
	int M,N ;
	scanf("%d %d",&M,&N);
	int arr[20][20] ;
	if (M <= 2 || M>=20 || N<=2 || N >= 20) {
    return 0;
	}
	
	srand(time(NULL));
	fillRandom(arr, M, N);
	
	for (int i = 0; i < M; i++) {
    	for (int j = 0; j < N; j++) {
        	printf("%d ", arr[i][j]);
    	}
    	printf("\n");
	}
}
int check(int arr[][20], int curM, int curN, int a) {
    for (int i = 0; i <= curM; i++) {
        for (int j = 0; j < 20; j++) {
            if (i == curM && j >= curN) break;
            if (arr[i][j] == a) return 1;
        }
    }
    return 0;
}
void fillRandom(int arr[][20],int M,int N) {
	int a;
	for(int i = 0; i<M ; i++) {
		for(int j=0 ; j<N ; j++) {
			do {
			a = rand() %101 + 100 ;
			} while (check(arr, i, j, a));
			
			arr[i][j] = a;
		}
	}
}
