// C program without sse instructions
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#define N 1000
#define M 1000


void get_walltime(double *wct)
{
    struct timeval tp;
    gettimeofday(&tp, NULL);
    *wct = (double)(tp.tv_sec + tp.tv_usec/1000000.0);
}

int main(){

	//initialization
	
	float *pic, *newpic;
	float k0 = 0.5, k1 = 0.5, k2 = 0.5, k3 = 0.5, k5 = 0.5, k6 = 0.5, k7 = 0.5, k8 = 0.5, k4 = 5.0;
	
	int i = 0;
	int j = 0;
	
	double ts,te;

	//allocate the memory
        pic = (float*)malloc(N* M* sizeof(float));           
        newpic = (float*) malloc(N* M* sizeof(float));


	//init of the arrays
	for(i = 0; i < N * M; i++){
		pic[i] = i * (i + 3) ;
		newpic[i] = 1.0;
	}

	get_walltime(&ts);
	for(i = 1; i < N - 1; i++){
		for (j = 1; j < M - 1; j++){
			newpic[i] = (pic[(i - 1) + (j - 1)] * k0) + (pic[(i - 1) + j] * k1) + (pic[(i - 1) + (j + 1)] * k2) + (pic[i + (j - 1)] * k3) + (pic[i + j] * k4)+ (pic[i+(j+1)] * k5) + (pic[(i+1)+(j-1)] * k6) + (pic[(i+1)+j] * k7) + (pic[(i+1)+(j+1)] * k8);
		}
	}

	get_walltime(&te);

	printf("Megaflops: %f\n" , (2.0 * (double)N*M) / ((te - ts) * 1e6));
	printf("Time took: %f\n" , te - ts);

	//liberate the memory
	free(pic);
	free(newpic);

	return 0;

}
