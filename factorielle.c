#include<stdio.h>
int main(){
 int a,b,i;
 printf("vous voulez calculer le factoriel de quoi ?\n");
 scanf("%d",&a);
 if(a>=0){
	b=1;
	for(i=1;i<=a;i++){
		b=i*b;
	}
 printf("le factoriel est %d",b);
  } else {
  	printf("le nombre entre n'est pas valide");
  }
	return 0;
}
