#include "main.h"

// #include <openssl/bio.h>
// #include <openssl/buffer.h>
// #include <openssl/rand.h>


std::string base64_encode(const unsigned char* input, int input_len) {
    // // Create a BIO object
    // BIO *bio_mem = BIO_new(BIO_s_mem());

    // // Create a base64 encoding BIO
    // BIO *bio_b64 = BIO_new(BIO_f_base64());
    // BIO_set_flags(bio_b64, BIO_FLAGS_BASE64_NO_NL);

    // // Chain the BIOs
    // BIO_push(bio_b64, bio_mem);

    // // Write the input data to the base64 BIO
    // BIO_write(bio_b64, input, input_len);
    // BIO_flush(bio_b64);

    // // Get the base64 encoded data
    // BUF_MEM *bio_mem_ptr;
    // BIO_get_mem_ptr(bio_mem, &bio_mem_ptr);

    // // Null-terminate the base64 encoded data
    // BIO_set_close(bio_mem, BIO_NOCLOSE);
    // BIO_free_all(bio_mem);

    // Return the base64 encoded data
    return std::string{"ZERO"};
}