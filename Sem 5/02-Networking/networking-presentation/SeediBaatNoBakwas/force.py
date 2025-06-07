import hashlib
import string
import time

# Function to generate MD5 hash of a string
def generate_md5(string_to_hash):
    return hashlib.md5(string_to_hash.encode()).hexdigest()

# Function for brute force cracking a hash
def brute_force_crack(target_hash, max_length=4):
    # Start timing
    start_time = time.time()

    # Define the character set you want to test (lowercase English letters here)
    characters = string.ascii_lowercase  # 'abcdefghijklmnopqrstuvwxyz'

    # Try every possible combination of the characters from length 1 to max_length
    for length in range(1, max_length + 1):
        for word in generate_combinations(characters, length):
            # Check if the hash matches the target hash
            if generate_md5(word) == target_hash:
                # End timing when found
                end_time = time.time()
                elapsed_time = end_time - start_time
                print(f"Cracked! The original string is: {word}")
                print(f"Time taken: {elapsed_time:.4f} seconds")
                return word  # Found the matching word
    # End timing when not found
    end_time = time.time()
    elapsed_time = end_time - start_time
    print("Failed to crack the hash.")
    print(f"Time taken: {elapsed_time:.4f} seconds")
    return None  # If no match found

# Function to generate combinations of a given length
def generate_combinations(characters, length):
    if length == 1:
        for c in characters:
            yield c
    else:
        for c in characters:
            for combination in generate_combinations(characters, length - 1):
                yield c + combination

# Example: Let's say the target hash is the hash of "abc"
target_string = "abc"
target_hash = generate_md5(target_string)

print("Target hash:", target_hash)

# Call the brute force function to crack the hash
result = brute_force_crack(target_hash)
