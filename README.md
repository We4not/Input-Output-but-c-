# Input-Output, but C++
You maybe known repository [Input-Output](https://github.com/We4not/Input-Output), where i created in python.<br>
This is the same, but with vectors and the C++ programming language. So let's go.<br> 
# How it works?
We have a vector input and vector output
``` c++
std::vector <int> data_input = {
	0, 1, 0,
	1, 0, 1,
	0, 0, 0
};
std::vector <int> data_output; // in here, we don't write anything
```
Each step, we check if the element of vector ***data_input*** is 1, then we write to vector ***data_output***, decrementing by one if the element is 0 then we write in exactly the same way to ***data_output***, but only increase by one
``` c++
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
```
And we show ***data_input*** and ***data_output***
``` c++
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
```
Result:
```
Input:  0, 1, 0, 1, 0, 1, 0, 0, 0
Output: 1, 0, 1, 0, 1, 0, 1, 1, 1
```
We can also reduce the number of elements in vector ***data_input***, and the number of elements in vector ***data_output*** will be exactly the same as in vector ***data_input***
``` c++
std::vector <int> data_input = { 1, 0, 1 };
```
and result is:
```
Input:  1, 0, 1
Output: 0, 1, 0
```