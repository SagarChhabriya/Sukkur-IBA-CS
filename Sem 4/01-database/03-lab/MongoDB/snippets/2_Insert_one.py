import pymongo
client = pymongo.MongoClient()
db = client["mydatabase"]
collection = db["customers"]
# print(db.list_collection_names())

"""
db = client.mydatabase
print(db.list_collection_names())
"""

document = {"name" : "Qadeer", "location":"Kandhkot"}
x = collection.insert_one(document=document)
print(x.inserted_id())
# If you do not specify an _id field, then MongoDB will add 
# one for you and assign a unique id for each document.