void loadData(char file_name[])
{
	int i, j;
	
	data = (float**)calloc(DATASET_SIZE, sizeof(float*));
	
	clusters = (int*)calloc(BATCH_SIZE, sizeof(int));
	
	for(i = 0; i < DATASET_SIZE; i++)
	{
		data[i] = (float*)calloc(FEATURES, sizeof(float));
	}
	
	FILE *descriptors;
	
	descriptors = fopen(file_name, "r");
	
	for(i = 0; i < DATASET_SIZE; i++)
	{
		for(j = 0; j < FEATURES; j++)
		{
			fscanf(descriptors, "%f", &data[i][j]);
		}
	}
	
	fclose(descriptors);
}
