#include <iostream>
#include <vector>
std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    
    std::vector<std::string> result;
    result.insert(result.end(), names1.begin(), names1.end());
    result.insert(result.end(), names2.begin(), names2.end());
   // int n=result.size()-1;
    for(int i=0;i<result.size()-1;i++){
        for(int j=i+1;j<result.size();j++){
            if(result[i] == result[j])
        {
            result.erase(result.begin()+i);
            i--;
        }
        }
    }
    return result;
}
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}