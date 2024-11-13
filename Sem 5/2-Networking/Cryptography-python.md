### Teaching Path
- Beginner: Caesar Cipher, Substitution Cipher
- Intermediate: AES, DES, Symmetric Encryption
- Advanced: RSA, ECC (Elliptic Curve Cryptography)
- Expert: AES-GCM, Post-Quantum Cryptography, Advanced Key Management

## Resources
1. Ceaser Cipher ROT [Website](https://1findawg.github.io/youtubecode.github.io/html/caesarCipher.html)



1. Ceaser Cipher ROT-13

```python
alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

string_input = input("Enter a string: ")

input_length = len(string_input)

string_output = ""

for i in range(input_length):
character = string_input [i]
location_of_character = alpha.find(character)
new_location = location_of_character + 3;
string_output += alpha[new_location]

print("Encrypted text is: ", string_output)

```



2. 
