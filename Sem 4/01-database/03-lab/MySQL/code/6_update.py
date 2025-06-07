import pymongo
client = pymongo.MongoClient()
db = client["school"]
col = db["teacher"]
docs = col.find()

for doc in docs:
    print(doc)

res = col.update_one( {"name":"Sagar Chhabriya"}, {"$set": {"location":"California"} } )
print("Modified:", res.modified_count)
print("Matched:",res.matched_count)
