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
    char s[256];
    int tmp='z'-'a';
    int *cnt;
    cnt=malloc(tmp*sizeof(int));
    for(int i=0;i<tmp;i++){
        cnt[i]=0;
    }
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<tmp;j++){
            if(s[i]=='a'+j){
                cnt[j]++;
            }
        }
    }

    int cntflag=0;
    for(int i=0;i<tmp;i++){
        if(cnt[i]%2==0){
        }else{
            cntflag=1;
        }
    }

    if(cntflag==0){
        puts("Yes");
    }else{
        puts("No");
    }

    return 0;
}