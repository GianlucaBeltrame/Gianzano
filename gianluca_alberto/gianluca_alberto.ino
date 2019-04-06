unsigned long start;
int pulsante;    
int led;
int buzz;
int cont;
int verde; 
int rosso;
bool fallito;

void setup() 
{
pulsante = 3;    
led=6;
buzz=7;
cont=8;
verde=9;
rosso=10;
fallito=false;
pinMode(pulsante,INPUT);
pinMode(led,OUTPUT);
pinMode(buzz,OUTPUT);
pinMode(rosso,OUTPUT);
pinMode(verde,OUTPUT);
Serial.begin(9600);

}

void loop() 
{
CalcoloRiflesso("Prova led, premi il bottone per cominciare",led);
cont = start;
CalcoloRiflesso("Prova suono, premi il bottone per cominciare",buzz);
cont = cont + start;                                                    //cont SERVE PER CALCOLARE LA MEDIA ALGEBRICA
if(cont>1000||fallito == true)         
{Serial.println("Hai Fallito, ritenta sarai più fortunato!.");Lampeggi(rosso);fallito = false;}
else
{Serial.println("Ben Fatto. La media del tuo punteggio è = "+String(cont/2)) + "millisecondi";Lampeggi(verde);}

}




