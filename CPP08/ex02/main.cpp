#include "MutantStack.hpp"

int main()
{
	{
	std::cout << std::endl;
	std::cout << "............[ TEST: subject example ]............" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	}
	{
	std::cout << std::endl;
	std::cout << "............[ TEST: with ints ]............" << std::endl;
    std::cout << "add 2 ints to stack..." << std::endl;
	MutantStack<int> mutantstack;
    mutantstack.push(1);
    mutantstack.push(2);
    std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
	std::cout << "delete 1 int from stack..." << std::endl;
    mutantstack.pop();
    std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
    std::cout << "add 3 ints to stack..." << std::endl;
	mutantstack.push(3);
    mutantstack.push(4);
    mutantstack.push(5);
	std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
	std::cout << "top of mutantstack: " << mutantstack.top() << std::endl;
	std::cout << "from beginning to end: " << std::endl;
    MutantStack<int>::iterator first = mutantstack.begin();
    MutantStack<int>::iterator last = mutantstack.end();
    while (first != last) {
    	std::cout << *first << std::endl;
    	++first;
    }
	}
	{
	std::cout << std::endl;
	std::cout << "............[ TEST: with string ]............" << std::endl;
	std::cout << "add 2 ints to stack..." << std::endl;
	MutantStack<std::string> mutantstack;
    mutantstack.push("idil1");
    mutantstack.push("idil2");
    std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
	std::cout << "delete 1 int from stack..." << std::endl;
    mutantstack.pop();
    std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
    std::cout << "add 3 ints to stack..." << std::endl;
	mutantstack.push("idil3");
    mutantstack.push("idil4");
    mutantstack.push("idil5");
	std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
	std::cout << "top of mutantstack: " << mutantstack.top() << std::endl;
	std::cout << "from beginning to end: " << std::endl;
    MutantStack<std::string>::iterator first = mutantstack.begin();
    MutantStack<std::string>::iterator last = mutantstack.end();
    while (first != last) {
    	std::cout << *first << std::endl;
    	++first;
    }
	}
	{
	std::cout << std::endl;
	std::cout << "............[ TEST: with list ]............" << std::endl;
	std::cout << "add 2 ints to stack..." << std::endl;
	std::list<int> mutantstack;
    mutantstack.push_back(1);
    mutantstack.push_back(2);
    std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
	std::cout << "delete 1 int from stack..." << std::endl;
    mutantstack.pop_back();
    std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
    std::cout << "add 3 ints to stack..." << std::endl;
	mutantstack.push_back(3);
    mutantstack.push_back(4);
    mutantstack.push_back(5);
	std::cout << "size of mutantstack: " << mutantstack.size() << std::endl;
	std::cout << "from beginning to end: " << std::endl;
    std::list<int>::iterator first = mutantstack.begin();
    std::list<int>::iterator last = mutantstack.end();
    while (first != last) {
    	std::cout << *first << std::endl;
    	++first;
    }
	}
}