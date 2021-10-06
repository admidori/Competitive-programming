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
    char S[256];
    scanf("%s",S);
    int cnt=0,ma=0;

    for(int i=0;i<strlen(S);i++){
        if((S[i]=='A')||(S[i]=='C')||(S[i]=='G')||(S[i]=='T')){
            cnt++;
        }else{
            if(ma<cnt){
                ma=cnt;
            }
            cnt=0;
        }
    }
    if(ma<cnt){
        ma=cnt;
    }
    printf("%d\n",ma);
    return 0;
}