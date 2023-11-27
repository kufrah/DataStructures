// tests.cpp
#include "Node.h"
#include <gtest/gtest.h>
#include "StackQueue.h"
#include "StackQueue.cpp"


		
TEST(NodeTemplates,Node)
{
	Node<int> * head = nullptr;

	Node<int> * cur = nullptr;

	head = new Node<int>(1);

	cur = head;

	Node<int> * temp = new Node<int>(2);

	cur->setNext(temp);

	cur = cur->getNext();

	temp = nullptr;
	temp = new Node<int>(3);

	cur->setNext(temp);

	cur = cur->getNext();

	delete head;

}


 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
