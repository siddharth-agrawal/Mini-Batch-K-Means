#include <stdio.h>
#include <stdlib.h>

#define DATASET_SIZE 569905
#define FEATURES 128
#define MEANS 50
#define ITERATIONS 10
#define BATCH_SIZE 10000

float **data;
float **means;
float **centroids;
int *clusters;
int *cluster_counts;
float **batch;

#include "loadData.c"
#include "initializeMeans.c"
#include "selectBatch.c"
#include "cacheClusters.c"
#include "updateMeans.c"
#include "calculateError.c"
