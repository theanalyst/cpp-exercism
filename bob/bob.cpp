#include "bob.h"
#include <cstdio>
#include <cctype>
#include <boost/algorithm/string.hpp>

using namespace std;

namespace bob{

/*
  function to check if a string has an alphabetic character and is all
  uppercase. In case when the string contains no alphabets returns false
*/
    bool all_upper(const string& s){
	auto no_char = false;
	for (const char &c: s){
	    if (islower(c))
		return false;
	    if (isalpha(c))
		no_char = true;
	}
	return no_char;
    }

    string hey(string in){

	boost::trim(in);
	char last = in.back();
	if (in == "")
	    return "Fine. Be that way!";
	else if (all_upper(in))
	    return "Whoa, chill out!";
	else if (last == '?')
	    return "Sure.";
	else
	    return "Whatever.";
    }
}

