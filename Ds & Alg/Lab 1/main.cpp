#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> scores = { 50, 20, 80, 30, 60 };
	std::vector<int> temporary = { 1, 2, 3};

//Q 1
	for (int i =0; i< 5; i++)
	{
		std::cout << scores[i] << " ";
	}
//Q 2
	std::cout << "\nSize of vector: " << scores.size() << " " << std::endl;
//Q 3
	if(scores.empty())
	{
		std::cout << "Vector is empty" << std::endl;
	}
	else 
		std::cout << "Vector contains data" << std::endl;
	
//Q 4
	std::cout << scores.front() << std::endl;
	

//Q 5
	std::cout << temporary.size() << std::endl;
	temporary.clear();
	std::cout << temporary.size() << std::endl;

//Q 6
	scores.push_back(90);
	for (int i =0; i< 6; i++)
	{
		std::cout << scores[i] << " ";
	}

//Q 7

	auto it = scores.begin();

	std::cout <<"\n"<< *it << "\n";
	++it;
	std::cout<< *it << "\n";

//Q 8

	++it;
	std::cout<< *it << "\n";


//Q 9
	for(auto it = scores.begin(); it!= scores.end(); ++it) 
	{
		std::cout << *it <<" ";
	}
	std::cout << "\n";
//Q 10

//it goes past the end value

//Q 11
	for(auto it = scores.begin(); it!= scores.end(); ++it) 
	{
		std::cout << *it + 5 <<" "; //it added 5 to the number
		
	}
	std::cout << "\n";
	//Q 12
for (int i =0; i< 6; i++)
	{
		std::cout << scores[i] << " ";
	}

	std::sort(scores.begin(), scores.end());

	std::cout << "\n";
for (int i =0; i< 6; i++)
	{
		std::cout << scores[i] << " ";
	}

//Q 13
	std::cout << "\n";
	std::reverse(scores.begin(), scores.end());
for (int i =0; i< 6; i++)
	{
		std::cout << scores[i] << " ";
	}

//Q14
std::cout << "\n";
auto found = std::find(scores.begin(), scores.end(), 60);
{
if (*found)
{
std::cout << "found 60!! ";
}
else 
std::cout << "cant find 60!! ";
}

//Q 15
std::cout << "\n";
auto located = std::find(scores.begin(), scores.end(), 999);
{
if (*located)
{
std::cout << "found 999!! ";
}
else 
std::cout << "cant find 999!!";
}

//Q16
std::cout << "\n";
std::for_each(scores.begin(), scores.end(),
	[](int n)
	{
	
		std::cout <<n << " ";

	});

	//Q17
std::cout << "\n";
std::for_each(scores.begin(), scores.end(),
	[](int n)
	{
	
		std::cout <<n * 2<< " ";

	});

//Q 18
std::cout << "\n";
std::for_each(scores.begin(), scores.end(),
	[](int n)
	{
	
		std::cout <<n + 100<< " ";

	});

	return 0;
}