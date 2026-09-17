#include <iostream>
#include <vector>
using namespace std;

template <typename T>

T largest(vector<T> values)
{

T largestValue = values[0];
for (T value : values)
{
    if ( value > largestValue)
    {
        largestValue = value;
    }
}
return largestValue;

}

template <typename T>
T smallest(vector<T> values)
{

    T smallestValue = values[0];
    for (T value: values)
    {
        if(value < smallestValue)
        {
            smallestValue = value;
        }
    }
    return smallestValue;
}

template <typename T>
T added(vector<T> values)
{

    T added = values[0];
    for (T value: values)
    {
        
    }
    return added;
}
    

int main()
{
vector<int> scores = {120, 450, 230, 900 ,340};
vector<float> speeds = {3.5f, 7.2f, 4.8f, 9.1f};
int total  = 0;
int count = 0;


for (int score : scores)
{
    cout << score << std::endl;
    total = total + score;

    if (score > 300)
    {
        count++;
    }
}
cout << total << std::endl;
cout << count << std::endl;

cout<< "Highest score: " << largest(scores) << endl;
cout<< "Fastest speed: " << largest(speeds) << endl;
cout<< "Smallest score: " << smallest(scores) << endl;
cout<< "Slowest speed: " << smallest(speeds) << endl;

return 0;
}