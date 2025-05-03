#include<stdio.h>
#include<string.h>

int main(){
    int t,n,k;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        
        for(int i=0;i<n;i++){
            printf("%c",'a'+(i%k));
        }
        printf("\n");
    }
    return 0;
}