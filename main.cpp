#include <iostream>

template<typename T, typename X> 
T prompt(X message) {
	std::cout << message;
	T x;
	std::cin >> x;
	return x;
}

int main() {
	int m = prompt<int>("Please provide the max iterations to be ran: ");
	for (int i = 0; i <= m; i++) {
		if (i%15==0) {
			std::cout << "FizzBuzz" << std::endl;
		} else if (i%5==0) {
			std::cout << "Buzz" << std::endl;
		} else if (i%3==0) {
			std::cout << "Fizz" << std::endl;
		} else {
			std::cout << i << std::endl;
		}
	}
}
