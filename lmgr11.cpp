#include "common.h"

namespace lmgr11 {
	int lp_checkout(int a, int b, const char* c, const char* d, int e, const char* f, int* out) {
		DEBUG_LOG("lp_checkout %d %d %s %s %d %s\n", a, b, c, d, e, f);
		*out = 1234;
		return 0;
	}

	int lp_checkin() {
		DEBUG_LOG("lp_checkin\n");
		return 0;
	}
}

void *wibo::resolveLmgr11(uint16_t ordinal) {
	switch (ordinal) {
	case 189:
		return (void*)lmgr11::lp_checkin;
	case 190:
		return (void*)lmgr11::lp_checkout;
	}
	return 0;
}