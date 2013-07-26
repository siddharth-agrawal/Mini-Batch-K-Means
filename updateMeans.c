void updateMeans()
{
	int i, j;
	
	for(i = 0; i < MEANS; i++)
	{
		for(j = 0; j < FEATURES; j++)
		{
			centroids[i][j] = means[i][j];
		}
	}
	
	int index;
	
	float eta;
	
	for(i = 0; i < BATCH_SIZE; i++)
	{
		index = clusters[i];
		
		cluster_counts[index] += 1;
		
		eta = 1.0 / cluster_counts[index];
		
		for(j = 0; j < FEATURES; j++)
		{
			means[index][j] = (1.0 - eta) * means[index][j] + eta * batch[i][j];
		}
	}
}
