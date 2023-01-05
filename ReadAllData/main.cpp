  #include <iostream>
  #include <fstream>
  using namespace std;

  int main()
  {
  // Open a file
  ifstream input("score.txt");

 double sum = 0;
 double number;
 while (!input.eof()) // Continue if not end of file
  {
 input >> number; // Read data
 cout << number << " "; // Display data
 sum += number;
 }
//emk
 input.close();

 cout << "\nSum is " << sum << endl;

 return 0;
 }


/*
 * Sample preview code
 * This is a block comment
 */

/*
#include <iostream> // this is a line comment
#include <cstdio>

  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)


int main(int argc, char **argv)
{
    int total;
	/// This is a documentation comment line
	int numbers[20];
	int average = 0;
	char ch = '\n';
	for (int i = 0; i < 20; ++i) // a breakpoint is set
	{
		numbers[i] = i; // active line (during debugging)
		 total += i; // error line
	}
	average = total / 20;
	std::cout << numbers[0] << '\n' << numbers[19] << ch;
	std::cout << "total : " << total << ", and average : " << average << ch;
	std::cout << "Press any key..." << ch;
	int getch();


}
*/
