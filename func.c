
#include<stdio.h>
#include<stdlib.h>
#include"func.h"
#include<string.h>

void create(world**arr,int*n)
{
	printf("количество записей");
	scanf("%d",n);
	if (*n<=0){
	return;
	}
	*arr=(world*)calloc(*n,sizeof(world));
	for (int i=0;i<*n;i++){
		printf("страна");
		scanf("%s",(*arr)[i].country);
		printf("население=");
		scanf("%i",&(*arr)[i].population);
		printf("площадь=");
		scanf("%f",&(*arr)[i].square);
	}
}
void read(world** arr, int*n){
	FILE*fp=fopen("back.txt","r");
	if(!fp)return;
	if (fscanf(fp,"%d",n)!=1){
		fclose(fp);
		return;
	}
	if (*n<=0){
		fclose(fp);
		return;
	}
	*arr=(world*)calloc(*n,sizeof(world));
	for(int i=0;i<*n;i++){
		if(fscanf(fp,"%s %i %f",(*arr)[i].country,&(*arr)[i].population,&(*arr)[i].square)!=3) break;
	};
	fclose(fp);
}
void write(world *arr,int n)
{
if(n<=0) return;
FILE*fp=fopen("back.txt","w");
if(!fp) return;
fprintf(fp,"%d\n",n);
for(int i=0;i<n;i++){
fprintf(fp,"%s %i %f\n",arr[i].country,arr[i].population,arr[i].square);
}
fclose(fp);
}
