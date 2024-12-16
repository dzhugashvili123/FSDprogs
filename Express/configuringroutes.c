// to demonstrate configuring and implementing routes using Express Js
var express = require('express');
var app = express();
const PORT=3000
app.get('/', function(req, res){
    res.send("Server Home page!");
    });
app.get('/login', function(req, res){
res.send("Login page!");
});
app.get('/save', function(req, res){
    res.send("Save page!");
    });
app.listen(PORT,()=>
{
    console.log('server is running at port:'+PORT)
});
