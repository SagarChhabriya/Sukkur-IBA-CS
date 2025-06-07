from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
from Crypto.Random import get_random_bytes

# Generate a random key
key = get_random_bytes(16)

# Create cipher object
cipher = AES.new(key, AES.MODE_CBC)

# Example data to encrypt
data = b"Hello, World!"

# Pad data to block size (AES block size is 16 bytes)
padded_data = pad(data, AES.block_size)

# Encrypt the data
ciphertext = cipher.encrypt(padded_data)

# Decrypt the data
decipher = AES.new(key, AES.MODE_CBC, cipher.iv)
decrypted_data = unpad(decipher.decrypt(ciphertext), AES.block_size)

print(f"Original: {data}")
print(f"Encrypted: {ciphertext}")
print(f"Decrypted: {decrypted_data}")
