#include "miniBatch.h"

int main(int argc, char *argv[])
{
	loadData(argv[1]);
	
	srand(time(NULL));
	
	initializeMeans();
	
	int i, j;
	
	for(i = 0; i < ITERATIONS; i++)
	{
		selectBatch();
		
		cacheClusters();
		
		updateMeans();
		
		calculateError();
	}
}
