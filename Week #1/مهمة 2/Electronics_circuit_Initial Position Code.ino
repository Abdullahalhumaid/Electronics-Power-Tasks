#include <Servo.h>

// servo 1 settings
Servo servo1; 
//**** servo 1 settings END


// servo 2 settings
Servo servo2; 
//**** servo 2 settings END

// servo 3 settings
Servo servo3; 
//**** servo 3 settings END

// servo 4 settings
Servo servo4; 
//**** servo 4 settings END

// servo 5 settings
Servo servo5; 
//**** servo 5 settings END

void setup() {
  servo1.attach (3); 
  servo2.attach (5); 
  servo3.attach (6); 
  servo4.attach (9); 
  servo5.attach (10); 
}

void loop() {
  
// servo 1 loop settings
  servo1.write(90);
    delay (50);  
  servo1.write(90);
    delay (50); 
  //**** servo 1 loop settings END

  // servo 2 loop settings
  servo2.write(90);
    delay (50);  
  servo2.write(90);
    delay (50); 
  //**** servo 2 loop settings END
  
  // servo 3 loop settings
  servo3.write(90);
    delay (50);  
  servo3.write(90);
    delay (50); 
  //**** servo 3 loop settings END
  
  // servo 4 loop settings
  servo4.write(90);
    delay (50);  
  servo4.write(90);
    delay (50); 
  //**** servo 4 loop settings END
  
  // servo 5 loop settings
  servo5.write(0);
  //**** servo 5 loop settings END
}