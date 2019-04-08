/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/
int output = 13;
int G3 = 196.0;
int a3 = 220.0;
int B3 = 246.9;
int C4 = 262;
int D4 = 294;
int E4 = 330;
int F4 = 349;
int F45 = 370.0;
int G4 = 392;
int a4 = 440.0;
int B4 = 493.9;
int C5 = 523.3;
int D5 = 587.3;
int E5 = 659.3;
int F5 = 698.5;
int F55 = 740.0;
int G5 = 784.0;
int a5 = 880.0;
int B5 = 987.8;
int C6 = 1047;
int C65 = 1109;
int D6 = 1175;
int sixteenth = 187.5;
int eighth = 375;
int quarter = 750;
int dotquarter = 1125;
int halfnote = 1500;

const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

void setup()
{
for (int i = 0; i < 1; i++){
       pinMode(8,OUTPUT);//
    // line 1

  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

 
    tone(output, G5);    // tone(outputPin,frequency)
      delay(quarter);  //  delay(milliseconds) 
    noTone(output);
      delay(eighth);
    // C4
    tone(output, D5);   
      delay(eighth);  
  
    // Measure 2, 2 seconds
    // C4
    tone(output, G5);    
      delay(quarter);
          noTone(output);
      delay(eighth);  
    // D4
    tone(output, D5);    
      delay(eighth);  
    // E4
    tone(output, G5);    
      delay(eighth);   
    tone(output, D5);    
      delay(eighth);
    tone(output, G5);  
      delay(eighth); 
    // E4
    tone(output, B5);    
      delay(eighth); 
    // F4
    tone(output, D6);
    digitalWrite(8,HIGH);    
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
  delay(quarter);
    noTone(output);
      delay(quarter); 
    tone(output, C6);    
      delay(quarter);
          noTone(output);
      delay(eighth);
    tone(output, a5);
    delay(10);   // Delay for 10 ms (1/100th of a second);    
      delay(eighth);
    tone(output, C6);    
      delay(quarter);
    noTone(output);
      delay(eighth);
    tone(output, a5);
        digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);    
      delay(eighth);
    tone(output, C6);
        digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
      delay(eighth);
    tone(output, a5);    
      delay(eighth);
    tone(output, F55);    
      delay(eighth);
    tone(output, a5);    
      delay(eighth);
    tone(output, D5);
    digitalWrite(8, LOW);
     digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW); 
      delay(quarter);
          noTone(output);
      delay(quarter); 
      // Measure 5, 2 seconds
  tone(output, G5); // tone(outputPin,frequency)
    delay(eighth);  //  delay(milliseconds)
  noTone(output);
    delay(eighth);
  tone(output, G5);  
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
    delay(quarter);  
      noTone(output);
    delay(10);
  // Measure 2, 2 seconds
  // C4
  tone(output, G5); 
    delay(eighth);
         // D4
  tone(output, B5); 
    delay(eighth); 
  // E4
  tone(output, a5); 
    delay(eighth);  
  // Measure 3, 2 seconds
  // E4
  tone(output, G5); 
    delay(eighth);
      noTone(output);
    delay(10);
 //measure 6
  // D4
  tone(output, G5); 
    delay(eighth);
  // E4
  tone(output, F55);
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH); 
    delay(eighth);
          noTone(output);
    delay(10);
  // F4
  tone(output, F55); 
    delay(quarter);
          noTone(output);
    delay(10);
    tone(output, F55); 
    delay(eighth);
         tone(output, a5); 
    delay(eighth);
  tone(output, C6); 
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
    delay(eighth);
   tone(output, F55); 
    delay(eighth);
    //7
  tone(output, a5);
    delay(eighth);
  tone(output, G5); 
    delay(eighth);
          noTone(output);
    delay(5);
  tone(output, G5);  
    delay(quarter);
          noTone(output);
    delay(10);
  tone(output, G5); 
    delay(eighth);
  tone(output, B5); 
    delay(eighth);
     tone(output, a5); 
    delay(eighth);
    tone(output, G5); 
    delay(eighth);
          noTone(output);
    delay(10);
    //Measure 8
         tone(output, G5); 
    delay(eighth);
  tone(output, F55); 
    delay(eighth);
          noTone(output);
    delay(10);
   tone(output, F55); 
       digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
    delay(quarter);
          noTone(output);
    delay(10);
  tone(output, F55);
    delay(eighth);
  tone(output, a5); 
    delay(eighth);
  tone(output, C6);  
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
    delay(eighth);
  tone(output, F55); 
    delay(eighth);
    //Measure 9
     tone(output, G5); 
    delay(eighth);
          noTone(output);
    delay(10);
  tone(output, G5); 
    delay(eighth);
   tone(output, F55); 
    delay(eighth);
  tone(output, E5);
    delay(sixteenth);
  tone(output, F55); 
    delay(sixteenth);
  tone(output, G5);  
    delay(eighth);
          noTone(output);
    delay(10);
  tone(output, G5); 
    delay(eighth);
    tone(output, a5); 
    delay(eighth);
  tone(output, G5); 
    delay(sixteenth);
   tone(output, a5); 
    delay(sixteenth);
    //Measure 10
  tone(output, B5);
    delay(eighth);
                noTone(output);
    delay(10);
  tone(output, B5); 
    delay(eighth);
  tone(output, C6);  
    delay(eighth);
  tone(output, B5); 
    delay(sixteenth);
    tone(output, C6); 
    delay(sixteenth);
  tone(output, D6);
      digitalWrite(8,HIGH);  
    delay(quarter);
    noTone(output);
        digitalWrite(8,LOW);
    delay(quarter);
    //Measure 11
  tone(output, D5); 
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
    delay(halfnote);
    tone(output, E5); 
    delay(halfnote);
    //Measure 12
    tone(output, D5);
    delay(eighth);
  tone(output, C5); 
    delay(eighth);
          noTone(output);
    delay(10);
  tone(output, C5);  
    delay(quarter);
          noTone(output);
    delay(10);
  tone(output, C5); 
    delay(eighth);
  
    tone(output, B4); 
    delay(eighth);
          noTone(output);
    delay(10);
  tone(output, B4); 
  delay(quarter);
        noTone(output);
    delay(10);
  //Measure 13
  tone(output, B4);
      digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
    delay(eighth);
  tone(output, a4); 
    delay(eighth);
          noTone(output);
    delay(10);
  tone(output, a4);  
    delay(quarter);
  tone(output, G4); 
    delay(eighth);
    tone(output, F45); 
        digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
    delay(eighth);
  tone(output, E4); 
  delay(eighth);
    tone(output, F45);
        digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
    delay(eighth);
     ///Start of 4th Line
 ///1st Measure
 tone(output,G4 );
 delay(eighth);
 noTone(output);
 delay(eighth);
 tone(output,a4 );
 delay (eighth);
 noTone(output);
 delay(eighth);
 tone(output,B4 );
 delay (eighth);
 noTone(output);
 delay(dotquarter);
 ///2nd Measure
 tone(output,D5 );
     digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
 delay (halfnote);
 tone(output,E5);
 delay(halfnote);
 ///3rd Measure
