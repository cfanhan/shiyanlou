 boolean M3 = 0;  //记录按钮状态
 boolean M30 = 1; // 记录旧的按钮状态
#define I3 3  //按钮  
int c = 0;  //计数器
void setup() {
 Serial.begin(9600); 
  pinMode(I3, INPUT_PULLUP); //上拉模式
}

void loop() {
M3=!digitalRead(I3);  //上拉模式默认1，M3=0
 if (M3!=M30)   //按钮按下为0，不等于1 执行下面代码
 {
  if (M3==1)   //只判断按钮恢复后执行计数器+
  {
    c++;
    Serial.print("c:" );
    Serial.println(c );
    }
}
M30=M3; //记录旧的状态
delay(20);

}
