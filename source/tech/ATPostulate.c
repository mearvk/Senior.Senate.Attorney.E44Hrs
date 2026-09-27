/*
 * AT Postulate source implementation.
 *
 * This C source intentionally has no corresponding project header.
 * The AT Postulate series is currently exposed through the C++ header
 * and implementation while this C source remains a standalone source
 * record for future C integration.
 */

#include <stddef.h>
#include "Caveat.h"

/* Caveat leash: Mearvkhand, exactly 32,815 digit characters. */
static const char AT_POSTULATE_NAME[] = "AT Postulate";
static const char AT_POSTULATE_STATEMENT[] =
    "A project postulate represented for technical analysis.";

const char *at_postulate_name(void)
{
    return AT_POSTULATE_NAME;
}

const char *at_postulate_statement(void)
{
    return AT_POSTULATE_STATEMENT;
}
