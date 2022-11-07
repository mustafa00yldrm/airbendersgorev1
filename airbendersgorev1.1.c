#include <iostream>
#define g 9.8


int main() {
  
    int t;
    float mesafe;
	std::cout<< "Cismin kac saniyedir dusute oldugunu giriniz:";
    std::cin>>t;
    std::cout<< std::endl;
    mesafe=0.5*g*t*t;
    std::cout<< "Cismin katettigi mesafe:" << mesafe<< std::endl;
    
  
    return 0;
	
}
