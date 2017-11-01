// FileMerge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#define TXT1 "D:\\HKU\\DEV\\OOP\\merge1.txt"
#define TXT2 "D:\\HKU\\DEV\\OOP\\merge2.txt"
#define OUT1 "D:\\HKU\\DEV\\OOP\\merger.txt"

int main()
{
	std::ifstream in_stream1;
	std::ifstream in_stream2;
	std::ofstream out_stream;
	std::string out1;
	std::string out2;

	in_stream1.open(TXT1);
	in_stream2.open(TXT2);
	out_stream.open(OUT1);


	std::vector<std::string> out1vector;
	std::vector<std::string> out2vector;


	while (!in_stream1.eof()) {

		getline(in_stream1, out1);
		out1vector.push_back(out1);
	}

	while (!in_stream2.eof()) {
		getline(in_stream2, out2);
		out2vector.push_back(out2);
	}

	for (int i = 0; i < out1vector.size(); i++) {
		out_stream << out1vector.at(i) << std::endl;
		out_stream << out2vector.at(i) << std::endl;
	}

	in_stream1.close();
	in_stream2.close();
	out_stream.close();
	return 0;

}

