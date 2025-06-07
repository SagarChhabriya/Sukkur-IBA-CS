import mysql.connector

db = mysql.connector.connect(host = "localhost",user = "root",password = "root",database = "mydatabase")

cursor = db.cursor()
# cursor.execute("Create table emp( empid int, name varchar(64) )"  )


cursor.execute("Show tables")
for x in cursor:
    print(x)