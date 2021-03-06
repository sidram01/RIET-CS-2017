 const int analogOutPin = 9; // 

 char aa = 0, bb = 0;
 unsigned char val1 = 165, val2 = 86, val3 = 82, val4 = 83; // value output to the PWM (analog out)//val1=181,val2=86,val3=83,val4=82;
 //unsigned int val1=0,val2=333,val3=350,val4=344;
 char e[10], f[10], z, z1, b, a, d[10], c[2];
 void setup() {
   // initialize serial communications at 9600 bps:

   Serial.begin(9600);

 }

 void loop() {

   /* analogWrite(9, val1);  //throttle
    analogWrite(6, val2);   // yaw
    analogWrite(11, val3);   //left right
    analogWrite(10 , val4);   // up down*/

   analogWrite(9, val1); // throttle
   analogWrite(10, val2); // yaw
   analogWrite(11, val3); //left right
   analogWrite(6, val4); // for rev

   if (Serial.available() > 0) {
     c[a] = Serial.read();

     if (c[0] == '1') {
       val1 = 165;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO ");
       c[a] = 0;
     }
     if (c[0] == '2') {
       val1 = 125;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO1 ");
       c[a] = 0;
     }
     if (c[0] == '3') {
       val1 = 120;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO2 ");
       c[a] = 0;
     }
     if (c[0] == '4') {
       val1 = 116;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO3 ");
       c[a] = 0;
     }
     if (c[0] == '5') {
       val1 = 110;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO4 ");
       c[a] = 0;
     }
     if (c[0] == '6') {
       val1 = 106;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO 5");
       c[a] = 0;
     }
     if (c[0] == '7') {
       val1 = 103;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO 6");
       c[a] = 0;
     }
     if (c[0] == '8') {
       val1 = 99;
       analogWrite(9, val1);
       a = 0;
       Serial.print("   THRO7 ");
       c[a] = 0;
     }

     if (c[0] == 'G' && aa == 0) {
       val2 = 106;
       val3 = 82;
       val4 = 83;
       analogWrite(11, val3);
       analogWrite(10, val4);
       analogWrite(6, val2);
       Serial.print(" yaw left");
       a = 0;
       delay(260);
       val2 = 86;
       aa = 1;
       delay(60);
       a = 0;
       c[a] = 0;
     }
     if (c[0] == 'I' && aa == 0) {
       val2 = 58;
       val3 = 82;
       val4 = 83;
       analogWrite(11, val3);
       analogWrite(10, val4);
       analogWrite(6, val2);
       Serial.print("  yaw right");
       a = 0;
       delay(260);
       val2 = 86;
       aa = 1;
       delay(60);
       a = 0;
       c[a] = 0;
     }

     if (c[0] == 'L' && aa == 0) {
       val3 = 58;
       val2 = 86;
       analogWrite(6, val2);
       analogWrite(11, val3);
       Serial.print(" left ");
       a = 0;
       delay(260);
       val3 = 82;
       aa = 1;
       delay(60);
       a = 0;
       c[a] = 0;
     }
     if (c[0] == 'R' && aa == 0) {
       val3 = 106;
       val2 = 86;
       analogWrite(6, val2);
       analogWrite(11, val3);
       Serial.print(" right ");
       a = 0;
       delay(260);
       val3 = 82;
       aa = 1;
       delay(60);
       a = 0;
       c[a] = 0;
     }

     if (c[0] == 'F' && aa == 0) {
       val4 = 106;
       val2 = 86;
       analogWrite(6, val2);
       analogWrite(10, val4);
       Serial.print(" forward ");
       a = 0;
       delay(260);
       val4 = 83;
       aa = 1;
       delay(60);
       a = 0;
       c[a] = 0;
     }
     if (c[0] == 'B' && aa == 0) {
       val4 = 58;
       val2 = 86;
       analogWrite(6, val2);
       analogWrite(10, val4);
       Serial.print("   back ");
       a = 0;
       delay(260);
       val4 = 83;
       aa = 1;
       delay(60);
       a = 0;
       c[a] = 0;
     }

     if (c[0] == 'S') {
       aa = 0;
       Serial.print(" NUTRAL ");
       val2 = 86;
       analogWrite(6, val2); // yaw
       val3 = 82;
       analogWrite(11, val3); //left right
       val4 = 83;
       analogWrite(10, val4); // up down
       a = 0;
       c[a] = 0;
     }
   }
   // throttle

   a = 0;
   delay(10);
 }