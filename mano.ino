#include <Servo.h>

 

Servo myservo1;

Servo myservo2;

Servo myservo3;

Servo myservo4;

Servo myservo5;

Servo myservo6;

Servo myservo7;

Servo myservo8;

Servo myservo9;

Servo myservo10;

int B=20;

 

 

int pos = 0;    // variable to store the servo position

 

void setup()

{

  Serial.begin(9600);

  myservo1.attach(2); 

  myservo2.attach(3);

  myservo3.attach(4); 

  myservo4.attach(5);

  myservo5.attach(6); 

  myservo6.attach(7);

  myservo7.attach(8); 

  myservo8.attach(9);

  myservo9.attach(10); 

  myservo10.attach(11);

}

 

void loop()

{

  Serial.print("posicion inicial\n");

   myservo1.write(180);

   myservo2.write(180);

   myservo3.write(180);

   myservo4.write(180);

   myservo5.write(180);

   myservo6.write(180);

   myservo7.write(180);

   myservo8.write(180);

   myservo9.write(180);

   myservo10.write(180);

  

    Serial.print("dedo 1\n");

    for (pos = 180; pos >= 0; pos -= 1) {

    myservo1.write(pos);

    myservo2.write(pos);             

    delay(B);                      

  }

    for (pos = 0; pos <= 180; pos += 1)

    {

    myservo1.write(pos);

    myservo2.write(pos); // tell servo to go to position in variable 'pos'

    delay(B);                      

  }

 

  //////////////////////////////////////////////////////////////////////////////////////////

   Serial.print("dedo 2\n");

   for (pos = 180; pos >= 0; pos -= 1) {

    

    myservo3.write(pos);

    myservo4.write(pos);             

    delay(B);                      

  }

    for (pos = 0; pos <= 180; pos += 1)

    {

    myservo3.write(pos);

    myservo4.write(pos); // tell servo to go to position in variable 'pos'

    delay(B);                       

  }

////////////////////////////////////////////////////////////////////////////////////////

  Serial.print("dedo 3\n");

   for (pos = 180; pos >= 0; pos -= 1) {

    myservo7.write(pos);

    myservo8.write(pos);             

    delay(B);                       

  }

    for (pos = 0; pos <= 180; pos += 1)

    {

    myservo7.write(pos);

    myservo8.write(pos); // tell servo to go to position in variable 'pos'

    delay(B);                      

  }

   ////////////////////////////////////////////////////////////////////////////////////////

  Serial.print("dedo 4\n");

   for (pos = 180; pos >= 0; pos -= 1) {

    myservo5.write(pos);

    myservo6.write(pos);             

    delay(B);                      

  }

    for (pos = 0; pos <= 180; pos += 1)

    {

    myservo5.write(pos);

    myservo6.write(pos); // tell servo to go to position in variable 'pos'

    delay(B);                      

  }

   ////////////////////////////////////////////////////////////////////////////////////////

  Serial.print("dedo 5\n");

   for (pos = 180; pos >= 0; pos -= 1) {

    myservo9.write(pos);

    myservo10.write(pos);             

    delay(B);                      

  }

    for (pos = 0; pos <= 180; pos += 1)

    {

    myservo9.write(pos);

    myservo10.write(pos);

    delay(B);                      

  }

  Serial.print("dedo 44\n");

   for (pos = 180; pos >= 0; pos -= 1) {

   

    myservo3.write(pos);

    myservo4.write(pos);

    myservo5.write(pos);

    myservo6.write(pos);

    myservo7.write(pos);

    myservo8.write(pos);

    myservo9.write(pos);

    myservo10.write(pos);             

    delay(B);                      

  }

    for (pos = 0; pos <= 180; pos += 1)

    {

     

    

    myservo3.write(pos);

    myservo4.write(pos);

    myservo5.write(pos);

    myservo6.write(pos);

    myservo7.write(pos);

    myservo8.write(pos);

    myservo9.write(pos);

    myservo10.write(pos);             

    delay(B);                              

  }

}
