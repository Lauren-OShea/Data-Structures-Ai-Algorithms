#include <iostream>
#include <vector>
#include <algorithm> 

int main()
{
std::vector<int>scores{
	4200, 1800, 7600 ,3500, 5900,
	2400, 8100, 4600, 3500, 6700};


//Q 1
for (int i =0; i< 10; ++i)
	{
		std::cout << scores[i] << " ";
	}
	

//Q 2
std::cout << "\nSize of vector: " << scores.size() << " " << std::endl;

//Q3
std::cout << "First number in vector: " << scores.front() << std::endl;

//Q 4
if(scores.empty())
{
std::cout << "Vector is empty :(" << std::endl;
}
else
std::cout << "Vector contanins data :)" <<std::endl;

//Q 5
auto it = scores.begin(); 

//Q 6
	std::cout << *it <<" "<< std::endl;

//Q 7
	std::cout << *++it <<" "<< std::endl;


//Q 8
for (auto it = scores.begin(); it!= scores.end(); ++it)
{
	std::cout << *it <<" ";
}



return 0;
}