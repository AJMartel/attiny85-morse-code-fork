// Version 1.0, made by Fletcher Chr
//VERSION 1.2  by Balam  adaptation to attyny85

byte text[] = "Hello my name is ";         /* the Message in Morse within "  " */



/* pin mark on board  */

int D0 = 0;
int D1 = 1;
int D2 = 2;
int D3 = 3;  

/* time : 1 second = 1000 in arduino land */   



                  
int tempo = 500;                       




void setup () 
{

  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);

 
}


/* blink your message fast so you know is working  */

void start(){    
                       
 for(int i = 0; i < 50; i++){
   digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);   
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH); 
   delay(5);                /*default 25 */
   digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
   delay(5);
 }

 
 delay(3 * tempo); /*default 7 * tempo*/

 
}

/* code that makes led blink as DOTS */

void dot() {                          
 digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);   
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH); 
 delay(1 * tempo);
 digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
 delay(1 * tempo);
}


/* CODE for DASH AND LINES ( SPLASH) */

void dash() {                        
 digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);   
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH); 
 delay(3 * tempo);
 digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
 delay(1 * tempo);
}


/* code for LETTERS - THE MAGIC IS HERE  */

void morse(byte letter)
{           
//  Serial.println(letter, DEC);
 if (letter == 'a' or letter == 'A') {dot(); dash();}
 if (letter == 'b' or letter == 'B') {dash(); dot(); dot(); dot();}
 if (letter == 'c' or letter == 'C') {dash(); dot(); dash(); dot();}
 if (letter == 'd' or letter == 'D') {dash(); dot(); dot();}
 if (letter == 'e' or letter == 'E') {dot();}
 if (letter == 'f' or letter == 'F') {dot(); dot(); dash(); dot();}
 if (letter == 'g' or letter == 'G') {dash(); dash(); dot();}
 if (letter == 'h' or letter == 'H') {dot(); dot(); dot(); dot();}
 if (letter == 'i' or letter == 'I') {dot(); dot();}
 if (letter == 'j' or letter == 'J') {dot(); dash(); dash(); dash();}
 if (letter == 'k' or letter == 'K') {dash(); dot(); dash();}
 if (letter == 'l' or letter == 'L') {dot(); dash(); dot(); dot();}
 if (letter == 'm' or letter == 'M') {dash(); dash();}
 if (letter == 'n' or letter == 'N') {dash(); dot();}
 if (letter == 'o' or letter == 'O') {dash(); dash(); dash();}
 if (letter == 'p' or letter == 'P') {dot(); dash(); dash(); dot();}
 if (letter == 'q' or letter == 'Q') {dash(); dash(); dot(); dash();}
 if (letter == 'r' or letter == 'R') {dot(); dash(); dot();}
 if (letter == 's' or letter == 'S') {dot(); dot(); dot();}
 if (letter == 't' or letter == 'T') {dash();}
 if (letter == 'u' or letter == 'U') {dot(); dot(); dash();}
 if (letter == 'v' or letter == 'V') {dot(); dot(); dot(); dash();}
 if (letter == 'w' or letter == 'W') {dot(); dash(); dash();}
 if (letter == 'x' or letter == 'X') {dash(); dot(); dot(); dash();}
 if (letter == 'y' or letter == 'Y') {dash(); dot(); dash(); dash();}
 if (letter == 'z' or letter == 'Z') {dash(); dash(); dot(); dot();}
 if (letter == '1') {dot(); dash(); dash(); dash(); dash();}
 if (letter == '2') {dot(); dot(); dash(); dash(); dash();}
 if (letter == '3') {dot(); dot(); dot(); dash(); dash();}
 if (letter == '4') {dot(); dot(); dot(); dot(); dash();}
 if (letter == '5') {dot(); dot(); dot(); dot(); dot();}
 if (letter == '6') {dash(); dot(); dot(); dot(); dot();}
 if (letter == '7') {dash(); dash(); dot(); dot(); dot();}
 if (letter == '8') {dash(); dash(); dash(); dot(); dot();}
 if (letter == '9') {dash(); dash(); dash(); dash(); dot();}
 if (letter == '0') {dash(); dash(); dash(); dash(); dash();}

 /* code for empty space / letter   */
 
 if (letter == ' ') {delay(5 * tempo);}  

                       

 
 
 
}




/* HERE IS WHAT MAKES THE LEDS RUN OVER AND OVER AGAIN */



void loop () {
 /*start(); */
 
 for (int i = 0; i < sizeof(text); i++) {
   morse(text[i]);
 }
}
