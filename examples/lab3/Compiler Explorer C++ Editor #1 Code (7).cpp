#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main()
{
    string input = "1232131` qwer as wetyuy sda sadasd g231hgh2 123";
    vector<string> process;
    size_t beginOfWord = 0;
    for (size_t i = 0 ; i < input.size(); i++)
    {
        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
        {
            string temp = input.substr(beginOfWord, i - beginOfWord);
            beginOfWord = i+1;
            process.push_back(temp);
        }
        if (i == input.size()-1){
            string temp = input.substr(beginOfWord);
            process.push_back(temp);
        }
    }

    std::string acc = "";

    for(auto s : process){
        //cout << s << endl;
        if (s.size()>3)
            acc += s + " ";
    }

    cout << acc << endl;

    return 0;
}