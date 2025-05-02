#include<stdio.h>
#include<stdbool.h>

bool isComposite(int n){
    if(n<=2){
        return false;
    } else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,b,a;
    scanf("%d",&n);

    for(b=4;;b++){
        if(isComposite(b)){
            a=b+n;
        } if(isComposite(a)){
            printf("%d %d",a,b);
            break;
        }
    }
    return 0;
}