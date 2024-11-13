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
