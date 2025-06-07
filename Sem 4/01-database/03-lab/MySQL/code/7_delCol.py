# delete rows | Docs
import pymongo
client = pymongo.MongoClient()
db = client["school"]
col = db["teacher"]
docs = col.find()

for doc in docs:
    print(doc)

col.delete_one( {"name":"Sagar Chhabriya"})