/* Generated file by build.sh */
#include <stdio.h>
#ifdef __OUT__
#include "out/include/generated/utsrelease.h"
#else
#include "include/generated/utsrelease.h"
#endif

char utsrelease[] = UTS_RELEASE;

int main() {
	printf("%s\n", utsrelease);
	return 0;
}
