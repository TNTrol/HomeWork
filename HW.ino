#define SIZE 3

void setup() {
    for(int i = 0; i < SIZE; i++)
        pinMode(i,OUTPUT);
}

void set(int a){
    for(int i = 1; i <= SIZE; i++)
        digitalWrite(i, LOW);
    digitalWrite(a, HIGH);
} 

void colorUp(){
  for(int i = 1; i <= 3; i++){ 
    set(i);
    delay(1500);
  }  
}

void colorDown(){
  for(int i = 3; i > 1; i--){ 
    set(i);
    delay(1500);
  } 
}

void loop() {
  colorDown();
  colorUp();
}
