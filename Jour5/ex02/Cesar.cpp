#include "Cesar.hpp"
#include "IEncryptionMethod.hpp"


#include <string>
#include <iostream>
#include <cctype>

Cesar::Cesar()
{
	_baseshift = 3;
}

void Cesar::encryptChar(char plainchar)
{
	if(!isalpha(plainchar))
	{
		std::cout<<plainchar;
	}

	else
	{
		if ((int(plainchar+_currshift)>122)&&(islower(plainchar)))
		{
			std::cout<<char(_currshift+plainchar-122+97-1);
		}



		else if ((int(plainchar+_currshift)>90)&&(isupper(plainchar)))
		{
			std::cout<<char(_currshift+plainchar-90+65-1);
		}



		else
		{
			std::cout<<char(plainchar+_currshift);
		}

	}


	_currshift = (_currshift+1)%26;
	//std::cout<<_currshift;

}

void Cesar::decryptChar(char cypherchar)
{
	if(!isalpha(cypherchar))
	{
		std::cout<<cypherchar;
	}

	else
	{
		if ((int(cypherchar-_currshift)<97)&&(islower(cypherchar)))
		{
			std::cout<<char(122-_currshift+(cypherchar-97)+1);
		}


		else if ((int(cypherchar-_currshift)<65)&&(isupper(cypherchar)))
		{
			std::cout<<char(90-_currshift+(cypherchar-65)+1);
		}


		else
		{
			std::cout<<char(cypherchar-_currshift);
		}

	}
	_currshift=(_currshift+1)%26;
	//std::cout<<_currshift;
}

void Cesar::reset()
{
	_currshift = _baseshift;
}


