#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *fp = fopen("xyz.txt", "r");
	int x, y, z;
	if(fp == NULL)
		printf("Error in opening file\n");
	else{
		fscanf(fp," %d",&x);
		fscanf(fp," %d",&y);
		z = x+y;
		printf("%d\n",z );
	}
	fclose(fp);
	return 0;
}