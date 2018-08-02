#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void flush(char *str){
int i;
for(i=0;str[i];i++)
str[i]=0;
}

int hash(char ch){

static char hash_tb[26]="";
int i,n;
n=ch-'a';
	if (hash_tb[n]==1){// second occurance of alphabet
		
               flush(hash_tb);//flush all previous values as start point gets shift          
	       hash_tb[n]=1;//current value should be made 1
	       return 1;
        }	
        else{//printf("In hash function step4 else ch: %c\n",ch);
	hash_tb[n]=1;
        }


//printf("%d %c",n,ch);
}

main(){
int i,j,n,start=0,end=0;
char a[]="lavanya";
n=strlen(a);
for(i=0;i<n;i++){
end = i;
if((end-start)<=(n-end)){
 if(hash(a[i]) == 1)
 {
	for(j=start;a[j]!=a[i];j++){
             start=j+2;
             }
  }
}else break;

  }
for(i=start;i<=end;i++)
	printf("%c",a[i]);

}
