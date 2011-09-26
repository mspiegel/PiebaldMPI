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

#ifndef _lapply_workers_helpers_h
#define _lapply_workers_helpers_h

#include "R.h"
#include <Rinternals.h>
#include <Rdefines.h>
#include <R_ext/Rdynload.h>
#include <mpi.h>

#include "init_finalize.h"
#include "commands.h"
#include "state.h"
#include "lapply_helpers.h"
#include "compiler_directives.h"

SEXP findFunction();
SEXP workerGetRemainder();
SEXP workerGetArgs();
SEXP generateReturnList(SEXP theFunction, SEXP serializeRemainder, 
                        SEXP serializeArgs);
void sendReturnList(SEXP returnList);
void workerCleanup(SEXP serializeFunction, SEXP serializeRemainder, 
                   SEXP serializeArgs, SEXP returnList);



#endif // #ifndef _lapply_workers_helpers_h
