import os

SCRIPT_PATH = os.path.dirname(os.path.realpath(__file__))

def r(path):
    with open(path) as f:
        return f.read()

# Layout of a single file.
sections = [
    # Credits file needs to be part of H.H for copyright / license reasons.
    ["CREDITS", r],

    # Includes and setup.
    ["includes", r],
    ["config", r],

    # Datatypes and helper funcs.
    ["endian", r],
    ["uint128", r],
    ["regex", r],
    ["utility", r],
    ["linked_list", r],
    ["math", r],
    ["hashmap", r],
    ["types", r],
    ["json", r],

    # Crypto stuff.
    ["crypto/hash/sha256", r],
    ["crypto/rand", r],
    #     These files came from Trezor firmware \/
    ["crypto/ecdsa/bignum", r],
    ["crypto/hash/sha2", r],
    ["crypto/hash/hmac", r],
    ["crypto/ecdsa/secp256k1", r],
    #   From open enclave SDK samples.
    ["crypto/rsa", r],

    # Main APIs and engine code.
    ["api/utility", r],

    # Single-header server and web stuff.
    ["web", r],
    ["http", r],

]

buf  = """// AUTO GENERATED -- dont edit this file directly! Run single file builder\r\n""" * 10
# buf += "#pragma once\r\n"

# Load all the headers first then implementation.
for cat in [["header", "h"], ["code", "cpp"]]:
    dir, extension = cat
    if dir == "header":
        buf += "#ifndef H_H_%s\r\n" % (dir)
        buf += "#define H_H_%s\r\n" % (dir)


    else:
        buf += "#ifdef H_H\r\n"

    for section in sections:
        name, reader = section

        file_name = "%s.%s" % (name, extension)
        path = os.path.join(SCRIPT_PATH, "..", "build", "sections", dir, file_name)
        path = os.path.realpath(path)
        if os.path.exists(path):
            buf += reader(path) + "\r\n"

    buf += "\r\n#endif\r\n"


print(buf)
