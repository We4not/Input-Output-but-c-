#include <iostream>
#include <vector>
#include <array>
int main()
{
	std::vector <int> data_input = {
		0, 1, 0,
		1, 0, 1,
		0, 0, 0
	};
	std::vector <int> data_output; // in here, we don't write anything
	for (int i = 0; i < data_input.size(); i++)
	{
		if (data_input[i] == 1)
		{
			data_output.push_back(data_input[i] - 1);
		}
		if (data_input[i] == 0)
		{
			data_output.push_back(data_input[i] + 1);
		}
	}
	std::cout << "Input:  ";
	for (int i = 0; i < data_input.size(); i++)
	{
		std::cout << data_input[i];
		if (i != (data_input.size() - 1))
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
	std::cout << "Output: ";
	for (int i = 0; i < data_output.size(); i++)
	{
		std::cout << data_output[i];
		if (i != (data_output.size() - 1))
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
}
