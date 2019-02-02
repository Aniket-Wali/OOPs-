#include <stdio.h>
#include <string.h>
struct record
{
	char data[20];
};
int main(int argc, char const *argv[])
{
	struct record r[50];
	int i = 0;
	FILE *fp = fopen("filerev.txt","r");
	if(fp == NULL){
		printf("Error in opeing file\n");
	}
	else{
		while(!feof(fp)){
			fscanf(fp," %s",r[i].data);
			i++;
		}
		for(int k = i-2; k>=0; k--)
			printf("%s ",r[k].data);
	}
	printf("\n");
	fclose(fp);
	return 0;
}