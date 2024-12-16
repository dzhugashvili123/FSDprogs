// Connect.js
// Connect to database and close the database connection
const { MongoClient } = require('mongodb')
// Create Instance of MongoClient for mongodb
const client = new MongoClient('mongodb://localhost:27017')
// Connect to database
client.connect()
    .then(() => {
        console.log('Connected Successfully!')
        
        //Close the database connection
        console.log('Exiting..')
        client.close()
    })
    .catch(error => console.log('Failed to connect!', error))
________________________________________________________________________
// Insertdb.js
// to insert one document
const { MongoClient } = require('mongodb')
// Create Instance of MongoClient for mongodb
const client = new MongoClient('mongodb://localhost:27017')
// Insert to database
client.db('MYDB').collection('students').insertOne({
    name: 'cse1',
    email: 'cse1@example.com'
})
    .then((res) => {
        console.log(res)
        client.close()
    })
    .catch((err) => console.log(err))
________________________________________________________________________
// Finddb.js
//to find one document
const { MongoClient } = require('mongodb')
// Create Instance of MongoClient for mongodb
const client = new MongoClient('mongodb://localhost:27017')
// Insert to database
client.db('MYDB').collection('students')
    .findOne({name:'cse1'})
    .then((res) => {
        console.log(res)
        client.close()
    })
    .catch((err) => console.log(err))
________________________________________________________________________
// Updatedb.js
//to update one document
const { MongoClient } = require('mongodb')
// Create Instance of MongoClient for mongodb
const client = new MongoClient('mongodb://localhost:27017')
// Insert to database
client.db('MYDB').collection('students')
    .updateOne({ name: 'cse1' },
        {
            $set:
                { email: 'cse123@example.com' }
        })
    .then((res) => {
        console.log(res)
        client.close()
    })
    .catch((err) => console.log(err))
________________________________________________________________________
// Deletedb.js
//to delete one document
const { MongoClient } = require('mongodb')
// Create Instance of MongoClient for mongodb
const client = new MongoClient('mongodb://localhost:27017')
// Insert to database
client.db('MYDB').collection('students')
    .deleteOne({ name: 'cse1' })
    .then((res) => {
        console.log(res)
        client.close()
    })
    .catch((err) => console.log(err))
