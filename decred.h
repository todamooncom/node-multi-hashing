#ifndef DECRED_H
#define DECRED_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void decred_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
