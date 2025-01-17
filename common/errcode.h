#ifndef LIGHTNING_COMMON_ERRCODE_H
#define LIGHTNING_COMMON_ERRCODE_H

#include "config.h"

#include <ccan/short_types/short_types.h>

typedef s32 errcode_t;

#define PRIerrcode PRId32

// Setup errors
#define EXITCODE_SUBDAEMON_FAIL 10
#define EXITCODE_PIDFILE_LOCK 11

// HSM errors code
#define EXITCODE_HSM_GENERIC_ERROR 20
#define EXITCODE_HSM_ERROR_IS_ENCRYPT 21
#define EXITCODE_HSM_BAD_PASSWORD 22
#define EXITCODE_HSM_PASSWORD_INPUT_ERR 23
#define EXITCODE_ERROR_HSM_FILE 24

// Wallet error
#define EXITCODE_WALLET_DB_MISMATCH 30

#endif /* LIGHTNING_COMMON_ERRCODE_H */
