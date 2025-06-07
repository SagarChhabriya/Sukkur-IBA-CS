import mysql.connector


db = mysql.connector.connect(
  host="localhost",
  user="root",
  password="root",
  database = "mydatabase"
)

cursor = db.cursor()
# cursor.execute("Create Database mydatabase")
cursor.execute("Show databases")
for x in cursor:
    print(x) 