Events/src/app/app.component.ts
import { Component } from '@angular/core';
import { RouterOutlet } from '@angular/router';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [RouterOutlet],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  title = 'events';
  counter:number=0;
  name:any="null"
  increment()
  {
    this.counter+=1;
  }
  decrement()
  {
    this.counter-=1;
  }

changeName(e:any)
{
  this.name=e.target.value
}
}
________________________________________________________________________
Events/src/app/app.component.html

<h1> count:{{counter}}</h1>
<button (click)="increment()"> increment</button>
<button (click)="decrement()"> decrement</button>
<br>
<br>

Name:<input type="text"(input)="changeName($event)">
<h2> Your name:{{name}}</h2>
