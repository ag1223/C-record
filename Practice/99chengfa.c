#include <stdio.h>
//output 9*9 multiplication table in five forms.

void juxing(int i, int j);
void zuoshang(int i, int j);
void youshang(int i, int j);
void zuoxia(int i, int j);
void youxia(int i, int j, int k);

int main(){
	int i, j, k;
	
	juxing(i, j);
	zuoshang(i, j);
	youshang(i, j);
	zuoxia(i, j);
	youxia(i, j, k);
	
	return 0;
}

void juxing(int i, int j){
	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
			printf("%d*%d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");
}

void zuoshang(int i, int j){
	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
			if(j<i){
			printf("");
		  }else{
			printf("%d*%d=%2d  ", i, j, i*j);
		    }
		}
		printf("\n");
	}
	printf("\n");
}

void youshang(int i, int j){
	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
			if(j<i){
			printf("        ");
		  }else{
			printf("%d*%d=%2d  ", i, j, i*j);
		    }
		}
		printf("\n");
	}
	printf("\n");
}

void zuoxia(int i, int j){
	for(i=1; i<=9; i++){
		for(j=1; j<=i; j++){
			printf("%d*%d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");
}

void youxia(int i, int j, int k){
	for(i=1; i<=9; i++){
		for(k=1; k<=9-i; k++){
			printf("        ");
		}
		for(j=1; j<=i; j++){
			printf("%d*%d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");
}
