//events.js
// Importing events
const EventEmitter = require('events');
// Initializing event emitter instances 
var eventEmitter = new EventEmitter();
// Registering to myEvent 
eventEmitter.on('myEvent', (msg) => {
   console.log(msg);
}); 
// Triggering myEvent
eventEmitter.emit('myEvent', "First event");
// Triggering myEvent
eventEmitter.emit('myEvent', "Second event");
console.log("program ended...")
_______________________________________________________________
//callback.js
// call back function
var fs= require('fs')
fs.writeFile('file.txt',' welcome to call back functions', function()
    {
    console.log(" data written to file.txt")
})
console.log('End of the program.....’)
