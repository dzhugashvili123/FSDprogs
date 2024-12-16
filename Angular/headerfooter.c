>ng new component1
>component1> ng g c header
>component1> ng g c footer
________________________________________________________________________
Component1/src/app/app.component.ts
import { Component } from '@angular/core';
import { RouterOutlet } from '@angular/router';
import { HeaderComponent } from './header/header.component';
import { FooterComponent } from './footer/footer.component';
@Component({
  selector: 'app-root',
  standalone: true,
  imports: [RouterOutlet,HeaderComponent,FooterComponent],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  title = 'component1';
}
________________________________________________________________________
Component1/src/app/app.component.html
<hr>
<h1> CREATING TWO COMPONENTS </h1>
<hr>
<app-header> </app-header>
<hr>
<app-footer> </app-footer>
<hr>
________________________________________________________________________
Component1/src/app/header/header.component.html
    <h1>Welcome to the HEADER COMPONENT</h1>
________________________________________________________________________
Component1/src/app/header/header.component.css

h1
{color: red}
________________________________________________________________________
Component1/src/app/footer/footer.component.html
    <h1>Welcome to the FOOTER COMPONENT</h1>
________________________________________________________________________
Component1/src/app/footer/footer.component.css

h1
{color: violet}
