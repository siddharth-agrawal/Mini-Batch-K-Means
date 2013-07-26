void initializeMeans()
{
	int i, j, index;
	
	means = (float**)calloc(MEANS, sizeof(float*));
	
	centroids = (float**)calloc(MEANS, sizeof(float*));
	
	cluster_counts = (int*)calloc(MEANS, sizeof(int));
	
	for(i = 0; i < MEANS; i++)
	{
		means[i] = (float*)calloc(FEATURES, sizeof(float));
		
		centroids[i] = (float*)calloc(FEATURES, sizeof(float));
	}
	
	for(i = 0; i < MEANS; i++)
	{
		index = rand() % DATASET_SIZE;
		
		for(j = 0; j < FEATURES; j++)
		{
			means[i][j] = data[index][j];
		}
	}
}
