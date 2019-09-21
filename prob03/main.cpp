// Random Rectangle

  #include <iostream>
  #include <iomanip>
  #include <ctime>
  #include <random>
  #include <string>

  int main()
{
    // I are setting a constant which will have height as 3 always no matter
    // the length of the rectangle which is limited having a base and length of
    // 40.
    const int HEIGHT = 3;

    srand(time(0));
    int max = 40;
    int length;
    length = rand() % max + 1;

    // Assigned the length to a character/
    std::string rectangle;
    rectangle.assign(length,'#');
    rectangle.assign(length,'#');
    rectangle.assign(length,'#');

    //displayed the output of our function to the program for the user to see.

    std::cout << rectangle << std::endl;
    std::cout << rectangle << std::endl;
    std::cout << rectangle << std::endl;


    return 0;
}
