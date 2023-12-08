
#include<stdio.h>
#include<stdlib.h>
#include"func.h"
int main()
{
	world*arr=NULL;
	int n = 0;
	int stop = 0;
	while (stop!=1)
	{
		int key;
		printf("1-create, 2-read, 3-search\n");
		scanf("%d",&key);
		switch(key)
		{
			case 1:
			{
				int key2=0;
				printf("1-create,2-read\n");
				scanf("%d",&key2);
				if(key2==1)
				{
					create(&arr,&n);
					if(!arr){printf("НЕБОЛЬШАЯ ОШИБОЧКА В create\n");
					while((getchar())!='\n');
					return 0;
						}
					else printf("created %d elem\n",n);
					write(arr,n);
				}
				else
				{
					read(&arr,&n);
					if(!arr) printf("ОШИБОЧКА В read\n");
					else(printf("created %d elem\n",n));
				}
				break;
			}
			case 2:
				for(int i=0;i<n;i++)printf("%s %i %f\n",arr[i].country,arr[i].population,arr[i].square);
			 	break;
			case 3:
				search(arr,n);
				break;
			default:
				stop=1;
				break;
			}
		}
	if (arr) free(arr);
		return 0;
}
