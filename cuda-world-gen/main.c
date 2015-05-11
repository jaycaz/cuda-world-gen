// Jordan Cazamias
// CUDA World Gen 2015

#include <cuda_runtime.h>
#include <Windows.h>

#include "stats.h"
#include "worldgen_seq.h"
#include "worldgen_pll.cuh"
#include "test.h"

//extern void genworld_pll(int argc, char **argv);

int main(int argc, char **argv)
{
	int faults[5] = { 200, 2000, 20000, 200000, 2000000 };
	int trials[5] = { 1, 1, 1, 1, 1 };

	collect_seq_data(5, trials, faults);
	collect_pll_data(5, trials, faults);

	/*
	int numFaults = 500000;
	int numTrials = 1;

	// ********* SEQUENTIAL ********** //
	// Run sequential generation algorithm
	printf("Running sequential algorithm with %d trials...", numTrials);
	//run_seq_trials(numTrials, numFaults);
	printf("done.\n");


	// ********* PARALLEL ********** //
	// Run parallel generation algorithm
	printf("Running parallel algorithm with %d trials...", numTrials);
	run_pll_trials(numTrials, numFaults);
	printf("done.\n");

	print_seq_stats();
	print_pll_stats();
	*/

	cudaError_t cudaStatus = cudaDeviceReset();
    if (cudaStatus != cudaSuccess) {
        fprintf(stderr, "cudaDeviceReset failed!");
		printf("Press Enter to continue...");
		getchar();
        return 1;
    }

	free(WorldMapArray);

	printf("Press Enter to continue...");
	//getchar();
	return 0;
}