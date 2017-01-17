#ifndef _ENUMERATIONS_H_
#define _ENUMERATIONS_H_
// -------------------------------------
// Enumerated types 
// -------------------------------------

//for LOOPING
#define API     0
#define KERNEL  1

//for NESTING (only applies when KERNEL looping)
#define FLAT_LOOPING   0
#define NESTED_LOOPING 1

//for WORD
#define INT     0
#define FLOAT   1
#define DOUBLE  2

//target boards/flows
//Note that CPU is an "OpenCL CPU" target (TODO: rename this to CPU_OCL or something)
//If we want a "pure" software implementation without CPU, then define TARGET = HOST
#define AOCL    0
#define SDACCEL 1
#define GPU     2
#define CPU     3
#define MAXELER 4
#define HOST    5

//for loop unroll
//since we can expect UNROLL never to be 
//explicitly defined as 0, we use this value to 
//indicate FULL unroll
#define UNROLL_FULL 0

#endif