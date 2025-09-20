/*
Miles Devine
LA 3.2: Testing with Catch2
*/

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Join function tests", "[join]")
{
	std::vector<std::string> strings{"hello", "hi","hola"};
	

	CHECK( Join(strings,"~") == "hello~hi~hola");
	REQUIRE(Join(strings," ") == "hello hi hola");
}

TEST_CASE ("Even mask function tests", "[even_mask]")
{
	std::vector<int> test_numbers{0, 5, 9, 12, 137, 19, 22, 2, 1};
	std::vector<bool> test_bools{true, false, false, true, false, false, true, true, false};

	std::vector<bool> empty_bool;
	std::vector<int> empty_int;

	CHECK(EvenMask(test_numbers) == test_bools);
	CHECK(EvenMask(empty_int) == empty_bool);
}

TEST_CASE ("SubtractN tests", "[subtract_n]")
{
	std::vector<int> test_ints{1,3, 8,193};
	std::vector<int> result_ints{-1, 1, 6, 191};

	CHECK(SubtractN(test_ints, 2) == result_ints);
	
}

TEST_CASE("RemoveFirstSubstring tests", "[remove_1stsubstring]")
{
	std::string test_string = "HellospaceWorld";
	std::string test_removal1 = "space";
	std::string test_removal2;
	std::string result_string = "HelloWorld";

	CHECK(RemoveFirstSubstring(test_string,test_removal1) == result_string);
	REQUIRE(RemoveFirstSubstring(test_string,test_removal2) == test_string);
}
