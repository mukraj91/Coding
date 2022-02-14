#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;


void printMap(string comment, const map<string, int>& m_list)
{


// c++98 
cout<<comment<<endl;
for(map<string, int>::const_iterator it = m_list.begin(); it != m_list.end(); it++)
{
    cout<<it->first<< " "<<it->second << " ";
}

cout<<endl;
}


int main()
{

// Create a map
map<string, int>map_list{{"CPU", 10}, {"GPU", 20}, {"RAM", 30}};

  printMap("1 Initial map: ", map_list);

  map_list["CPU"] = 100;
  map_list.insert(make_pair("CUP",200)); // using this map key should be duplicate

  printMap("2 After update: ", map_list);
  
  map_list.erase("CPU");
  printMap("3 After erase: ", map_list);

  //std::erase_if(map_list, [](const auto& pair){  return pair.second > 25; });
   std::erase_if(map_list, [](const auto& pair){ return pair.second > 25; });
  printMap("4 After erase_if: ", map_list);
    return 0;
}