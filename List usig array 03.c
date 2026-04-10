//2.Insert element at the beginning of list.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
        
    }
    arr[0]=x;
    
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
        
    }
    return 0;
}
