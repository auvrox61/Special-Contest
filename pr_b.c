#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char str[50];
    int count=0;
    scanf("%d",&n);
    scanf("%s",str);
    
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}