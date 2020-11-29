#include "ALS_fnc.h"
ALS_fnc 	* ALS_fncArray[10];
int 		ALS_fncArray_pos = 0;
void ALS_fnc_add(ALS_fncExt f) {
	ALS_fncArray[ALS_fncArray_pos] = new ALS_fnc(f);
	ALS_fncArray_pos++;
}
ALS_fnc::ALS_fnc(ALS_fncExt f){
	_function = f;
}

void ALS_fnc_lampClear(){
	ALS_fncArray[0]->_function(0);}
void ALS_fnc_lampBri(uint8_t v){
	ALS_fncArray[1]->_function(v);}