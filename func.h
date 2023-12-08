typedef struct world{
	char  country[40];
	float  square;
	int population;
}world;
void create(world**arr,int*n);
void write(world *arr,int n);
void read(world**arr,int*n);
void search(world *arr,int n);
	