tone(output, D5);
delay (eighth);
noTone(output);
delay (10);
tone(output, C5);
delay(eighth);
noTone(output);
delay (10);
tone(output,C5 );
delay (eighth);
noTone(output);
delay (10);
tone(output, C5);
delay(eighth);
noTone(output);
delay (10);
 tone(output,C5 );
 delay(eighth);
 noTone(output);
delay (10);
 tone(output, B4);
 delay(eighth);
noTone(output);
delay (10);
 tone(output,B4 );
 delay (eighth);
 noTone(output);
delay (10);
 tone(output, B4);
 delay(eighth);
 ///4th Measure
 tone(output,B4 );
     digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
 delay (eighth);
 tone(output, a4 );
 delay(eighth);
 noTone(output);
delay (10);
 tone(output, a4 );
 delay(eighth);
 noTone(output);
delay (10);
 tone(output, a4 );
 delay(eighth);
 noTone(output);
delay (10);
 tone(output, G4);
 delay (eighth);
 tone(output, F45);
 delay(eighth);
 tone(output,E4 );
 delay (eighth);
 tone(output, F45);
     digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
 delay(eighth);
 ///5th measure
 tone(output,G4 );
 delay (halfnote);
 noTone (output);
 delay(eighth);
 tone(output, F45);
 delay (sixteenth);
 tone(output, G4);
 delay(sixteenth);
 tone(output, a4);
 delay (eighth);
