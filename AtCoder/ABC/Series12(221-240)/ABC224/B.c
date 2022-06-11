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

char *string_scan(char *S){
    S=mal(char,10);
    int i=0;
    while(1){
        if(i==9){
            S=realloc(S,10);
        }
        scanf("%c",&S[i]);
        if(S[i]=='\0'){
            break;
        }
        i++;
    }
    return S;
}

signed main(void){
    int H,W;
    scanf("%d %d",&H,&W);
    int **A;
    A=mal(int *,H);
    rep(i,H){
        A[i]=mal(int,W);
    }
    rep(i,H){
        rep(j,W){
            scanf("%d",&A[i][j]);
        }
    }
    int cnt=0;
    int cnt2=0;
    rep(i,H){
        rep(j,H){
            rep(l,W){
                rep(k,W){
                    if(i<j&&l<k){
                        cnt++;
                        if(A[i][l]+A[j][k]<=A[j][l]+A[i][k]){
                            cnt2++;
                        }
                    }
                }
            }
        }
    }
    if(cnt==cnt2){
        puts("Yes");
    }else{
        puts("No");
    }
    return 0;
}