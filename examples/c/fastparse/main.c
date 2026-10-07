/* /////////////////////////////////////////////////////////////////////////
 * File:    examples/c/fastparse/main.c
 *
 * Purpose: Prints the FastParse version string.
 *
 * Created: 7th October 2026
 * Updated: 7th October 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <fastparse/fastparse.h>

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    ((void)argc);
    ((void)argv);

    printf("%s\n", fastparse_getVersionString());

    return EXIT_SUCCESS;
}


/* ///////////////////////////// end of file //////////////////////////// */

