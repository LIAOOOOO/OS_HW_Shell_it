#include <stdio.h>
#include <string>
#include <cstring>
#include <sstream>
#include <unistd.h>
#include<errno.h>
#include <pwd.h>
#include<iostream>
using namespace std;


int main()
{

	char cwd[100];
    getcwd(cwd, sizeof(cwd));
    cout << "\033[1;32m" << getenv("USER") << "@" << "\033[1;34m" << cwd << ">" << "\033[1;31m" ;
	while(1)
	{
		string word;
		getline(cin,word,'\n');
		stringstream cmd;
		string cut;
		cmd << word;
        getline(cmd,cut,' ');
        getline(cmd,cut,' ');
        
        if(cut == "exit")
        {
        	cout << "\033[1;30m" << "ByeBye!" << endl;
        	break;
        }

        else if(cut == "cd")
        {
        	getline(cmd,cut,' ');
        	if(cut == "..")
        	{
        		chdir("..");
        	}
        	else if(cut[0] == '/')
        	{
                        char tmp[100];
                        strcpy(tmp,cut.c_str());
                        chdir(tmp);                        
        		
        	}
        	else
        	{
                        char temp[100];
                        strcpy(temp,cut.c_str());
                        chdir(temp);
        	}
            getcwd(cwd, sizeof(cwd));
        	cout << "\033[1;32m" <<  getenv("USER") << "@" << "\033[1;34m" << cwd << ">" << "\033[1;31m" ;
        }
        else
        {
        	cout << "\033[1;34m" << "[CMD]" << "\033[1;31m" << cut ;
        	int counter = 0;
        	while(getline(cmd,cut,' '))
        	{
        		if(counter == 0)
        		{
        			cout << "\033[1;34m" << "[ARGV]" << "\033[1;31m"  << cut;
        		}
        		else
        		{
        			cout << "\033[1;31m" << "," << cut;
        		}
        		counter++;
        	}
        	cout << '\n';
            getcwd(cwd, sizeof(cwd));
        	cout << "\033[1;32m" <<  getenv("USER") << "@" << "\033[1;34m" << cwd << ">" << "\033[1;31m" ;

        }
      
      
    }
}
