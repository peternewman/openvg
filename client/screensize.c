// first OpenVG program
// Anthony Starks (ajstarks@gmail.com)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fontinfo.h"
#include "shapes.h"

int main() {
	int width, height;
	init(&width, &height);				   // Graphics initialization
	printf("%d %d\n", width, height);
	finish();					   // Graphics cleanup
	exit(0);
}
