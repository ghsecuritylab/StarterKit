#include "netif/xtopology.h"
#include "xparameters.h"

struct xtopology_t xtopology[] = {
	{
		0xFF0B0000,
		xemac_type_emacps,
		0x0,
		0x0,
		0xF8F00100,
		XPAR_XEMACPS_0_INTR,
	},
};

int xtopology_n_emacs = 1;
