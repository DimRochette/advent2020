#pragma once

#include <filesystem>

std::filesystem::path advent_input()
{
	std::filesystem::path folder(R"(C:/dev/advent/day03)");
	folder/="input.txt";
	return folder;
}