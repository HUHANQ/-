#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "vector1"


int main(int argc, char** argv)
{
	if(argc != 2)
	{
		std::cerr<<"参数错误！";
		return 1;
	}
	srand(time(NULL));	

	std::ifstream in(argv[1]);
	
	if(!in)
	{
		std::cerr<<"打开 "<<argv[1]<<"失败!"<<std::endl;
	}

	std::string name;
	
	vector<std::string> names;
	
	while(!in.eof())
	{
		in >> name;
		if(!in) break;
		names.push_back(name);
	}
	std::cout<<"共有"<<name.size()<<"人!"<<std::endl;
	int n,i;
	
	for(i = 0 ; i < 10 ; ++i)
	{
		system("clear");
		n = rand()% names.size();
		std::cout<<names[n]<<std::endl;
		usleep(i * i * 2000);
	}

	return 0;
}
