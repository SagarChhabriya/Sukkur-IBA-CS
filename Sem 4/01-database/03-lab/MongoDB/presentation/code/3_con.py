import pymongo
client = pymongo.MongoClient()

print("Databases: ",client.list_database_names())

db = client["school"] # school db
db.create_collection("teacher")

print("Databases: ",client.list_database_names())
print("Collections: ",db.list_collection_names())


