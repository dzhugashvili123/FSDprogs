>ng new directives --no-standalone
________________________________________________________________________
Src/app/app.module.ts
import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { FormsModule } from '@angular/forms';

@NgModule({
  declarations: [
    AppComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    FormsModule
    
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
________________________________________________________________________
src/app/app.component.ts
import { Component } from '@angular/core';
@Component({
  selector: 'app-root',
  templateUrl: './app.component.html'
})
export class AppComponent {
  isVisible = true;  // Boolean variable to control visibility

  toggleVisibility() {
    this.isVisible = !this.isVisible;  // Toggle the visibility of the element
    
  }

  items = ['Apple', 'Banana', 'Orange', 'Grapes'];  // Array to iterate over

color: string = 'red';  // Default color

  changeColor(newColor: string) {
    this.color = newColor;  // Change the color based on button click

  }
}
________________________________________________________________________
src/app/app.component.html

<h1> EXAMPLE FOR DIRECTIVES IN ANGULAR</h1>
<h1> ngIf </h1>
<div *ngIf="isVisible">
  <p>This element is visible because 'isVisible' is true.</p>
</div>

<button (click)="toggleVisibility()">Toggle Visibility</button>

<h1> ngFor </h1>
<ul>
  <li *ngFor="let item of items; let i = index">
    {{ i + 1 }}. {{ item }}

      </li>
</ul>

<h1> ngSwitch </h1>
<div [ngSwitch]="color">
  <div *ngSwitchCase="'red'">The color is red!</div>
  <div *ngSwitchCase="'blue'">The color is blue!</div>
  <div *ngSwitchCase="'green'">The color is green!</div>
  <div *ngSwitchDefault>The color is unknown!</div>
</div>

<button (click)="changeColor('red')">Red</button>
<button (click)="changeColor('blue')">Blue</button>
<button (click)="changeColor('green')">Green</button>
<button (click)="changeColor('yellow')">Yellow</button>
