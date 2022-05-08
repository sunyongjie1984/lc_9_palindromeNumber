//
//  main.cpp
//  9_palindromeNumber
//
//  Created by 孙永杰 on 2022/4/27.
//

#include <cmath>
#include <iostream>
#include <vector>
class Solution_9 {
public:
    bool isPalindrome(int x) {
        if ( x < 0 || x < pow( -2, 31) || x > pow( 2, 31) - 1 )
            return false;
        if ( x == 0 )
            return true;
        std::vector<int> number;
        while (  x != 0 ) {
           int l = x % 10;
           number.push_back( l );
           x = x / 10;
        }
        std::vector< int >::size_type size = number.size( );
        for ( int j = 0; j < size / 2; ++j ) {
            if ( number[ j ] != number[ size - j - 1 ] ) {
                return false;
            }
        }
        return true;
    }
};

int main( ) {
    Solution_9 a;
    std::cout << " 121 is Palindrome ? := " << a.isPalindrome( 121 ) << std::endl;
    std::cout << " 122 is Palindrome ? := " << a.isPalindrome( 122 ) << std::endl;
    std::cout << " 10 is Palindrome ? := " << a.isPalindrome( 10 ) << std::endl;
    std::cout << " 101 is Palindrome ? := " << a.isPalindrome( 101 ) << std::endl;
    return 0;
}
