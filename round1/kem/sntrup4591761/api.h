#define CRYPTO_SECRETKEYBYTES 1600
#define CRYPTO_PUBLICKEYBYTES 1218
#define CRYPTO_CIPHERTEXTBYTES 1047
#define CRYPTO_BYTES 32

#define CRYPTO_ALGNAME "NTRU Prime sntrup4591761"

int crypto_kem_keypair( unsigned char *pk, unsigned char *sk);

int crypto_kem_enc( unsigned char *ct, unsigned char *ss, const unsigned char *pk);

int crypto_kem_dec( unsigned char *ss, const unsigned char *ct, const unsigned char *sk);
