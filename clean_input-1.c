//Specify file name in main
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>
#include <time.h>

//#define RAND_MAX 32767

int main()
{
	FILE* fp_input;
	FILE* fp_output;


	srand(time(NULL));
	//fp_input = fopen(fname,"r");
	char outname[15];
	//char* extension = "_o";
	//strcpy(outname, fname);
	//strcpy(outname + strlen(fname), extension);
	fp_output=fopen("inputfile_e7.txt","w+");

	//float f;
	int count = 0;
	int i ;
	double f ;
	f = (double)rand()/(double)RAND_MAX ;
	f = f/10 ;
	printf(" f is %lf\n", f) ;
	for(i = 0 ; i < 10000000*3 ; i++)
	{
		//fscanf(fp_input, "%f", &f);
		f = (double)rand()/(double)RAND_MAX ;
		f = f/10 ;
		if (count == 2){
			count = 0;
			fprintf(fp_output, "%.6lf%s", f , "\n"); 
			continue;
		}
		fprintf(fp_output,"%.6lf%s", f , " ");
		count ++;
	}

	fclose(fp_output) ;

}

