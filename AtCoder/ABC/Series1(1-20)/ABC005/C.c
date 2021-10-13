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
    int T,N,M;
    int *A,*B;
    scanf("%d",&T);
    scanf("%d",&N);
    A=mal(int,N);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&M);
    B=mal(int,M);
    for(int i=0;i<M;i++){
        scanf("%d",&B[i]);
    }

    if(N<M){
        puts("no");
        return 0;
    }

    int j=0;
    for(int i=0;i<M;i++){
        if(B[i]-A[j]>T||A[j]>B[i]){
            if(j==N-1){
                puts("no");
                return 0;
            }
            i--;
            j++;
        }else{
            j++;
        }

    }
    puts("yes");
    return 0;
}