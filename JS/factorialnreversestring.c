function factorial(num) {
// Base case
 if (num === 0) {
 return 1;
 }
 // Recursive case
 return num * factorial(num - 1);
 }
 console.log(factorial(5));
_____________________________________________________________
// program to reverse a string
const prompt = require('prompt-sync')();
 function reverseString(str) {
// empty string
 let newString = "";
 for (let i = str.length - 1; i >= 0; i--) {
 newString += str[i];
 }
 return newString;
 }
// take input from the user
 const string = prompt('Enter a string: ');
 const result = reverseString(string);
 console.log(result)
