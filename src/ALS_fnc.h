#ifndef ALS_FNC_H
	#define ALS_FNC_H 

	#include <Arduino.h>

	typedef void (*ALS_fncExt)(uint8_t v);  
	class ALS_fnc
	{
	public:
		ALS_fnc(ALS_fncExt f);
		~ALS_fnc();
		ALS_fncExt 		_function;	

	};

	void ALS_fnc_add(ALS_fncExt f);
	
	void ALS_fnc_lampClear();
	void ALS_fnc_lampBri(uint8_t v);
#endif