
#include "AFMotor.h" 
#include "Ultrasonic.h" 
#include "Wire.h" 

AF_DCMotor motor1(1); 
AF_DCMotor motor2(2);
AF_DCMotor motor3(3); 
AF_DCMotor motor4(4);

unsigned char velocidade = 0; 
const int DISTMAX = 256;
const int divide = 25; 

HC_SR04 sensor1(31,33);
HC_SR04 sensor2(45,47);
HC_SR04 sensor3(48,46);

void setup() {
  Serial.begin(9600);
}

void motor(int velo,int velo2){
      motor1.setSpeed(0); 
      motor1.run(RELEASE);         
      motor2.setSpeed(0); 
      motor2.run(RELEASE);         
      motor3.setSpeed(0); 
      motor3.run(RELEASE);        
      motor4.setSpeed(0); 
      motor4.run(RELEASE);  
}

void mover_frente(int velo, int velo2){
        motor1.setSpeed(velo); 
      motor1.run(FORWARD);         
      motor2.setSpeed(velo); 
      motor2.run(FORWARD);         
      motor3.setSpeed(velo); 
      motor3.run(FORWARD);        
      motor4.setSpeed(velo); 
      motor4.run(FORWARD);
}

void mover_re(int velo, int velo2){
        motor1.setSpeed(velo); 
      motor1.run( BACKWARD);         
      motor2.setSpeed(velo); 
      motor2.run(BACKWARD);         
      motor3.setSpeed(velo); 
      motor3.run(BACKWARD);        
      motor4.setSpeed(velo); 
      motor4.run(BACKWARD);
}
void mover_direita(int velo, int velo2){
      motor1.setSpeed(velo); 
      motor1.run(FORWARD);         
      motor2.setSpeed(velo); 
      motor2.run(FORWARD);         
      motor3.setSpeed(velo); 
      motor3.run(BACKWARD);        
      motor4.setSpeed(velo); 
      motor4.run(BACKWARD);
}
void mover_esquerda(int velo, int velo2){
      motor1.setSpeed(velo); 
      motor1.run(BACKWARD);         
      motor2.setSpeed(velo); 
      motor2.run(BACKWARD);         
      motor3.setSpeed(velo); 
      motor3.run(FORWARD);        
      motor4.setSpeed(velo); 
      motor4.run(FORWARD);
}


void loop() {
  long distancia1,distancia2,distancia3;
  int velo, velo2;


   distancia2=sensor2.distance();
   delay(300);

   
 Serial.println(distancia2);


if (distancia2 < 80){
  Serial.println("meio");                                                                                                                                                                                                                                                                                                                                      \
 mover_direita(70,70);
 delay(1000);

}

else{
 mover_frente(50,50);
  delay(10);
 }
}
