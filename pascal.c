#include<stdio.h>
int main(){
int p;
scanf("%d",&p);
int arr[p][(2*p)-1];
for(int x=0;x<(2*p*p)-p;x++){
    *((int*)arr+x)=0;
}
arr[0][p-1]=1;
for(int i=1;i<p;i++){
    for(int j=1;j<((2*p)-1);j++){
            if(i==p-1){
                arr[i][0]=1;
                arr[i][(2*p)-2]=1;
            }
        arr[i][j]=arr[i-1][j-1]+arr[i-1][j+1];
    }
}
for(int k=0;k<p;k++){
    for(int l=((2*p)-2);l>=0;l--){
        if(arr[k][l])printf("%d",arr[k][l]);
        printf("\t");
    }printf("\n");
}
return 0;
}//nuhin
