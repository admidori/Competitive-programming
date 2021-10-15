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
    int N,M;
    scanf("%d %d",&N,&M);
    int *A,*B;
    A=mal(int,M);
    B=mal(int,M);
    rep(i,M){
        scanf("%d %d",&A[i],&B[i]);
    }

    int *ans;
    ans=mal(int,N);
    rep(i,N){
        ans[i]=0;
    }
    for(int i=1;i<=N;i++){
        rep(j,M){
            if(A[j]==i||B[j]==i){
                ans[i-1]++;
            }
        }
    }

    rep(i,N){
        printf("%d\n",ans[i]);
    }
}