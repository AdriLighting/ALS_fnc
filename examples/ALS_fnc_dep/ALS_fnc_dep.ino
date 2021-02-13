#include <ALS_fnc.h>

void test_alsfunc(uint8_t v) {
	Serial.printf("\n[test_alsfunc][value: %d]\n", v);
}
void setup()
{
		ALS_fnc_add(test_alsfunc);	
		
		Serial.begin(115200);
		delay(1000);
		
		ALS_fnc_run(0, 28);		
}
void loop()
{
}