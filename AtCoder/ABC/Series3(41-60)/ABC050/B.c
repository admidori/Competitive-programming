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

typedef long long ll;

signed main(void){
    int N,M;
    scanf("%d",&N);
    int *T,*P,*X;
    T=malloc(N*sizeof(int));
    for(int i=0;i<N;i++){
        scanf("%d",&T[i]);
    }
    scanf("%d",&M);
    P=malloc(M*sizeof(int));
    X=malloc(M*sizeof(int));
    for(int i=0;i<M;i++){
        scanf("%d %d",&P[i],&X[i]);
    }
    
    int **cnt;
    cnt=malloc(M*sizeof(int *));
    for(int i=0;i<M;i++){
        cnt[i]=malloc(N*sizeof(int));
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(P[i]==j+1){
                cnt[i][j]=X[i];
            }else{
                cnt[i][j]=T[j];
            }
        }
    }

    for(int i=0;i<M;i++){
    int ans=0;
    for(int j=0;j<N;j++){
            ans+=cnt[i][j];
    }
    printf("%d\n",ans);
    }
    return 0;
}