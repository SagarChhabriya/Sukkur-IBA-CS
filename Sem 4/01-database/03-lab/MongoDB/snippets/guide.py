# Do not execute this file 



# Connection
myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]

# Example
# Insert another record in the "customers" collection, 
# and return the value of the _id field:

mydict = { "name": "Peter", "address": "Lowstreet 27" }

x = mycol.insert_one(mydict)

print(x.inserted_id)

# If you do not specify an _id field, then MongoDB will add 
# one for you and assign a unique id for each document.
# In the example above no _id field was specified,
#  so MongoDB assigned a unique _id for the record (document).



# Insert Multiple Documents
# To insert multiple documents into a collection in MongoDB, we use the insert_many() method.
# The first parameter of the insert_many() method is a list containing
#  dictionaries with the data you want to insert:

# Example
import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

mylist = [
  { "name": "Amy", "address": "Apple st 652"},
  { "name": "Hannah", "address": "Mountain 21"},
  { "name": "Michael", "address": "Valley 345"},
  { "name": "Sandy", "address": "Ocean blvd 2"},
  { "name": "Betty", "address": "Green Grass 1"},
  { "name": "Richard", "address": "Sky st 331"},
  { "name": "Susan", "address": "One way 98"},
  { "name": "Vicky", "address": "Yellow Garden 2"},
  { "name": "Ben", "address": "Park Lane 38"},
  { "name": "William", "address": "Central st 954"},
  { "name": "Chuck", "address": "Main Road 989"},
  { "name": "Viola", "address": "Sideway 1633"}
]

x = mycol.insert_many(mylist)

#print list of the _id values of the inserted documents:
print(x.inserted_ids)
# The insert_many() method returns a InsertManyResult object, which has a property, 
# inserted_ids, that holds the ids of the inserted documents.


# # Insert Multiple Documents, with Specified IDs
# If you do not want MongoDB to assign unique ids for you document,
#  you can specify the _id field when you insert the document(s).
# Remember that the values has to be unique. Two documents cannot have the same _id.

# Example
import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

mylist = [
  { "_id": 1, "name": "John", "address": "Highway 37"},
  { "_id": 2, "name": "Peter", "address": "Lowstreet 27"},
  { "_id": 3, "name": "Amy", "address": "Apple st 652"},
  { "_id": 4, "name": "Hannah", "address": "Mountain 21"},
  { "_id": 5, "name": "Michael", "address": "Valley 345"},
  { "_id": 6, "name": "Sandy", "address": "Ocean blvd 2"},
  { "_id": 7, "name": "Betty", "address": "Green Grass 1"},
  { "_id": 8, "name": "Richard", "address": "Sky st 331"},
  { "_id": 9, "name": "Susan", "address": "One way 98"},
  { "_id": 10, "name": "Vicky", "address": "Yellow Garden 2"},
  { "_id": 11, "name": "Ben", "address": "Park Lane 38"},
  { "_id": 12, "name": "William", "address": "Central st 954"},
  { "_id": 13, "name": "Chuck", "address": "Main Road 989"},
  { "_id": 14, "name": "Viola", "address": "Sideway 1633"}
]

x = mycol.insert_many(mylist)

#print list of the _id values of the inserted documents:
print(x.inserted_ids)


# Python MongoDB Find
# In MongoDB we use the find() and find_one() methods to find data in a collection.
# Just like the SELECT statement is used to find data in a table in a MySQL database.
# Find One
# To select data from a collection in MongoDB, we can use the find_one() method.
# The find_one() method returns the first occurrence in the selection.
# Example
# Find the first document in the customers collection:
import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

x = mycol.find_one()

print(x)


# Find All
# To select data from a table in MongoDB, we can also use the find() method.
# The find() method returns all occurrences in the selection.
# The first parameter of the find() method is a query object. In this example we use 
# an empty query object, which selects all documents in the collection.
# No parameters in the find() method gives you the same result as SELECT * in MySQL.

# Example
# Return all documents in the "customers" collection, and print each document:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

for x in mycol.find():
  print(x)


# Return Only Some Fields
# The second parameter of the find() method is an object
# describing which fields to include in the result.
# This parameter is optional, and if omitted, all fields will be included in the result.

# Example
# Return only the names and addresses, not the _ids:
import pymongo
myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

for x in mycol.find({},{ "_id": 0, "name": 1, "address": 1 }):
  print(x)

# -You are not allowed to specify both 0 and 1 values in the same object
#  (except if one of the fields is the _id field). If you specify a field with
#   the value 0, all other fields get the value 1, and vice versa:
#   Example
# This example will exclude "address" from the result:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

for x in mycol.find({},{ "address": 0 }):
  print(x)


# Example
# You get an error if you specify both 0 and 1 values in the same object 
# (except if one of the fields is the _id field):

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

for x in mycol.find({},{ "name": 1, "address": 0 }):
  print(x)

# Python MongoDB Query

# 1) Filter the Result
# When finding documents in a collection, you can filter the result by using a query object.

# The first argument of the find() method is a query object, and is used to limit the search.

# Example
# Find document(s) with the address "Park Lane 38":

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myquery = { "address": "Park Lane 38" }

mydoc = mycol.find(myquery)

