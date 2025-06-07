import pymongo
client = pymongo.MongoClient()

db = client["school"]
print(db.list_collection_names())

collection = db["teacher"]
document = { "name": "Sagar Chhabriya" , "location":"Kandhkot" }
x = collection.insert_one(document=document)

print(db.list_collection_names())