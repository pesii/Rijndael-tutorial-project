#pragma once

class Rijndael {
public:
	Rijndael(); 
	~Rijndael();
	
	// ## The AES algorithm has 4 transformations ##

	void AddRoundKey();
	void SubBytes();
	void MixColumn(); // <3
	void ShiftRows();
private:

} ;