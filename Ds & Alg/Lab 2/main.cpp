#include <iostream>
#include <vector>
#include <algorithm> 

int main()
{
std::vector<int>scores{
	4200, 1800, 7600 ,3500, 5900,
	2400, 8100, 4600, 3500, 6700};

std::vector<int>originalScores = scores;


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

//Task 2
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

std::cout << "\n";

//Task 3
//Q 9
std::sort(scores.begin(), scores.end());
//Q 10
for (int i=0; i< 10; i++)
{
	std::cout <<scores[i] << " ";
}
std::cout << "\n";
#//Q 11
std::reverse(scores.begin(),scores.end());

//Q 12
for (int i =0; i< 10; i++)
	{
		std::cout << scores[i] << " ";
	}


//Q 3A 
//I think using std::sort eliminates any possible errors that 
//I could make writing it and it makes the code cleaner

//Task 4
int input = 0;
std::cout << "\n";
std::cout << "enter number: " << std::endl;
std::cin >> input;


auto found = std::find(scores.begin(), scores.end(), input);
{
	if(found != scores.end())
		{
		std::cout << "Score found!!!" << std::endl;
		}
	else
		{
		std::cout << "Score not found :(" << std::endl;
		}
}

//Task 5

//Q13
std::cout << "\n";
std::for_each(scores.begin(), scores.end(),
	[](int n)
	{
//Q 14
		std::cout <<n << "Points ";
	});

//Q15

std::cout << "\n";
std::for_each(scores.begin(), scores.end(),
	[](int& n)
	{
		n += 250;
//Q 16
		std::cout<< n<< std::endl;
	});

//Q 17

int count =0;
for (int i =0; i< 10; ++i)
	{
		std::cout << originalScores[i] << " ";
//Q 18	
		count++;
	}
	
	std::cout << "\n";
	std::cout << "Number of scores: "<< count <<std::endl;
	std::cout << originalScores.front() << std::endl;

//Q 19

int userInput = 0;
std::cout << "\n";
std::cout << "enter number: " << std::endl;
std::cin >> userInput;

auto foundIt = std::find(originalScores.begin(), originalScores.end(), userInput);
{
	if(foundIt != originalScores.end())
		{
		std::cout << "Score found!!!" << std::endl;
		}
	else
		{
		std::cout << "Score not found :(" << std::endl;
		}
}

std::cout << "\n";
std::for_each(originalScores.begin(), originalScores.end(),
	[](int& n)
	{
		n += 250;
//Q 16
		std::cout<< n<< std::endl;
	});

return 0;
}



//Short reflection
//Q1
//std::vector<int>scores{1,2,3,4};

//Q2
//for (auto it = scores.begin(); it!= scores.end(); ++it)
//{
//	std::cout << *it <<" ";
//}

//Q3
//scores.front()
//scores.reverse()

//Q4 
//containers hold the variables in the vector, iterators gets the data needed to preform the algorithm
//algorithm is the command that carries out the instructions