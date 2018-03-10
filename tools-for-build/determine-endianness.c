/*
 * Test for the endianness of the target platform (needed for MIPS
 * support, at the very least, as systems with either endianness exist
 * in the wild).
 */

/*
 * This software is part of the SBCL system. See the README file for
 * more information.
 *
 * While most of SBCL is derived from the CMU CL system, many
 * utilities for the build process (like this one) were written from
 * scratch after the fork from CMU CL.
 *
 * This software is in the public domain and is provided with
 * absolutely no warranty. See the COPYING and CREDITS files for
 * more information.
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
        printf(" :little-endian");
        exit(0);
}
