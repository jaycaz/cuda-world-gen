// Jordan Cazamias
// CUDA World Gen 2015
#pragma once

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
#include <cuda.h>
#include <cuda_runtime.h>
#include <curand.h>

#include "gifencode.h"
#include "worldgen.h"
#include "stats.h"

extern void genworld_pll(int argc, char **argv);
