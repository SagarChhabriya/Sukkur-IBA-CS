<img width="458" alt="image" src="https://github.com/user-attachments/assets/59ddd179-1e41-4852-b17b-38cd5af63735">### Teaching Path
- Beginner: Caesar Cipher, Substitution Cipher
- Intermediate: AES, DES, Symmetric Encryption
- Advanced: RSA, ECC (Elliptic Curve Cryptography)
- Expert: AES-GCM, Post-Quantum Cryptography, Advanced Key Management
- 

## Resources
1. Ceaser Cipher ROT [Website](https://1findawg.github.io/youtubecode.github.io/html/caesarCipher.html)



## Bullets
1. Creating this formal proof is difficult. As a result, if there is one thing to know about cryptography it's the following:
`Do not invent your own cryptography algorithm! Use standard algorithms and constructs that have been proven to be secure!`

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



2. ROT with %
```
alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

string_input = input("Enter a string: ")
shift_input = int(input("Enter in a value to shift by: "))

input_length = len(string_input)

string_output = ""

for i in range(input_length):
character = string_input [i]
location_of_character = alphabets.find(character)
new_location = (location_of_character + shift_input) % 26;
string_output = string_output + alphabets [new_location]

print("Encrypted text: ", string_output)
```


3. 
