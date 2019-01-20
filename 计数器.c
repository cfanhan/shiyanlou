 boolean M3 = 0;  //记录按钮状态
 boolean M30 = 1; // 记录旧的按钮状态
  boolean M4 = 0;  //记录按钮状态
 boolean M40 = 1; // 记录旧的按钮状态
#define I3 3  //按钮  
#define I4 4  //清零  
int c1 = 0;  //计数器

void setup() {
 Serial.begin(9600); 
  pinMode(I3, INPUT_PULLUP); //上拉模式
  pinMode(I4, INPUT_PULLUP);
}

void loop() {
M3=!digitalRead(I3);  //上拉模式默认1，M3=0
M4=!digitalRead(I4);
 if (M3!=M30)   //按钮是否切换状态1 执行下面代码
 {
  if (M3==1)   //只判断按钮恢复后执行计数器+
  {
    c1++;
    Serial.print("c1:" );
    Serial.println(c1 );
    }
}
M30=M3; //状态记录
delay(20);  //消除抖动
if (M4!=M40)   //按钮是否切换状态1 执行下面代码
 {
  if (M4==1)   //只判断按钮恢复后执行计数器清零
  {
    c1=0;
    Serial.print("qing_ling_OK_c1:" );
    Serial.println(c1 );
    }
}
M40=M4; //状态记录
}




