#ifndef _init_finalize_h
#define _init_finalize_h

#include "R.h"
#include <Rinternals.h>
#include <Rdefines.h>


void checkPiebaldInit();
SEXP initPiebaldMPI();
SEXP finalizePiebaldMPI();


#endif // #define _init_finalize_h
