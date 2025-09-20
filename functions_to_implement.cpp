/*
Miles Devine
LA 3.2: Testing with Catch2
*/


#include "catch.hpp"
#include <string>
#include <vector>

// Joins all strings in a vector together, using the glue string in between them
std::string Join(std::vector<std::string> pieces, std::string glue)
{
	std::string output_string;

	if (pieces.empty())
	{
		return "The provided vector is empty! ";
	}

	else
	{
		for (int i = 0; i < (int)pieces.size(); i++)
		{
			output_string += pieces[i];
			

			if (i < (int)pieces.size()-1)
			{
				output_string += glue;
			}
		}
	}

	return output_string;
}

// returns a vector with true for even numbers and false for odd numbers
std::vector<bool> EvenMask(const std::vector<int>& numbers)
{
	std::vector<bool> return_vec;

	if (numbers.empty())
	{
		return return_vec;
	}

	for (int i = 0; i < (int)numbers.size(); i++)
	{
		if (numbers[i] % 2 == 0)
		{
			return_vec.push_back(true);
		}

		else if (numbers[i] % 2 != 0)
		{
			return_vec.push_back(false);
		}	
	}

	return return_vec;

}

// subtracts n to each element of the vector
std::vector<int> SubtractN(std::vector<int> int_vec, int n)
{
	for (int i = 0; i < (int)int_vec.size(); i++)
	{
		int_vec[i] -= n;
	}

	return int_vec;
}

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2)
{
	size_t location = s1.find(s2);

	if (location != std::string::npos)
	{
		s1.erase(location,s2.length());
	}

	return s1;
}











