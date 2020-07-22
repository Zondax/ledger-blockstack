#include <inttypes.h>
#include <zxmacros.h>
#include <zxformat.h>
#include <zbuffer.h>
#include "os.h"
#include "cx.h"


uint16_t fp_uint64_to_str(char *out, uint16_t outLen, const uint64_t value, uint8_t decimals) {
    return fpuint64_to_str(out, outLen, value, decimals);
}

void check_canary() {
    zb_check_canary();
}

void _zemu_log_stack(uint8_t *buffer) {
    zemu_log_stack(buffer);
}

// If out length is less than CX_SHA256_SIZE
// this function will throw an exception
void hash_sha256(uint8_t *in, in_len, uint8_t *out) {
    cx_hash_sha256(in, in_len, out, CX_SHA256_SIZE);
}
