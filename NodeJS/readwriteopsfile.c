//READ FILE
var http = require('http');
var fs = require('fs');
http.createServer(function (req, res) {
  fs.readFile('file1.txt', function(err, data) {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.write(data);
    return res.end();
  });
}).listen(8080);
_______________________________________________________________
//WRITE FILE ASYNCHRONOUS CALL
var fs = require('fs');
fs.writeFile('file1.txt', 'This is my text', function (err) {
  if (err) throw err;
  console.log('Replaced!');
});
_______________________________________________________________
//APPEND FILE ASYNCHRONOUS CALL
var fs = require('fs');
fs.appendFile('file1.txt', 'FULL STACK DEVELOPMENT', function (err) {
  if (err) throw err;
  console.log('Saved!');
});
_______________________________________________________________
//DELETE FILE
var fs = require('fs');
fs.unlink('file2.txt', function (err) {
  if (err) throw err;
  console.log('File deleted!');
});
