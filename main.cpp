// LinkedListExe.cpp : Defines the entry point for the console application.
//

#include "Node.h"



// This code is just sandbox code
int main1()
{

	std::shared_ptr<Node<int>>  head = nullptr;

	std::shared_ptr<Node<int>>  cur = nullptr;

	head = std::make_shared<Node<int>>(1);

	cur = head;

	std::shared_ptr<Node<int>> temp = std::make_shared<Node<int>>(2);

	cur->setNext(temp);

	cur = cur->getNext();

	temp = nullptr;
	temp = std::make_shared<Node<int>>(3);

	cur->setNext(temp);

	cur = cur->getNext();

	//Now delete the memory




    return 0;
}

// This code is just sandbox code
int main2()
{

	std::shared_ptr<Node<std::string>> head = nullptr;

	std::shared_ptr<Node<std::string>> cur = nullptr;

	head =  std::make_shared<Node<std::string>>("one");

	cur = head;

	std::shared_ptr<Node<std::string>> temp = std::make_shared<Node<std::string>>("two");

	cur->setNext(temp);

	cur = cur->getNext();

	temp = nullptr;
	temp = std::make_shared<Node<std::string>>("three");

	cur->setNext(temp);

	cur = cur->getNext();

    return 0;
}

// This code is just sandbox code
int main()
{

	main1();
	main2();


    return 0;
}

