#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <complex.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

#define DBG_INT(arg) fprintf(stderr,"*DEBUG* " #arg "...%d\n",arg)
#define DBG_DOUBLE(arg) fprintf(stderr,"*DEBUG* " #arg "...%f\n",arg)
#define DBG_CHAR(arg) fprintf(stderr,"*DEBUG* " #arg "...%c\n",arg)
#define DBG_STRING(arg) fprintf(stderr,"*DEBUG* " #arg "...%s\n",arg)
#define mal(type,size)  malloc(size*sizeof(type))
#define rep(i,N)    for(int i=0;i<N;i++)

typedef long long ll;

signed main(void){
	int A,B,C,K;
	int cnt=0;
	scanf("%d %d %d %d",&A,&B,&C,&K);
	for(int i=0;i<K;i++){
		if(A!=0){
			A--;
			cnt++;
		}
		else if(B!=0){
			B--;
		}
		else if(C!=0){
			C--;
			cnt--;
		}
	}
	printf("%d\n",cnt);
	return 0;
}