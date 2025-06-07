import pymongo
client = pymongo.MongoClient()
db = client["mydatabase"]
col = db["customers"]

documents = [
    {"name":"A","location":"A"},
    {"name":"B","location":"B"},
    {"name":"C","location":"C"},
    {"name":"D","location":"D"}
]
x = col.insert_many(documents=documents)
print(x.inserted_ids())