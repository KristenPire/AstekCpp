#include "OneTime.hpp"
#include "IEncryptionMethod.hpp"

#include <iostream>
#include <string>
#include <cctype>

OneTime::OneTime(const std::string &key)
{
	_basekey = key;
	_pos =0;
}

void OneTime::reset()
{
	_currkey = _basekey;
}


void OneTime::encryptChar(char plainchar)
{
	if (!isalpha(plainchar))
	{
		std::cout<<plainchar;
	}

	else
	{
		if (isupper(plainchar))
		{
			std::cout<<char(plainchar+(toupper(_currkey[_pos])-65));
		}
		else if (islower(plainchar))
		{
			std::cout<<char(plainchar+(tolower(_currkey[_pos])-97));
		}
	}

	_pos = (_pos + 1)%_currkey.size();
}