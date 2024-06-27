#include <iostream>
#include <array>
#include <string>
#include <algorithm>


//template<typename T>

auto maximun(auto num1, auto num2, auto num3)
{
    auto max = num1;
    if (num2 > max)
        max = num2;

    if (num3 > max)
        max = num3;

    return max;
}

//template specialization
static std::string maximum(std::string a, std::string b, std::string c)
{
 
    size_t len1{ a.length() };
    size_t len2{ b.length() };
    size_t len3{ c.length() };

    if (len1 >= len2 && len1 >= len3)
        return a;

    else if (len2 >= len1 && len2 >= len3)
        return b;
    return c;

  
}
int main()

{
    //bigger integer
    int i1{}, i2{}, i3{};
    std::cin >> i1 >> i2 >> i3;
    

    std::cout << "\nMax amoung these items is: " << maximun(i1, i2, i3) << std::endl; //template instantiation

    //bigger double
    double d1{}, d2{}, d3{};
    std::cin >> d1 >> d2>>d3;


    std::cout << "\nMax amoung these items is: " << maximun(d1, d2, d3) << std::endl;

    //bigger string
    std::string s1{}, s2{}, s3{ 3 };

    std::cin >> s1 >> s2 >> s3;

    std::cout << "\nMax amoung these items is: " << maximun(s1, s2, s3) << std::endl;

    // creating an array of string and searching in the array

    std::array <std::string, 7> colors{ "red", "orange" "green " "yellow" , "blue", "indigo", "violet" };


    for (auto& color : colors)
        std::cout << color << ", ";
    std::cout << std::endl;

    //sort the colors based on the default first character.
    std::sort(colors.begin(), colors.end());

    std::cout << "sorted colors: \n";
    for (auto& color : colors)
        std::cout << color << ", ";
    std::cout << std::endl;

    bool found = std::binary_search(colors.begin(), colors.end(), "indigo");

    {

        if (found)
            std::cout << "Yes";
        else
            std::cout << "no";
    }


    return 0;

   

    

}
