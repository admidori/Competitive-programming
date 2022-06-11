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
    int H,W;
    scanf("%d %d",&H,&W);
    int **A;
    A=mal(int*,H);
    rep(i,H){
        A[i]=mal(int,W);
    }
    rep(i,H){
        rep(j,W){
            scanf("%d",&A[i][j]);
        }
    }
    int min=A[0][0];
    rep(i,H){
        rep(j,W){
            if(min>A[i][j]){
                min=A[i][j];
            }
        }
    }
    int ans=0;
    rep(i,H){
        rep(j,W){
            ans+=A[i][j]-min;
        }
    }
    printf("%d\n",ans);
    return 0;
}