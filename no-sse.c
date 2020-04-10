// C program without sse instructions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#define N 1000
#define M 1000
#define P 9


void get_walltime(double *wct)
{
    struct timeval tp;
    gettimeofday(&tp, NULL);
    *wct = (double)(tp.tv_sec + tp.tv_usec/1000000.0);
}

int main(){

	float* pic = malloc(N* M* size(float));
	float* newpic= malloc(N* M* size(float));
	
	srand(time(NULL));
	int i = 0;
	int j = 0;
	
	double ts,te;

	if (pic = NULL || newpic == NULL){//memory allocation check
		exit(1);
	}
	
	//init of the arrays
	for(i = 0; i < N * M; i++){
		pic[i] = i *(int r = rand()) ;
		newpic[i] = 1.0;
	}

	gerWallTime($ts);
	for(i - 1; i < N - 1; i++){
		for (j = 1; j < < - 1; j++){
			
		{
	}

    
}
