//to start the OS, open the serial monitor and write the letter 'p' in it

const int fn = 400;
const int hn = 200;
const int qn = 100;
const int f5 = 698;
const int c6 = 1047;
const int b5 = 988;
const int gh5 = 831;
const int ch6 = 1109;
const int dh6 = 1245;
int buzzer = 8;  
int led = 12;
int song[] = 
{
  f5,fn + hn,
  c6,hn,
  b5,qn,
  c6,qn,
  b5,qn,
  c6,qn,
  b5,hn,
  c6,hn,
  gh5,fn,
  f5,fn + hn,
  f5,hn,
  gh5,hn,
  c6,hn,
  ch6,fn,
  gh5,fn,
  ch6,fn,
  dh6,fn,
  c6,hn,
  ch6,hn,
  c6,hn,
  ch6,hn,
  c6,fn
 };

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

// the loop routine runs over and over again forever:
void loop() {
  
  char cosa_letto=Serial.read();
  
  if(cosa_letto=='l'){
    Serial.println("Aviable commands:");
   Serial.println("List of the songs = b");
   Serial.println("List pf the possible commands for the LEDs = c");
  }

 if(cosa_letto=='s'){
    Serial.println("Song list:");
   Serial.println("We Are Number One = w");
   Serial.println("Super Mario Bros (1985) = q");
  }

   if(cosa_letto=='p'){
   Serial.println("Welcome to unOS");
   Serial.println("List of the possibile commands = l"); 
   Serial.println("Descrption = o"); 
   }

    if(cosa_letto=='o'){
    Serial.println("Description:");
    Serial.println("Welcome to unOS! This is a wanna-be operative system developed for Arduino Uno");    
    Serial.println("Credits = m");
    }

   
    if(cosa_letto=='w')
    {
      Serial.println("Wait for the end of the execution...");
      for (int i = 0; i < (sizeof(song)/sizeof(int)); i = i + 2)
      {
        tone(8, song[i]);
        delay(song[i + 1]);
      }
      noTone(8);
      delay(1000);
      Serial.println("We Are Number One with a buzzer executed... OK");
   }
   if(cosa_letto=='q')
   {
      Serial.println("Wait for the end of the execution...");
      pinMode(8,OUTPUT); 
      tone(buzzer, 660 ,100);
      delay ( 150);
      tone(buzzer, 660 ,100);
      delay ( 300);
      tone(buzzer, 660 ,100);
      delay ( 300);
      tone(buzzer, 510 ,100);
      delay ( 100);
      tone(buzzer, 660 ,100);
      delay ( 300);
      tone(buzzer, 770 ,100);
      delay ( 550);
      tone(buzzer, 380 ,100);
      delay ( 575);
      
      tone(buzzer, 510 ,100);
      delay ( 450);
      tone(buzzer, 380 ,100);
      delay ( 400);
      tone(buzzer, 320 ,100);
      delay ( 500);
      tone(buzzer, 440 ,100);
      delay ( 300);
      tone(buzzer, 480 ,80);
      delay ( 330);
      tone(buzzer, 450 ,100);
      delay ( 150);
      tone(buzzer, 430 ,100);
      delay ( 300);
      tone(buzzer, 380 ,100);
      delay ( 200);
      tone(buzzer, 660 ,80);
      delay ( 200);
      tone(buzzer, 760 ,50);
      delay ( 150);
      tone(buzzer, 860 ,100);
      delay ( 300);
      tone(buzzer, 700 ,80);
      delay ( 150);
      tone(buzzer, 760 ,50);
      delay ( 350);
      tone(buzzer, 660 ,80);
      delay ( 300);
      tone(buzzer, 520 ,80);
      delay ( 150);
      tone(buzzer, 580 ,80);
      delay ( 150);
      tone(buzzer, 480 ,80);
      delay ( 500);
      
      tone(buzzer, 510 ,100);
      delay ( 450);
      tone(buzzer, 380 ,100);
      delay ( 400);
      tone(buzzer, 320 ,100);
      delay ( 500);
      tone(buzzer, 440 ,100);
      delay ( 300);
      tone(buzzer, 480 ,80);
      delay ( 330);
      tone(buzzer, 450 ,100);
      delay ( 150);
      tone(buzzer, 430 ,100);
      delay ( 300);
      tone(buzzer, 380 ,100);
      delay ( 200);
      tone(buzzer, 660 ,80);
      delay ( 200);
      tone(buzzer, 760 ,50);
      delay ( 150);
      tone(buzzer, 860 ,100);
      delay ( 300);
      tone(buzzer, 700 ,80);
      delay ( 150);
      tone(buzzer, 760 ,50);
      delay ( 350);
      tone(buzzer, 660 ,80);
      delay ( 300);
      tone(buzzer, 520 ,80);
      delay ( 150);
      tone(buzzer, 580 ,80);
      delay ( 150);
      tone(buzzer, 480 ,80);
      delay ( 500);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 760 ,100);
      delay ( 100);
      tone(buzzer, 720 ,100);
      delay ( 150);
      tone(buzzer, 680 ,100);
      delay ( 150);
      tone(buzzer, 620 ,150);
      delay ( 300);
      
      tone(buzzer, 650 ,150);
      delay ( 300);
      tone(buzzer, 380 ,100);
      delay ( 150);
      tone(buzzer, 430 ,100);
      delay ( 150);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      tone(buzzer, 430 ,100);
      delay ( 150);
      tone(buzzer, 500 ,100);
      delay ( 100);
      tone(buzzer, 570 ,100);
      delay ( 220);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 760 ,100);
      delay ( 100);
      tone(buzzer, 720 ,100);
      delay ( 150);
      tone(buzzer, 680 ,100);
      delay ( 150);
      tone(buzzer, 620 ,150);
      delay ( 300);
      
      tone(buzzer, 650 ,200);
      delay ( 300);
      
      tone(buzzer, 1020 ,80);
      delay ( 300);
      tone(buzzer, 1020 ,80);
      delay ( 150);
      tone(buzzer, 1020 ,80);
      delay ( 300);
      
      tone(buzzer, 380 ,100);
      delay ( 300);
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 760 ,100);
      delay ( 100);
      tone(buzzer, 720 ,100);
      delay ( 150);
      tone(buzzer, 680 ,100);
      delay ( 150);
      tone(buzzer, 620 ,150);
      delay ( 300);
      
      tone(buzzer, 650 ,150);
      delay ( 300);
      tone(buzzer, 380 ,100);
      delay ( 150);
      tone(buzzer, 430 ,100);
      delay ( 150);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      tone(buzzer, 430 ,100);
      delay ( 150);
      tone(buzzer, 500 ,100);
      delay ( 100);
      tone(buzzer, 570 ,100);
      delay ( 420);
      
      tone(buzzer, 585 ,100);
      delay ( 450);
      
      tone(buzzer, 550 ,100);
      delay ( 420);
      
      tone(buzzer, 500 ,100);
      delay ( 360);
      
      tone(buzzer, 380 ,100);
      delay ( 300);
      tone(buzzer, 500 ,100);
      delay ( 300);
      tone(buzzer, 500 ,100);
      delay ( 150);
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 760 ,100);
      delay ( 100);
      tone(buzzer, 720 ,100);
      delay ( 150);
      tone(buzzer, 680 ,100);
      delay ( 150);
      tone(buzzer, 620 ,150);
      delay ( 300);
      
      tone(buzzer, 650 ,150);
      delay ( 300);
      tone(buzzer, 380 ,100);
      delay ( 150);
      tone(buzzer, 430 ,100);
      delay ( 150);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      tone(buzzer, 430 ,100);
      delay ( 150);
      tone(buzzer, 500 ,100);
      delay ( 100);
      tone(buzzer, 570 ,100);
      delay ( 220);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 760 ,100);
      delay ( 100);
      tone(buzzer, 720 ,100);
      delay ( 150);
      tone(buzzer, 680 ,100);
      delay ( 150);
      tone(buzzer, 620 ,150);
      delay ( 300);
      
      tone(buzzer, 650 ,200);
      delay ( 300);
      
      tone(buzzer, 1020 ,80);
      delay ( 300);
      tone(buzzer, 1020 ,80);
      delay ( 150);
      tone(buzzer, 1020 ,80);
      delay ( 300);
      
      tone(buzzer, 380 ,100);
      delay ( 300);
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 760 ,100);
      delay ( 100);
      tone(buzzer, 720 ,100);
      delay ( 150);
      tone(buzzer, 680 ,100);
      delay ( 150);
      tone(buzzer, 620 ,150);
      delay ( 300);
      
      tone(buzzer, 650 ,150);
      delay ( 300);
      tone(buzzer, 380 ,100);
      delay ( 150);
      tone(buzzer, 430 ,100);
      delay ( 150);
      
      tone(buzzer, 500 ,100);
      delay ( 300);
      tone(buzzer, 430 ,100);
      delay ( 150);
      tone(buzzer, 500 ,100);
      delay ( 100);
      tone(buzzer, 570 ,100);
      delay ( 420);
      
      tone(buzzer, 585 ,100);
      delay ( 450);
      
      tone(buzzer, 550 ,100);
      delay ( 420);
      
      tone(buzzer, 500 ,100);
      delay ( 360);
      
      tone(buzzer, 380 ,100);
      delay ( 300);
      tone(buzzer, 500 ,100);
      delay ( 300);
      tone(buzzer, 500 ,100);
      delay ( 150);
      tone(buzzer, 500 ,100);
      delay ( 300);
      
      tone(buzzer, 500 ,60);
      delay ( 150);
      tone(buzzer, 500 ,80);
      delay ( 300);
      tone(buzzer, 500 ,60);
      delay ( 350);
      tone(buzzer, 500 ,80);
      delay ( 150);
      tone(buzzer, 580 ,80);
      delay ( 350);
      tone(buzzer, 660 ,80);
      delay ( 150);
      tone(buzzer, 500 ,80);
      delay ( 300);
      tone(buzzer, 430 ,80);
      delay ( 150);
      tone(buzzer, 380 ,80);
      delay ( 600);
      
      tone(buzzer, 500 ,60);
      delay ( 150);
      tone(buzzer, 500 ,80);
      delay ( 300);
      tone(buzzer, 500 ,60);
      delay ( 350);
      tone(buzzer, 500 ,80);
      delay ( 150);
      tone(buzzer, 580 ,80);
      delay ( 150);
      tone(buzzer, 660 ,80);
      delay ( 550);
      
      tone(buzzer, 870 ,80);
      delay ( 325);
      tone(buzzer, 760 ,80);
      delay ( 600);
      
      tone(buzzer, 500 ,60);
      delay ( 150);
      tone(buzzer, 500 ,80);
      delay ( 300);
      tone(buzzer, 500 ,60);
      delay ( 350);
      tone(buzzer, 500 ,80);
      delay ( 150);
      tone(buzzer, 580 ,80);
      delay ( 350);
      tone(buzzer, 660 ,80);
      delay ( 150);
      tone(buzzer, 500 ,80);
      delay ( 300);
      tone(buzzer, 430 ,80);
      delay ( 150);
      tone(buzzer, 380 ,80);
      delay ( 600);
      
      tone(buzzer, 660 ,100);
      delay ( 150);
      tone(buzzer, 660 ,100);
      delay ( 300);
      tone(buzzer, 660 ,100);
      delay ( 300);
      tone(buzzer, 510 ,100);
      delay ( 100);
      tone(buzzer, 660 ,100);
      delay ( 300);
      tone(buzzer, 770 ,100);
      delay ( 550);
      tone(buzzer, 380 ,100);
      delay ( 575);
      Serial.println("Super Mario Bros (1988) with a buzzer excuted... OK");
    }

    if(cosa_letto=='c')
    {
      Serial.println("Commands for the LEDs");
      Serial.println("Turn ON LED = a");
      Serial.println("Turn OFF LED=s");
    }
 
  if(cosa_letto=='a')
  {
      Serial.println("Wait for the end of the execution...");
      digitalWrite(led,HIGH);
       Serial.println("Led turned ON... OK");
  }
  if(cosa_letto=='s')
  {
     
      Serial.println("Wait for the end of the execution...");    
      digitalWrite(led,LOW);
      Serial.println("Led turned OFF... OK");
  }

if(cosa_letto=='m'){
      Serial.println("Credits:");
       Serial.println("Creator : viksn0w - based on my original sketches and codes from 2016");
    }
    
}
