import hashlib

# Function to combine key and message, then generate a hash
def generate_hash(key, message):
    # Combine the key and the message (concatenation)
    combined = key + message
    
    # Generate the SHA-256 hash of the combined string
    hash_object = hashlib.sha256(combined.encode())  # Convert to bytes and generate hash
    return hash_object.hexdigest()  # Return the hash as a hex string

# Function to verify the received message
def verify_message(key, received_message, received_hash):
    # Generate the hash from the received message using the same key
    generated_hash = generate_hash(key, received_message)
    
    # Compare the generated hash with the received hash
    if generated_hash == received_hash:
        return True  # Message is valid
    else:
        return False  # Message is tampered





# Main example usage
if __name__ == "__main__":
    # Define a secret key (this should be shared securely between sender and receiver)
    secret_key = "supersecretkey123"

    # Define the message to send
    message = "This is a confidential message."

    # Sender generates the hash
    message_hash = generate_hash(secret_key, message)
    print(f"Generated hash: {message_hash}")
    
    # Simulate sending the message and the hash (sent together)
    received_message = message
    received_hash = message_hash
    
    # # CASE 1: Receiver verifies the message using the same key
    # if verify_message(secret_key, received_message, received_hash):
    #     print("Message verified successfully.")  # Successful verification
    # else:
    #     print("Message verification failed.")  # Failed verification

    # CASE 2: Simulate a failed case (modified message)
    modified_message = "This is a modified message."
    # The receiver will use the original hash (incorrect for modified message)
    if verify_message(secret_key, modified_message, message_hash):
        print("Message verified successfully.")  # This should not happen, the message is modified
    else:
        print("Message verification failed.")  # Failed verification, as message is tampered
