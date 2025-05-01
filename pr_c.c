#include<stdio.h>

int main(){
    int t,h,m;
    int totalMin=1440;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %d",&h,&m);
        int inputMin=(h*60)+m;
        int result=totalMin-inputMin;
        printf("%d\n",result);
    }
    return 0;
}