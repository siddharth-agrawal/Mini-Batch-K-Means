void selectBatch()
{
	int i, j;
	
	batch = (float**)calloc(BATCH_SIZE, sizeof(float*));
	
	for(i = 0; i < BATCH_SIZE; i++)
	{
		batch[i] = (float*)calloc(FEATURES, sizeof(float));
	}
	
	int index;
	
	for(i = 0; i < BATCH_SIZE; i++)
	{
		index = rand() % DATASET_SIZE;
		
		for(j = 0; j < FEATURES; j++)
		{
			batch[i][j] = data[index][j];
		}
	}
}
