// Index.js
//to demonstrate Applying Route Parameters in Express JS
var express = require('express');
 var url = require('url');
var app = express();
 app.listen(4000);
app.get('/', function (req, res) {
 res.send("Get Index");
 });
 app.get('/find', function(req, res){
 var url_parts = url.parse(req.url, true);
 var query = url_parts.query; 
 var response = 'Finding Book: Author: ' + query.author + 
' Title: ' + query.title;
console.log('\nQuery URL: ' + req.originalUrl); 
console.log(response);
res.send(response);
 });
 app.get(/^\/book\/(\w+)\:(\w+)?$/, function(req, res){
    var response = 'Get Book: Chapter: ' + req.params[0] + 
     ' Page: ' + req.params[1];
     console.log('\nRegex URL: ' + req.originalUrl);
     console.log(response);
     res.send(response);
     });
     app.get('/user/:userid', function (req, res) {
        res.send("Get User: " + req.param("userid"));
       });
