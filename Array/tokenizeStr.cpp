// Tokenizing a string using stringstream
#include<bits/stdc++.h>
#include<string>
using namespace std;

/*int main()
{
	string line = "GeeksForGeeks is a must try";

	// Vector of string to save tokens
	vector <string> tokens;

	// Stringstream class check1
	stringstream check1(line);

	string intermediate;

	while(getline(check1, intermediate, ' '))
	{
		tokens.push_back(intermediate);
	}
	// Printing the token vector
	for(int i = 0; i<tokens.size(); i++)
		cout<<tokens[i]<<'\n';
	return 0;
}*/

// C/C++ program for splitting a string
// using strtok()
/*int main()
{
	char str[] = "Geeks-for-Geeks";

	// Returns first token
	char *token = strtok(str, "-");

	// Keep printing tokens while one of the
	// delimiters present in str[].
	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, "-");
	}
	return 0;
}*/

// Driver function
/*int main()
{
	// Declaration of string
	char gfg[100] = "Geeks - for - geeks - Contribute";

	// Declaration of delimiter
	const char s[4] = "-";
	char* tok;

	// Use of strtok
	// get first token
	tok = strtok(gfg, s);

	// Checks for delimeter
	while(tok != 0) {
		printf(" %s\n", tok);

		// Use of strtok
		// got through other tokens
		tok = strtok(0, s);
	}
	return 0;
}*/

// strtok_r()
/*int main()
{
    char str[] = "Geeks for Geeks";
    char *token;
    char *rest = str;
  
    while ((token = strtok_r(rest, " ", &rest)))
        printf("%s\n", token);
  
    return(0);
}*/


// CPP program for above approach
#include<iostream>
#include<regex>
#include<string>
#include<vector>

/**
* @brief Tokenize the give vector according to the regex
* and remove the empty tokens
*
* @param str
* @param re
* @return std::vector<std::string>
*/
std::vector<std::string> tokenize(
                     const std::string str,
                          const std::regex re)
{
    std::sregex_token_iterator it{ str.begin(), 
                             str.end(), re, -1 };
    std::vector<std::string> tokenized{ it, {} };
  
    // Additional check to remove empty strings
    tokenized.erase(
        std::remove_if(tokenized.begin(), 
                            tokenized.end(),
                       [](std::string const& s) {
                           return s.size() == 0;
                       }),
        tokenized.end());
  
    return tokenized;
}
  
// Driver Code
int main()
{
    const std::string str = "Break string 
                   a,spaces,and,commas";
    const std::regex re(R"([\s|,]+)");
    
    // Function Call
    const std::vector<std::string> tokenized = 
                           tokenize(str, re);
    
    for (std::string token : tokenized)
        std::cout << token << std::endl;
    return 0;
}