void calculateError()
{
	int i, j;
	
	float dist, diff;
	
	for(i = 0; i < MEANS; i++)
	{
		dist = 0;
		
		for(j = 0; j < FEATURES; j++)
		{
			diff = centroids[i][j] - means[i][j];
			
			dist = diff * diff;
		}
		
		printf("%f ", dist);
	}
	
	printf("\n");
	
	for(i = 0; i < BATCH_SIZE; i++)
	{
		free(batch[i]);
	}
	
	free(batch);
}
