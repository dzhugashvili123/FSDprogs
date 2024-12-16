//write a Node JS program to read form data from query string and generate response using NodeJS
var http = require('http');
var url = require('url');
http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  var q= url.parse(req.url,true).query;
  console.log(q);
  var txt = q.year + " " + q.month;
  res.end(txt);
}).listen(8080);
