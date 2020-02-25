#define Q12 12
boolean M12 = 0;
#define I3 3  //qidong  
boolean M3 = 0;
#define I4 4  //tingzhi
boolean M4 = 0;
void setup() {
 Serial.begin(9600); 
  pinMode(I3, INPUT_PULLUP);
  pinMode(I4, INPUT_PULLUP);
  pinMode(Q12, OUTPUT);
}

void loop() {
 M3=!digitalRead(I3);  //上拉模式默认1，M3=0
 M4=digitalRead(I4);   //停止按钮，常闭，上拉模式处默认1
 M12=(M3+M12)*M4;       //M12自锁的运算结果。括号外任意一处为零，结果为零。
 digitalWrite(Q12,M12);
 /* Serial.println( "3-4-12" );
 Serial.println( M3 );
 Serial.println( M4 );
 Serial.println( M12 );
 delay（1000）;
   */
 }