tone(output, F45);
delay(eighth);
noTone(output);

 ///End of 4th Line

 /// Start of 5th Line
 
 ///1st measure
  tone(output, B4);
    delay(halfnote);  
  noTone(output);
    delay(eighth);
  tone(output, a4);   
    delay(sixteenth);   
  tone(output, B4); 
delay(sixteenth); 
tone(output, C5);
delay (eighth);
tone(output, a4);
delay (eighth);
///2nd measure
tone (output, D5);
delay (halfnote);
tone (output, E5);
delay (quarter);
tone (output, F55);
delay (quarter);
///3rd measure
tone (output, G5);
delay (quarter);
tone(output, a5);
delay (quarter);
tone(output, B5);
delay (quarter);
tone(output, C65);
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
delay(quarter);
///4th measure
tone(output, D6);
    digitalWrite(8,HIGH);
delay ( dotquarter);
tone(output, a5);
    digitalWrite(8,LOW);
delay(eighth);
tone( output, C65);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
delay(eighth);
tone(output, a5);
delay (eighth);
tone(output, C65);
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
delay (eighth);
tone(output, a5);
delay(eighth);
noTone(output);

///end of 5th line 

    tone(output,D6); 
        digitalWrite(8,HIGH);// tone(outputPin,frequency)
      delay(dotquarter);  //  delay(milliseconds) 
    tone(output,a5);
        digitalWrite(8,LOW);   
      delay(eighth);   
   tone(output,C65);
       digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);    
      delay(eighth);  
   tone(output,a5);    
      delay(eighth); 
    tone(output, C65); 
        digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);   
      delay(eighth);  
   
    tone(output,a5);    
      delay(eighth);
 
    // measure 
    tone(output,D6);
        digitalWrite(8,HIGH);
        digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
      delay(eighth); 
    // E4
    noTone(output);
      delay(15);
    tone(output,D6);    
      delay(quarter); 
    // F4
    noTone(output);
      delay(15);
    tone(output,D6);    
      delay(quarter);
    noTone(output);
      delay(15);
    tone(output,D6);    
      delay(quarter);
    noTone(output);
      delay(15);
    tone(output,D6);    
      delay(eighth);
 noTone(output);
      delay(15);
   
    tone(output,D6);    
      delay(eighth);
     noTone(output);
      delay(15);
    tone(output,D6);    
      delay(quarter);
     noTone(output);
      delay(15);
    tone(output,D6);    
      delay(quarter);
     noTone(output);
      delay(15);
    tone(output,D6);
      delay(quarter);
     noTone(output);
      delay(15);
    tone(output,D6);    
      delay(eighth);
      
    tone(output,C65);
        digitalWrite(8,LOW);
        digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);    
      delay(eighth);
    tone(output,a5);    
      delay(eighth);
    tone(output,D6); 
        digitalWrite(8,HIGH);   
      delay(eighth);
    tone(output, a5);
        digitalWrite(8,LOW);
      delay(eighth);
    tone(output,C65);
      delay(eighth);
    tone(output,a5);
      delay(eighth);
    tone(output,D6);
        digitalWrite(8,HIGH);
      delay(eighth);
    tone(output,a5);
        digitalWrite(8,LOW);
      delay(eighth);
      
    tone(output,C65);
      delay(quarter);
    noTone(output);
      delay(quarter);
    tone(output,a5);
      delay(quarter);
    noTone(output);
      delay(quarter);
    
    tone(output,D6);
        digitalWrite(8,HIGH);
        digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
      delay(quarter);
    noTone(output);
        digitalWrite(8,LOW);
      delay(quarter);
    tone(output,D5);
      delay(quarter);
    noTone(output);
      delay(quarter);
    tone(output,D5);
      delay(dotquarter);
    tone(output,C5);
      delay(sixteenth);  
    tone(output,B4);
      delay(sixteenth);
    tone(output,a4);
      delay(sixteenth);
    tone(output,G4);
        digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
      delay(eighth);
    noTone(output);
      delay(eighth);
    tone(output,E5);
      delay(eighth);
    noTone(output);
      delay(eighth);
    tone(output,C5);
      delay(eighth);
    noTone(output);
      delay(eighth);
    tone(output,a4);
      delay(eighth);
    noTone(output);
      delay(eighth);
    tone(output,D5);
        digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
      delay(eighth);
    noTone(output);
      delay(eighth);
    noTone(output);
      delay(quarter);
    tone(output,B5);
      delay(dotquarter);
    tone(output,a5);
      delay(sixteenth);
    tone(output,G5);
      delay(sixteenth);
    tone(output,F5);
      delay(sixteenth);
    tone(output,E5);
      delay(eighth);
    noTone(output);
      delay(eighth);
    tone(output,C6);
      delay(eighth);
    noTone(output);
      delay(eighth);
