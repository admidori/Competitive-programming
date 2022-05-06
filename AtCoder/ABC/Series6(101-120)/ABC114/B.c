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
    S=(char *)mal(char,10);
    int i=0;
    while(1){
        if(i==9){
            S=(char *)realloc(S,10);
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
    char S[256];
    scanf("%s",S);
    int tmp=0,k,t=0,res=0;
    int ans[256];
    rep(i,strlen(S)-2){
        k=2;
        for(int j=i;j<i+3;j++){
            tmp=(int)(S[j]-'0');
            rep(l,k){
                tmp*=10;
            }
            res+=tmp;
            k--;
        }
        ans[t]=res;
        t++;
        res=0;
    }
    rep(i,t){
        ans[i]=abs(753-ans[i]);
    }
    int tmp2;
    rep(i,t){
        for(int j=i+1;j<t;j++){
            if(ans[i]>ans[j]){
                tmp2=ans[i];
                ans[i]=ans[j];
                ans[j]=tmp2;
            }
        }
    }

    printf("%d\n",ans[0]);
}
