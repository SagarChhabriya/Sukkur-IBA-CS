from cryptography.fernet import Fernet

# Generate a key (this key must be kept secret)
def generate_key():
    key = Fernet.generate_key()  # Generates a random key
    with open("secret.key", "wb") as key_file:
        key_file.write(key)  # Save the key to a file for later use
    return key

# Load the key from the file (for decryption)
def load_key():
    return open("secret.key", "rb").read()  # Read the key from the file

# Encrypt the message
def encrypt_message(message, key):
    fernet = Fernet(key)
    encrypted_message = fernet.encrypt(message.encode())  # Encrypt the message
    return encrypted_message

# Decrypt the message
def decrypt_message(encrypted_message, key):
    fernet = Fernet(key)
    decrypted_message = fernet.decrypt(encrypted_message).decode()  # Decrypt the message
    return decrypted_message

# Main
if __name__ == "__main__":
    # Step 1: Generate and save a key (do this only once)
    # key = generate_key()  # Uncomment this line if you need to generate a key
    
    # Step 2: Load the key (for both encryption and decryption)
    key = load_key()

    # Step 3: Encrypt a message
    original_message = "Hello, this is a secret message!"
    encrypted_msg = encrypt_message(original_message, key)
    print(f"Encrypted Message: {encrypted_msg}")

    # Step 4: Decrypt the message
    # decrypted_msg = decrypt_message(encrypted_msg, key)
    # print(f"Decrypted Message: {decrypted_msg}")
