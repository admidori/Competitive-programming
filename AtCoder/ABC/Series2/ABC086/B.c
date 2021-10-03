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
    char a[256],b[256];
    scanf("%s %s",a,b);
    char ans[256];
    for(int i=0;i<strlen(a)+strlen(b);i++){
        if(i<strlen(a)){
            ans[i]=a[i];
        }else{
            ans[i]=b[i-strlen(a)];
        }
    }
    ans[strlen(a)+strlen(b)]='\0';
    int sq=0;
    for(int i=0;i<strlen(ans);i++){
        int c=ans[i]-'0';
        sq+=c*pow(10,strlen(ans)-i-1);
    }
    for(int i=1;i<=10000;i++){
        if(sq==i*i){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}