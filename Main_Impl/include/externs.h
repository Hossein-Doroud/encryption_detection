
//#include "../include/defs.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
                   G L O B A L   D A T A  S T R U C T U R E S 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// New structures
extern  char *array;// delete unsigned
extern short int LU_byte_weight[256];
extern short int LU_byte_switches[256];
extern unsigned char LU_byte_inverted[256];

extern signed char LUT_HW_8[], LUT_Switches_8[];
extern signed char LUT_HW_16[], LUT_Switches_16[];
extern signed char LUT_Lrun_start_8[], LUT_Lrun_end_8[], LUT_Lrun_max_8[];
extern signed char LUT_Lrun_start_16[], LUT_Lrun_end_16[], LUT_Lrun_max_16[];
extern signed char LUT_Cusum_max_positiv_8[], LUT_Cusum_max_negativ_8[], LUT_Cusum_8[];
extern signed char LUT_Cusum_max_positiv_16[], LUT_Cusum_max_negativ_16[], LUT_Cusum_16[];




// // Original stuff
// extern BitSequence              *epsilon;				// BIT STREAM
// extern TP			tp;						// TEST PARAMETER STRUCTURE
// extern FILE			*stats[NUMOFTESTS+1];	// FILE OUTPUT STREAM
// extern FILE			*results[NUMOFTESTS+1];	// FILE OUTPUT STREAM
// extern FILE			*freqfp;				// FILE OUTPUT STREAM
// extern FILE			*summary;				// FILE OUTPUT STREAM
// extern int			testVector[NUMOFTESTS+1];

// extern char	generatorDir[NUMOFGENERATORS][20];
// extern char	testNames[NUMOFTESTS+1][32];
