//Create an application to setup node JS environment and display “Hello World.” on webpage
var http = require('http');
 http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.write('<h1>hello world....</h1>');
      res.end();
   
   }).listen(8080);
