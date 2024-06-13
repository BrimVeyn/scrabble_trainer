#include "../../include/hashTableDefine.h"


Grid gridInit(void) {
	struct Grid my_grid = {
		// .grid =		{ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		// 			  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 0, 0, 0, 0, 0, 'E', 0, 0, 0, 0,0},
		// 			  {0, 0, 0, 0, 'A', 0, 0, 0, 0, 'N', 0, 0, 0, 0,0},
		// 			  {0, 0, 0, 0, 'R', 0, 0, 0, 0, 'F', 0, 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 'R', 0, 'E', 0, 0, 'I', 0, 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 'E', 0, 'F', 0, 0, 'L', 'E', 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 'T', 'R', 'I', 'C', 'H', 'E', 'S', 0, 0},
		// 			  {0, 0, 0, 0, 'E', 0, 'L', 0, 0, 0,'P', 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 'N', 0, 'E', 0, 0, 0, 'I', 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 'T', 0, 0, 0, 0, 0, 'E', 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'G', 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'L', 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'E', 0, 0, 0, 0},
		// 			  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		/*.grid =		{ {0, 'C', 'H', 0, 0, 'O', 'T', 0, 0, 'M', 'I', 0, 'U', 'E', 0},*/
		.grid =		{ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0 ,0 ,0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 'F', 'O', 'R', 'C', 'E', 'R', 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 'A', 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 'L', 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 'A', 'L', 'A', 'R', 'M', 'E', 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 'M', 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 'I', 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 'T', 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 'E', 'P', 'R', 'E', 'U', 'V', 'E', 0}, },
		.tour_grid =  {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		.modifier = { {TWORD, 0, 0, DLETTER, 0, 0, 0, TWORD, 0, 0, 0, DLETTER, 0, 0, TWORD},
			       	  {0, DWORD, 0, 0, 0, TLETTER, 0, 0, 0, TLETTER, 0, 0, 0, DWORD, 0},
					  {0, 0, DWORD, 0, 0, 0, DLETTER, 0, DLETTER, 0, 0, 0, DWORD, 0, 0},
					  {DLETTER, 0, 0, DWORD, 0, 0, 0, DLETTER, 0, 0, 0, DWORD, 0, 0, DLETTER},
					  {0, 0, 0, 0, DWORD, 0, 0, 0, 0, 0, DWORD, 0, 0, 0, 0},
					  {0, TLETTER, 0, 0, 0, TLETTER, 0, 0, 0, TLETTER, 0, 0, 0, TLETTER, 0},
					  {0, 0, DLETTER, 0, 0, 0, DLETTER, 0, DLETTER, 0, 0, 0, DLETTER, 0, 0},
					  {TWORD, 0, 0, DLETTER, 0, 0, 0, DWORD, 0, 0, 0, DLETTER, 0, 0, TWORD},
					  {0, 0, DLETTER, 0, 0, 0, DLETTER, 0, DLETTER, 0, 0, 0, DLETTER, 0, 0},
					  {0, TLETTER, 0, 0, 0, TLETTER, 0, 0, 0, TLETTER, 0, 0, 0, TLETTER, 0},
					  {0, 0, 0, 0, DWORD, 0, 0, 0, 0, 0, DWORD, 0, 0, 0, 0},
					  {DLETTER, 0, 0, DWORD, 0, 0, 0, DLETTER, 0, 0, 0, DWORD, 0, 0, DLETTER},
					  {0, 0, DWORD, 0, 0, 0, DLETTER, 0, DLETTER, 0, 0, 0, DWORD, 0, 0},
			       	  {0, DWORD, 0, 0, 0, TLETTER, 0, 0, 0, TLETTER, 0, 0, 0, DWORD, 0},
					  {TWORD, 0, 0, DLETTER, 0, 0, 0, TWORD, 0, 0, 0, DLETTER, 0, 0, TWORD} },
	};
	return my_grid;
}
