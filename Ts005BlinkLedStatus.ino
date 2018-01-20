/*
  Blink met Led_status Bool variabele.
*/
#define FALSE  0
#define TRUE   1


// Declareer geheugen voor een variabele
// De bool is een echte digitale variabele en kan alleen TRUE (1) of FALSE (0) aannemen.
bool Led_Status = FALSE; // Declareer Led_Status en initialiseer die gelijk op FALSE
// Een opdracht in 'C' wordt afgesloten met een puntcomma ';'


// Reserveer geheugen voor een variabele en geef het een naam.
byte byteTeller = 0; // maak de varuiabele aan en zet de waarde op nul.
// Een byte is 8 bit lang en kan daardoor 256 waarden aannemen (2^8) van 0 tot 255.


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);   // open the serial port at 9600 bps:    
}

// the loop function runs over and over again forever
void loop() 
{
  Serial.println( "" );
  Serial.println( "Begin loop" );     
  //   init                  voorwaarde               teller bewerking. 
  for( byteTeller=0;         byteTeller < 15;        byteTeller = byteTeller + 1 ) // probeer byteTeller++ eens i.p.v.  byteTeller = byteTeller + 1
  {
    digitalWrite(LED_BUILTIN, Led_Status);  
    
    //  Als de vergelijking tussen de haakjes waar is worden de opdracht daarop volgend uitgevoerd.   
    if (byteTeller < 5)    
      delay(200);                       // wait for a 200 msecond
    else    
      delay(50);                       // wait for a 50 msecond

    switch(byteTeller )  
    {
      case 1 : 
        Serial.print ( "Eén       "  );
        break;          
      case 2 : 
        Serial.print ( "Twee      "  );
        break;          
      case 3 : 
        Serial.print ( "Drie      "  );
        break;          
      case 4 : 
        Serial.print ( "Vier      "  );
        break;          
      case 5 : 
        Serial.print ( "Vijf      "  );
        break;          
      case 6 : 
        Serial.print ( "Zes       "  );
        break;          
      case 7 : 
        Serial.print ( "Zeven     "  );
        break;          
      case 8 : 
        Serial.print ( "Acht      "  );
        break;          
      case 9 : 
        Serial.print ( "Negen     "  );
        break;          
      case 10: 
        Serial.print ( "Tien      "  );
        break;          
      case 11: 
        Serial.print ( "Elf       "  );
        break;          
      case 12: 
        Serial.print ( "Twaalf    "  );
        break;          
      case 13 : 
        Serial.print ( "Dertien   "  );
        break;          
      case 14 : 
        Serial.print ( "Veertien  "  );
        break;          
      case 15 : 
        Serial.print ( "Vijftien  "  );
      default : 
        Serial.print ( "Niet in de lijst! ");
        break;      
    }    
    Serial.println( byteTeller );       
    Led_Status = !Led_Status;
  } 
}
