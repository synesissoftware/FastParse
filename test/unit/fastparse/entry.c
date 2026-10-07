/* /////////////////////////////////////////////////////////////////////////
 * File:    test/unit/fastparse/entry.c
 *
 * Purpose: Unit-tests the FastParse version contract.
 *
 * Created: 7th October 2026
 * Updated: 7th October 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <fastparse/fastparse.h>

#ifdef XTESTS_HAS_SHWILD
# include <shwild/shwild.h>
#endif /* XTESTS_HAS_SHWILD */

#include <xtests/terse-api.h>

#include <stlsoft/stlsoft.h>

#include <stdlib.h>


/* /////////////////////////////////////////////////////////////////////////
 * forward declarations
 */

static void TEST_FASTPARSE_VER_COMPONENTS(void);
static void TEST_FASTPARSE_VER_COMPOSITE(void);
static void TEST_fastparse_getVersionString(void);


/* /////////////////////////////////////////////////////////////////////////
 * main
 */

int main(int argc, char* argv[])
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if (XTESTS_START_RUNNER("test.unit.fastparse", verbosity))
    {
        XTESTS_RUN_CASE(TEST_FASTPARSE_VER_COMPONENTS);
        XTESTS_RUN_CASE(TEST_FASTPARSE_VER_COMPOSITE);
        XTESTS_RUN_CASE(TEST_fastparse_getVersionString);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}


/* /////////////////////////////////////////////////////////////////////////
 * tests
 */

static void TEST_FASTPARSE_VER_COMPONENTS(void)
{
    TEST_INT_EQ(0, FASTPARSE_VER_MAJOR);
    TEST_INT_EQ(1, FASTPARSE_VER_MINOR);
    TEST_INT_EQ(0, FASTPARSE_VER_PATCH);
    TEST_INT_EQ(0x41, FASTPARSE_VER_ALPHABETA);
    TEST_INT_EQ(FASTPARSE_VER_PATCH, FASTPARSE_VER_REVISION);
}

static void TEST_FASTPARSE_VER_COMPOSITE(void)
{
    unsigned const expected = (0u
        |   ((unsigned)FASTPARSE_VER_MAJOR << 24)
        |   ((unsigned)FASTPARSE_VER_MINOR << 16)
        |   ((unsigned)FASTPARSE_VER_PATCH << 8)
        |   ((unsigned)FASTPARSE_VER_ALPHABETA << 0)
    );

    TEST_INT_EQ(expected, (unsigned)FASTPARSE_VER);
}

static void TEST_fastparse_getVersionString(void)
{
    TEST_MS_EQ(FASTPARSE_VER_STRING, fastparse_getVersionString());
}


/* ///////////////////////////// end of file //////////////////////////// */

