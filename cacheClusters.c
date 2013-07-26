void cacheClusters()
{
	int i, j, k;
	
	float dist, diff, dist_min;
	
	for(i = 0; i < BATCH_SIZE; i++)
	{		
		dist_min = 10000000;
		
		for(j = 0; j < MEANS; j++)
		{
			dist = 0;
			
			for(k = 0; k < FEATURES; k++)
			{
				diff = batch[i][k] - means[j][k];
				
				dist += diff * diff;
			}
			
			if(dist < dist_min)
			{
				dist_min = dist;
				
				clusters[i] = j;
			}
		}
	}
}
