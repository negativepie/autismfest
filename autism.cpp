//harro i will commit soduku

#include <iostream>
#include <stdlib.h>

void bin_add(int bin1[],int bin2[]){
int bl1=sizeof(bin1)/sizeof(bin1[0]);
int bl2=sizeof(bin2)/sizeof(bin2[0]);
int length;
int ans[length];


if (bl1>bl2){
    length=bl1;
} 
    else{
    length=bl2;
    }

   int carry=0;
for(int i=0;i<length+2;i++){
    int temp=0;
 
    temp=bin1[i]+bin2[i];
    if(temp==2){
        carry=1;
        ans[i]=0;
    }
    else if(temp==3){
        carry=1;
        ans[i]=1;
    }
    else {
        ans[i]=temp;
    }

    bin1[i+1]=bin1[i+1]+carry;
}

for(int j=length+2;j>0;j++){
	std::cout << ans[j] << " ";
	} std::cout << std::endl;
}

int main(){
	int array1[2]={1,1};
	int array2[2]={1,1};
	bin_add(array1,array2);
	return 0;
}

