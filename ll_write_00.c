#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/io.h>

#define base 0x378		/* parallel port base address */
#define status base+1
#define control base+2

#define mask_ACK 0x40
#define bit_ACK 6
#define mask_IRQ 0x10

int main() {
	unsigned char val;

	if (ioperm(base,3,1)) {
		fprintf(stderr, "Access denied to port %x\n", base);
		exit(1);
	} else {
		// write 0 to DATA port
		outb(0x00, base);
	}

}