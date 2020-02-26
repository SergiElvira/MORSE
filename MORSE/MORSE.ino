/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 3234;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //S   ** Exemple SOS **
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  punt();
  punt();
  punt();
 
  //Espai entre lletres
  espaiL();
  //S
  punt();
  ratlla();
  espaiL();
  punt();
  ratlla();
  //Espai entre paraules
  espaiL();
   ratlla();
   punt();
   ratlla();
   punt();
   espaiP();
   espaiP();
   espaiP();
   punt();
   ratlla();
   ratlla();
   punt();
   espaiL();
   punt();
   punt();
   ratlla();
   espaiL();
   ratlla();
   espaiL();
   ratlla();
   ratlla();
   ratlla();
   espaiP();
   espaiP();
   espaiP();
   punt();
  ratlla();
  espaiL();
  ratlla();
  ratlla();
  espaiL();
  ratlla();
  ratlla();
  ratlla();
  espaiP();
  espaiP();
  espaiP();
}
//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat);
  delay(1000/velocitat);
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat));
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{  
  delay(6*(1000/velocitat));  
}
