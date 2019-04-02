#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;

int pos = 0;

void setup()
{
  myservo1.attach(8);
  myservo2.attach(7);
  myservo3.attach(6);
  myservo4.attach(5);
  myservo5.attach(4);
  myservo6.attach(3);
  myservo7.attach(2);
}


void loop()
{
  delay (1000);


  for(pos = 90; pos > 90; pos -=1 )
  {
    myservo1.write(pos);
    delay(10);
  }
  for(pos = 90; pos > 30; pos -=1 )
  {
    myservo2.write(pos);
    delay(10);
  }
  for(pos = 90; pos < 160; pos +=1 )
  {
    myservo3.write(pos);
    delay(10);
  }
  delay (14000);

//====================================================
//              Поворачивает голову на встречу Брату


 for(pos = 90; pos > 75; pos -=1 )
  {
    myservo1.write(pos);
    delay(10);
  }

 //====================================================
 //                  Здоровается с Братом

  for(pos = 160; pos > 115; pos -=1 )
  {
    myservo3.write(pos);
    delay(20);
  }

    delay (3000);

  for(pos = 115; pos  < 160; pos +=1 )
  {
    myservo3.write(pos);
    delay(10);
  }


  //====================================================
  //              Поворачивает голову на камеру

 for(pos = 90; pos < 140; pos +=1 )
  {
    myservo1.write(pos);
    delay(15);
  }
 //====================================================
 //                  Начинает поворот

   for(pos = 90; pos < 105; pos += 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 90; pos > 80; pos -=1 )
  {
    myservo5.write(pos);
    delay(15);
  }

  for(pos = 105; pos > 70; pos -= 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 80; pos < 90; pos += 1)
  {
    myservo5.write(pos);
    delay(15);
  }
      for(pos = 70; pos < 105; pos += 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 90; pos > 80; pos -=1 )
  {
    myservo5.write(pos);
    delay(15);
  }

  for(pos = 105; pos > 70; pos -= 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 80; pos < 90; pos += 1)
  {
    myservo5.write(pos);
    delay(15);
  }
     for(pos = 70; pos < 105; pos += 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 90; pos > 80; pos -=1 )
  {
    myservo5.write(pos);
    delay(15);
  }

  for(pos = 105; pos > 70; pos -= 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 80; pos < 90; pos += 1)
  {
    myservo5.write(pos);
    delay(15);
  }
     for(pos = 70; pos < 105; pos += 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 90; pos > 80; pos -=1 )
  {
    myservo5.write(pos);
    delay(15);
  }

  for(pos = 105; pos > 70; pos -= 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

  for(pos = 80; pos < 90; pos += 1)
  {
    myservo5.write(pos);
    delay(15);
  }
     for(pos = 70; pos < 90; pos += 1)
  {
    myservo6.write(pos);
    myservo7.write(pos);
    delay(15);
  }

 //====================================================
 //                  Поворачивает голову на камеру
 for(pos = 140; pos > 130; pos -=1 )
  {
    myservo1.write(pos);
    delay(15);
  }

 //====================================================
 //                  Машет рукой в камеру
 for(pos = 30; pos < 130; pos +=1 )
  {
    myservo2.write(pos);
    delay(10);
  }
   for(pos = 130; pos > 100; pos -=1 )
  {
    myservo2.write(pos);
    delay(10);
  }
   for(pos = 100; pos < 130; pos +=1 )
  {
    myservo2.write(pos);
    delay(10);
  }
   for(pos = 130; pos > 30; pos -=1 )
  {
    myservo2.write(pos);
    delay(10);
  }

    delay (10000);

  //====================================================
 //                  Поворачивает голову
 for(pos = 130; pos > 80; pos -=1 )
  {
    myservo1.write(pos);
    delay(15);
  }

   delay (4000);

 //====================================================
 //                  Показывает на динамик второго робота
 for(pos = 30; pos < 90; pos +=1 )
  {
    myservo2.write(pos);
    delay(15);
  }

    delay (5000);


 //====================================
 //                  Качает левой рукой

  for(pos = 160; pos > 150; pos -=1 )
  {
    myservo3.write(pos);
    delay(20);
  }
   for(pos = 150; pos < 170; pos +=1 )
  {
    myservo3.write(pos);
    delay(20);
  }
  for(pos = 170; pos > 150; pos -=1 )
  {
    myservo3.write(pos);
    delay(20);
  }
   for(pos = 150; pos < 160; pos +=1 )
  {
    myservo3.write(pos);
    delay(20);
  }
 //====================================================
 //                  Поворачивает голову
 for(pos = 90; pos < 140; pos +=1 )
  {
    myservo1.write(pos);
    delay(20);
  }

    delay (5000);


 //====================================================
 //                  Показывает на антенну второго робота


   for(pos = 90; pos < 120; pos +=1 )
  {
    myservo2.write(pos);
    delay(20);
  }

    delay (5000);


 //====================================================
 //                  Опускает руку

     for(pos = 120; pos > 30; pos -=1 )
  {
    myservo2.write(pos);
    delay(20);
  }

  delay (5000);

 //====================================================
 //                  Машет рукой
 for(pos = 30; pos < 130; pos +=1 )
  {
    myservo2.write(pos);
    delay(10);
  }
   for(pos = 130; pos > 100; pos -=1 )      
  {
    myservo2.write(pos);
    delay(10);
  }
   for(pos = 100; pos < 130; pos +=1 )
  {
    myservo2.write(pos);
    delay(10);
  }
   for(pos = 130; pos > 30; pos -=1 )
  {
    myservo2.write(pos);
    delay(10);
  }
  delay (15000);
}
