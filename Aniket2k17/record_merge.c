#include <stdio.h>
struct record
{
	char name[20];
	char branch[5];
	char batch[5];
	int cpi;
};
struct record2
{
	char name[20];
	char date[10];
};
int main(int argc, char const *argv[])
{
	struct record st;
	char data[80];
	struct record2 rt; 
	FILE *fp1 = fopen("temp1.txt","r");
	FILE *fp2 = fopen("record.txt","r");
	FILE *fp3 = fopen("record_merge.txt","w+");
	if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
		printf("Error in opening file\n");
	else{
		while(!feof(fp1) || !feof(fp2))
		{
			//getting data from fp1
			fscanf(fp1,"%s",st.name);
			fprintf(fp3, "%s\t",st.name);
			fscanf(fp1,"%s",st.branch);
			fprintf(fp3, "%s\t",st.branch);
			fscanf(fp1,"%s",st.batch);
			fprintf(fp3, "%s\t",st.batch);
			fscanf(fp1,"%d",&st.cpi);
			fprintf(fp3, "%d\n",st.cpi);
			//getting data from fp2
			fscanf(fp2,"%s",rt.name);
			fprintf(fp3, "%s\t",rt.name);
			fscanf(fp2,"%s",rt.date);
			fprintf(fp3, "%s\n",rt.date);
		}
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}