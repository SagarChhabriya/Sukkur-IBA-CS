import json

# Read json data from a file
path = 'A:\\py -code\\Databases\\mongo\\presentation\\1_data.json'
with open(path,'r') as file:
    data = json.load(file)

print(data)