for x in mydoc:
  print(x)


# Advanced Query
# To make advanced queries you can use modifiers as values in the query object.

# E.g. to find the documents where the "address" field starts with the letter "S" or higher (alphabetically), use the greater than modifier: {"$gt": "S"}:

# Example
# Find documents where the address starts with the letter "S" or higher:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myquery = { "address": { "$gt": "S" } }

mydoc = mycol.find(myquery)

for x in mydoc:
  print(x)



# Filter With Regular Expressions
# You can also use regular expressions as a modifier.

# Regular expressions can only be used to query strings.

# To find only the documents where the "address" field starts with the letter "S", use the regular expression {"$regex": "^S"}:

# Example
# Find documents where the address starts with the letter "S":

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myquery = { "address": { "$regex": "^S" } }

mydoc = mycol.find(myquery)

for x in mydoc:
  print(x)



# Python MongoDB Sort

# Sort the Result
# Use the sort() method to sort the result in ascending or descending order.
# The sort() method takes one parameter for "fieldname" and one parameter for "direction" ascending is the default direction).

# Example
# Sort the result alphabetically by name:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

mydoc = mycol.find().sort("name")

for x in mydoc:
  print(x)

# Sort Descending
# Use the value -1 as the second parameter to sort descending.

# sort("name", 1) #ascending
# sort("name", -1) #descending

# Example
# Sort the result reverse alphabetically by name:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

mydoc = mycol.find().sort("name", -1)

for x in mydoc:
  print(x)


# Python MongoDB Delete Document
# Delete Document
# To delete one document, we use the delete_one() method.

# The first parameter of the delete_one() method is a query object defining which document to delete.

# Note: If the query finds more than one document, only the first occurrence is deleted.
# # Example
# Delete the document with the address "Mountain 21":

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myquery = { "address": "Mountain 21" }

mycol.delete_one(myquery)

# Delete Many Documents
# To delete more than one document, use the delete_many() method.

# The first parameter of the delete_many() method is a query object defining which documents to delete.

# Example
# Delete all documents were the address starts with the letter S:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myquery = { "address": {"$regex": "^S"} }

x = mycol.delete_many(myquery)

print(x.deleted_count, " documents deleted.")


# Delete All Documents in a Collection
# To delete all documents in a collection, pass an empty query object to the delete_many() method:

# Example
# Delete all documents in the "customers" collection:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

x = mycol.delete_many({})

print(x.deleted_count, " documents deleted.")


#Python MongoDB Drop Collection

# Delete Collection
# You can delete a table, or collection as it is called in MongoDB, by using the drop() method.
# Example
# Delete the "customers" collection:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

mycol.drop()

# The drop() method returns true if the collection was dropped successfully, and false if the collection does not exist.

# # Python MongoDB Update
# Update Collection
# You can update a record, or document as it is called in MongoDB, by using the update_one() method.

# The first parameter of the update_one() method is a query object defining which document to update.

# Note: If the query finds more than one record, only the first occurrence is updated.

# The second parameter is an object defining the new values of the document.

# Example
# Change the address from "Valley 345" to "Canyon 123":

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myquery = { "address": "Valley 345" }
newvalues = { "$set": { "address": "Canyon 123" } }

mycol.update_one(myquery, newvalues)

#print "customers" after the update:
for x in mycol.find():
  print(x)

# Update Many
# To update all documents that meets the criteria of the query, use the update_many() method.

# Example
# Update all documents where the address starts with the letter "S":

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myquery = { "address": { "$regex": "^S" } }
newvalues = { "$set": { "name": "Minnie" } }

x = mycol.update_many(myquery, newvalues)

print(x.modified_count, "documents updated.")


# Python MongoDB Limit
# Limit the Result
# To limit the result in MongoDB, we use the limit() method.

# The limit() method takes one parameter, a number defining how many documents to return.

# Consider you have a "customers" collection:
# Customers
{'_id': 1, 'name': 'John', 'address': 'Highway37'}
{'_id': 2, 'name': 'Peter', 'address': 'Lowstreet 27'}
{'_id': 3, 'name': 'Amy', 'address': 'Apple st 652'}
{'_id': 4, 'name': 'Hannah', 'address': 'Mountain 21'}
{'_id': 5, 'name': 'Michael', 'address': 'Valley 345'}
{'_id': 6, 'name': 'Sandy', 'address': 'Ocean blvd 2'}
{'_id': 7, 'name': 'Betty', 'address': 'Green Grass 1'}
{'_id': 8, 'name': 'Richard', 'address': 'Sky st 331'}
{'_id': 9, 'name': 'Susan', 'address': 'One way 98'}
{'_id': 10, 'name': 'Vicky', 'address': 'Yellow Garden 2'}
{'_id': 11, 'name': 'Ben', 'address': 'Park Lane 38'}
{'_id': 12, 'name': 'William', 'address': 'Central st 954'}
{'_id': 13, 'name': 'Chuck', 'address': 'Main Road 989'}
{'_id': 14, 'name': 'Viola', 'address': 'Sideway 1633'}
# Example
# Limit the result to only return 5 documents:

import pymongo

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["customers"]

myresult = mycol.find().limit(5)

#print the result:
for x in myresult:
  print(x)
