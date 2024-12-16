NOTE:
1)Create two files in the folder ‘src’ with CBC.js and FBC.js 
2) use rcc and rfc to get the class and functional based syntax in the files.
________________________________________________________________________
Src/CBC.js
import React, { Component } from 'react'

export default class CBC extends Component {
  render() {
    return (
      <div>class based component </div>
    )
  }
}
________________________________________________________________________
Src/FBC.js
import React from 'react'

export default function FBC() {
  return (
    <div> function based component</div>
  )
}
________________________________________________________________________
Src/App.js
import CBC from "./CBC";
import FBC from "./FBC";

function App() {
  return (
    <div>
      <h1>hello world- main component</h1>
      <CBC></CBC>
      <FBC></FBC>
    </div>
        
  );
}

export default App;
