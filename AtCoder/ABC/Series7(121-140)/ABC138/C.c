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
#define rep2(i,N,M) for(int i=N;i<M;i++)

typedef long long ll;

signed main(void){
    int N;
    scanf("%d",&N);
    int *A;
    A=mal(int,N);
    rep(i,N){
        scanf("%d",&A[i]);
    }
    double ans;
    int tmp;
    rep(i,N){
        rep2(j,i,N){
            if(A[i]>A[j]){
                tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
            }
        }
    }
    ans=(double)(A[0]+A[1])/2.0;
    rep2(i,2,N){
        ans=(double)(ans+A[i])/2.0;
    }
    printf("%f\n",ans);
    return 0;
}