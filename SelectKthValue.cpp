// SelectKthValue.cpp
// Written by Sarah Arnott
// 9/3/2020
// CIS 263
//

#include <iostream>
#include <algorithm>
#include <sstream>;

//prototype
int rtnKth(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);

//calls rtnKth and prints to the console
int main()
{
    //ints to store user input
    int a; int b; int c; int d; int e; int f; int g; int h; int i; int j; int k;
    //accepting input from user
    std::cout << "Create a list of 10 integers to use. Enter an integer:";
    std::cin >> a;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> b;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> c;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> d;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> e;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> f;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> g;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> h;
    std::cout << "\n";

    std::cout << "Enter an integer: ";
    std::cin >> i;
    std::cout << "\n";

    std::cout << "Enter your final integer: ";
    std::cin >> j;
    std::cout << "\n";

    std::cout << "Great! Now enter the place of the kth-most integer you want from that list.";
    std::cout << "\n";
    std::cin >> k;
    if (!(k >= 0 && k <= 10)) {
        std::cout << "Please enter a valid value for k.";
        std::cout << "\n";
        std::cin >> k;
    }
    
    int r = rtnKth(a, b, c, d, e, f, g, h, i, j, k);
    std::cout << "\nYour result is ";
    std::cout << r;

    //test on unsorted list of ints
    //int rtn = rtnKth(3, 5, 12, 45, 16, -1, 69, 420, 666, -22, 9); //should return 420
    //std::cout << "\n";
    //std::cout << rtn;

    //test on sorted list of ints
    //int test = rtnKth(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2); //should return 1
    //std::cout << "\n";
    //std::cout << test;
}


//Takes 10 integers and an integer k and returns the kth integer from the first 10 integers
int rtnKth(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k) {
    //declare array
    int arr[10] = { a, b, c, d, e, f, g, h, i, j };

    //sorting array acsending order
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + n);

    //print array to debug
    std::ostringstream os;
    for (int z : arr) {
        os << z;
        os << " ";
    }
    std::string str(os.str());
    std::cout << "Your list is: " << str << " " << std::endl;

    return arr[k - 1];

}
