/*
 *  Copyright 2011 The OpenMx Project
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "R.h"
#include <Rinternals.h>
#include <Rdefines.h>
#include <R_ext/Rdynload.h>
#include <mpi.h>

#include "commands.h"
#include "init_finalize.h"
#include "state.h"


/* Set up R .Call info */
R_CallMethodDef callMethods[] = {
{"initPiebaldMPI", (void*(*)())&initPiebaldMPI, 0},
{"finalizePiebaldMPI", (void*(*)())&initPiebaldMPI, 0},
{NULL, NULL, 0}
};

void R_init_mylib(DllInfo *info) {
/* Register routines, allocate resources. */
R_registerRoutines(info, NULL, callMethods, NULL, NULL);
}

void R_unload_mylib(DllInfo *info) {
/* Release resources. */
}


