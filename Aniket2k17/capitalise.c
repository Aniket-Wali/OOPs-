#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	FILE *fp = fopen("./files/record_capitalise.txt","r+");
	char data[80];
	int n = 0, m = 0, p = 0, q = 0;
	if(fp == NULL)
		printf("Error in opening file\n");
	else{
		fscanf(fp," %[^\n]", data);
		while(!feof(fp)){
			for (int i = 0; i < strlen(data); i++)
			{
				if(data[i] == ' ')
					n++;
				if(data[i] == ';')
					m++;
				if(data[i] == '\n')
					p++;
			}
		q++;
		fscanf(fp," %[^\n]", data);
		}
		printf("Number of spaces : %d\n",n );
		printf("Number of lines ending with semicolon : %d\n",m );
		printf("Number of lines : %d\n",q );
		printf("Number of blank lines : %d\n",p );
	}
	fclose(fp);
	return 0;
}