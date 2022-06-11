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
    char S[256],ans[256];
    int nullp=0;
    int j=0;
    scanf("%s",S);
    for(int i=0;i<strlen(S);i++){
        if(S[i]=='0'){
            ans[j]='0';
            nullp=j+1;
            j++;
        }
        if(S[i]=='1'){
            ans[j]='1';
            nullp=j+1;
            j++;
        }
        if(S[i]=='B'){
            if(j>0){
                nullp=j-1;
                j=j-1;
            }else{
                nullp=0;
                j=0;
            }
        }
    }
    ans[nullp]='\0';
    printf("%s\n",ans);
}