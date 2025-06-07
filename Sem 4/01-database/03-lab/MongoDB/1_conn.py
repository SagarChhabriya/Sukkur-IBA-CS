import pymongo
client = pymongo.MongoClient() # By default it connect to the local
db = client["mydatabase"]
cols = db["customers"]

print("Databases: ",client.list_database_names())
print("Collections: " , db.list_collection_names())


