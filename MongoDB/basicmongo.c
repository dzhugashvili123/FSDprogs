>mongod --version
>mongosh
>show dbs
> use MYDB1
MYDB1> db.createCollection("students")
MYDB1> db.students.insertOne({"rollno":501 , "name":"cse1"})
MYDB1> db.students.find().pretty()
MYDB1> db.students.insertOne({"rollno":502 , "name":"cse2"})
MYDB1> db.students.updateOne({rollno:502},{$set:{name:"cse3"}})
MYDB1> db.students.deleteOne({rollno:111})
MYDB1> db.students.drop()
MYDB1> db.dropDatabase()