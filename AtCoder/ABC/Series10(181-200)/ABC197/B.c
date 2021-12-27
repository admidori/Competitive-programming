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
        if(S[i]=='\0'||S[i]=='\n'){
            break;
        }
        i++;
    }
    return S;
}

int main(void){
    int H,W,X,Y;
    scanf("%d %d %d %d",&H,&W,&X,&Y);
    char **S;
    S=mal(char *,H);
    rep(i,H)    S[i]=mal(char,W);
    rep(i,H)    scanf("%s",S[i]);

    int cnt=0;

    for(int i=X-1;i<H;i++){
        if(S[i][Y-1]=='.')  cnt++;
        else    break;
    }
    cnt--;

    for(int i=X-1;i>=0;i--){
        if(S[i][Y-1]=='.')  cnt++;
        else    break;
    }
    cnt--;

    for(int i=Y-1;i<W;i++){
        if(S[X-1][i]=='.')  cnt++;
        else    break;
    }
    cnt--;

    for(int i=Y-1;i>=0;i--){
        if(S[X-1][i]=='.')  cnt++;
        else    break;
    }

    printf("%d\n",cnt);
    return 0;
}