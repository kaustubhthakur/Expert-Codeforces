#include <iostream>
#include <map>
using namespace std;

int main()
{
// Create a map of strings to integers
map<string, int> map;

// Insert some values into the map
map["one"] = 1;
map["two"] = 2;
map["three"] = 3;
map.insert({"five",5});
cout<<map.size()<<endl;
cout<<map.count("one")<<endl;
return 0;
}
