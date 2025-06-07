import pymongo
myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]

# print(myclient.list_database_names())



# dblist = myclient.list_database_names()
# if "mydatabase" in dblist:
#   print("The database exists.")
# else:
#   print('Nope')
#   A collection in MongoDB is the same as a table in SQL databases.


# Create a collection called "customers":
mycol = mydb["customers"]
# Important: In MongoDB, a collection is not created until it gets content!

# Check if the "customers" collection exists:

# collist = mydb.list_collection_names()
# if "customers" in collist:
#   print("The collection exists.")
# else:
#   print("Nope")


# Insert a record in the "customers" collection:
mydict = { "name": "John", "address": "Highway 37" }

x = mycol.insert_one(mydict)


print(myclient.list_database_names())
print(mydb.list_collection_names())