
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"func.h"
void search(world *arr, int n)
{
	int  rare;
	printf("1-ПОИСК ПО СТРАНЕ,2-ПОИСК ПО НАСЕЛЕНИЮ,3-ПОИСК ПО ПЛОЩАДИ\n");
	scanf("%i",&rare);
	switch(rare)
	{
		case 1:
		{
			int key =1;
			char countryc[40];
			printf("ВВЕДИ НАЗВАНИЕ СТРАНЫ\n");
			scanf("%s",countryc);
			for (int i=0;i<n;i++)
			{
				if(!strcmp(arr[i].country,countryc))
				{
					printf("%s %i %f\n",arr[i].country,arr[i].population,arr[i].square);
					key=0;
				}
			}
			if(key){
				printf("НИЧЕГО НЕ НАШЛОСЬ\n");
				};
			break;
		}
		case 2:
                {
                        int key =1;
                        int populationc=0;
                        printf("ВВЕДИ КОЛИЧЕСТВО НАСЕЛЕНИЯ СТРАНЫ\n");
                        scanf("%i",&populationc);
                        for (int i=0;i<n;i++)
                        {
                                if(arr[i].population==populationc)
                                {
                                        printf("%s %i %f\n",arr[i].country,arr[i].population,
arr[i].square);
                                        key=0;
                                }
                        }
                        if(key){ 
				printf("НИЧЕГО НЕ НАШЛОСЬ\n\n");
				while((getchar())!='\n');
                        	return ;
			return;}
			break;
                }
		case 3:
                {
                        int key =1;
                        float squarec;
                        printf("ВВЕДИ ПЛОЩАДЬ СТРАНЫ\n");
                        scanf("%f",&squarec);
                        for (int i=0;i<n;i++)
                        {
                                if(arr[i].square==squarec)
                                {
                                        printf("%s %i %f\n",arr[i].country,arr[i].population,arr[i].square);
                                        key=0;
                                }
                        }
                        if(key){ 
				printf("НИЧЕГО НЕ НАШЛОСЬ\n\n");
				while((getchar())!='\n');
				return ;
			return;}
                        break;
                }
		default:
			break;
	}

}
