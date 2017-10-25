#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct pstat {
	int inuse[NPROC];  // 1 if in use, 0 otherwise
	int pid[NPROC];    // pid of process
	int hticks[NPROC]; // number of ticks in high priority queue
	int lticks[NPROC]; // number of ticks in low priority queue
};

#endif // _PSTAT_H_
