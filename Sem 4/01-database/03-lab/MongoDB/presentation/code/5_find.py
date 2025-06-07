# db.col.find() = select * from table;

import pymongo
client = pymongo.MongoClient()
db = client["school"]
col = db["teacher"]
# print(col.find_one()) # or teacher.find_one()
# select * from teacher
docs = col.find()
for doc in docs:
    print(doc)

