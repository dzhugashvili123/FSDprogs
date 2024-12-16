>ng new twowaybinding --no-standalone
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
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  title = 'twowaybinding';
  city="hyderabad"
  
}
________________________________________________________________________
src/app/app.component.html
<div>
  <h2>Two-Way Data Binding Example</h2>

  <!-- Two-way binding using ngModel -->
  <label >Enter text:</label>
  <input [(ngModel)]="text"  />
  
  <p>You entered: {{ text }}</p>  <!-- Display the text entered by the user -->
</div>
