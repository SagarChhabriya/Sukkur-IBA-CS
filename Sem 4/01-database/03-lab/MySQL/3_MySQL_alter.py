import mysql.connector
db = mysql.connector.connect(host="localhost",user="root",password="root",database="mydatabase")
cursor = db.cursor()
# cursor.execute("alter table emp add id int AUTO_INCREMENT Primary Key")
cursor.execute("Show tables")
for x in cursor:
    print(x)


cursor.execute("desc emp")
for x in cursor:
    print(x)