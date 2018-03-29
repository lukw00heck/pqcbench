#ifndef API_H
#define API_H

#include "parameter.h"

#define CRYPTO_SECRETKEYBYTES		SECRETKEY_BYTES
#define CRYPTO_PUBLICKEYBYTES		PUBLICKEY_BYTES
#define CRYPTO_CIPHERTEXTBYTES		CIPHERTEXT_BYTES
#define CRYPTO_BYTES				(MLWE_N/8)   

#define CRYPTO_ALGNAME "OKCN-MLWE"  

// Algorithm 26 in the document
int crypto_kem_keypair(
		unsigned char * pk, 
		unsigned char * sk);

// Algorithm 27 in the document
int crypto_kem_enc(
		unsigned char * ct,
		unsigned char * ss,
		const unsigned char * pk);
		
// Algorithm 28 in the document
int crypto_kem_dec(
		unsigned char * ss, 
		const unsigned char * ct,
		const unsigned char * sk);

#endif