//end of line7

tone(output,B5); 
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);//tone(outputPin,frequency)}
  delay(halfnote);  //delay(milliseconds)
tone(output,a5);
delay(quarter);
 noTone(output);
delay(quarter);

noTone(output);
delay(eighth);

tone(output,D6);
    digitalWrite(8,HIGH);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
delay(quarter);
noTone(output);
delay(10);

tone(output,D6);
delay(quarter);
noTone(output);
delay(10);

tone(output,D6);
delay(quarter);
noTone(output);
delay(10);

tone(output,D6);
delay(eighth);
noTone(output);
delay(10);

tone(output,D6);
delay(eighth);
noTone(output);
delay(10);

tone(output,D6);
delay(eighth);
noTone(output);
delay(10);

tone(output,D6);
delay(eighth);
noTone(output);
delay(10);

tone(output,D6);
delay(eighth);
noTone(output);
delay(10);

tone(output,D6);
delay(eighth);
noTone(output);
delay(10);

tone(output,C6);
    digitalWrite(8,LOW);   
digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
delay(eighth);

tone(output,a5);
delay(eighth);

tone(output,F55);
delay(eighth);

noTone(output);
delay(10);

tone(output,F55);
delay(eighth);

tone(output,G5);
delay(eighth);

noTone(output);
delay(eighth);


tone(output,E5);
delay(eighth);

noTone(output);
delay(10);

tone(output,E5);
delay(eighth);

tone(output,D5);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
delay(eighth);


noTone(output);
delay(eighth);


tone(output,F55);
delay(eighth);

// end of line 8
// start line 9

tone(output,G5);    
digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
delay(quarter);

noTone(output);
delay(eighth);

tone(output,D5);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
delay(eighth);

tone(output,G5);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
delay(eighth);

tone(output,D5);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
delay(eighth);

tone(output,B4);
delay(eighth);

tone(output,D5);
delay(eighth);

tone(output,G4);
delay(quarter);

noTone(output);
delay(eighth);

tone(output,D4);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
delay(eighth);

tone(output,G4);
delay(eighth);

tone(output,D4);
delay(eighth);

tone(output,B3);
delay(eighth);

tone(output,D4);
delay(eighth);

tone(output,G3);
delay(quarter);

noTone(output);
delay(quarter);

tone(output,G4);
delay(quarter);


noTone(output);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
delay(quarter);

tone(output,B3);
    digitalWrite(8,HIGH);
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
delay(quarter);
    // END
    noTone(output);
        digitalWrite(8,LOW);
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);// stop playing
}
}
 
void loop()
{
 
}
