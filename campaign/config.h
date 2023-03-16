class Params {
	#define OP_BUDGET_MIN 0
	#define OP_BUDGET_MAX 120000000
	#define OP_BUDGET_DEFAULT 12000000
	#include "params\paramOpBudget.h"

	#define DT_MIN 10
	#define DT_MAX 300
	#define DT_DEFAULT 10
	#include "params\paramDT.h"

	#define MULTIPLYR_MIN 1
	#define MULTIPLYR_MAX 3
	#define MULTIPLYR_DEFAULT 1
	#include "params\paramMultiplyr.h"
};

#include "configs\banks.h"
#include "configs\cpofs.h"
#include "configs\garages.h"
#include "configs\lockers.h"
#include "configs\paygrades.h"
#include "configs\stores.h"