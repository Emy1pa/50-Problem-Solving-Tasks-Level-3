#pragma once
#include <cstdlib>

namespace RandomLib {
	
	int GenerateRandomNumberInRange(int From, int To){
		int RandomNumber = rand() % (To - From + 1) + From;
		return RandomNumber;
	}
}