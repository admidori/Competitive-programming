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
    char S[4][256];
    for(int i=0;i<4;i++){
        scanf("%s",S[i]);
    }
    int cnt[4];
    for(int i=0;i<4;i++){
        cnt[i]=0;
    }
    for(int i=0;i<4;i++){
        if(strcmp(S[i],"H")==0){
            cnt[0]++;
        }
        if(strcmp(S[i],"2B")==0){
            cnt[1]++;
        }
        if(strcmp(S[i],"3B")==0){
            cnt[2]++;
        }
        if(strcmp(S[i],"HR")==0){
            cnt[3]++;
        }
    }
    int j=0;
    for(int i=0;i<4;i++){
        if(cnt[i]==1){
            j++;
        }
    }
    if(j==4){
        puts("Yes");
    }else{
        puts("No");
    }
}