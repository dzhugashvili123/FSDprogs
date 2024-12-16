//Httpstaticfileserver.js
//Implementing a basic static file webserver
var fs = require('fs');
var http = require('http');
var url = require('url');
var ROOT_DIR = "html/";
http.createServer(function (req, res) {
var urlObj = url.parse(req.url, true, false);
fs.readFile(ROOT_DIR + urlObj.pathname, function (err,data) {
if (err) {
res.writeHead(404);
res.end(JSON.stringify(err));
return;
}
res.writeHead(200);
res.end(data);
});
}).listen(8080)
_______________________________________________________________
//Httpstaticfileclient.js
// Basic web client retrieving static files
var http = require('http');
var options = {
hostname: 'localhost',
 port: '8080',
 path: '/hello.html'
 };
 function handleResponse(response) {
 var serverData = '';
 response.on('data', function (chunk) {
 serverData += chunk;
 });
 response.on('end', function () {
 console.log(serverData);
 });
 }
 http.request(options, function(response){
 handleResponse(response);
 }).end()
_______________________________________________________________
// html/hello.html
<html>
 <head>
 <title>Static Example</title>
 </head>
 <body>
 <h1>Hello from a Static File</h1>
 </body>
</html>
