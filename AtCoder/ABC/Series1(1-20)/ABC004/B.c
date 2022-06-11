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
    char S[256][256];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%c ",&S[i][j]);
        }
    }
    char newS[256][256];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            newS[i][j]=S[3-i][3-j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%c ",newS[i][j]);
        }
        puts("");
    }
    return 0;
}