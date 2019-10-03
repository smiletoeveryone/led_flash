#include <stdio.h>
#include <wiringPi.h>

#define LedPin 1

int main(void) {
        if(wiringPiSetup() == -1) { 
		printf("setup wiringPi failed !\n");
                return -1;
        }

        pinMode(LedPin, OUTPUT);
        for(int i=1; i<10; i++) {
                digitalWrite(LedPin, LOW);   //led on
                printf("led on\n");
                delay(500);	             // wait 0.5 sec
                digitalWrite(LedPin, HIGH);  //led off
                printf("led off\n");
                delay(500);                  // wait 0.5 sec
        }
        return 0;
}
