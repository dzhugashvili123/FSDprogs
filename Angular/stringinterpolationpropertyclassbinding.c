Databinding/src/app/app.component.ts
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
  title = 'databinding';
  isdisabled:boolean=true;
  isactive:boolean=true;
  
}
________________________________________________________________________
Databinding/src/app/app.component.html

<h4> String interpolation</h4>
result:{{100+20}} <br>
title:{{title}}

<h4> property binding</h4>
Name: <input type='text'>
<button [disabled]=isdisabled> submit</button><br>

<h4> class binding</h4>
<h1 [class]="isactive?'active':'inactive'"> welcome to class  binding</h1>
________________________________________________________________________
Databinding/src/app/app.component.css
.active{
    color:blue
}
.inactive{
    color:green
}
