#include <stdio.h>
struct student
{
	char name[20];
	char branch[5];
	char batch[5];
	int cpi;
};
int main(int argc, char const *argv[])
{
	FILE *fp = fopen("temp1.txt","w+");
	struct student s[5];
	if(fp == NULL){
		printf("Error in opening file\n");
	}
	else{
		for (int i = 0; i < 1; i++)
		{
			//fgets(s[i].name,20,stdin);
			fscanf(stdin,"%s",s[i].name);
			fprintf(fp, "%s\t",s[i].name );
			scanf("%s",s[i].branch);
			fprintf(fp, "%s\t",s[i].branch );
			scanf("%s",s[i].batch);
			fprintf(fp, "%s\t",s[i].batch );
			scanf("%d",&s[i].cpi);
			fprintf(fp, "%d\t",s[i].cpi );
		}
	}
	fclose(fp);
	return 0;
}