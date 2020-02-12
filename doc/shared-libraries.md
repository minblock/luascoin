Shared Libraries
================

## luaconsensus

The purpose of this library is to make the verification functionality that is critical to LUA's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `luaconsensus.h` located in  `src/script/luaconsensus.h`.

#### Version

`luaconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`luaconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `luaconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `luaconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `luaconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/lua/bips/blob/master/bip-0016.mediawiki)) subscripts
- `luaconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/lua/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `luaconsensus_ERR_OK` - No errors with input parameters *(see the return value of `luaconsensus_verify_script` for the verification status)*
- `luaconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `luaconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `luaconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NLUA](https://github.com/NicolasDorier/NLUA/blob/master/NLUA/Script.cs#L814) (.NET Bindings)
- [node-libluaconsensus](https://github.com/bitpay/node-libluaconsensus) (Node.js Bindings)
- [java-libluaconsensus](https://github.com/dexX7/java-libluaconsensus) (Java Bindings)
- [luaconsensus-php](https://github.com/Bit-Wasp/luaconsensus-php) (PHP Bindings)
