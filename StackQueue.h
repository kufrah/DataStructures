// #pragma once
// #include <string>

// class IStack {
// public:
// 	///Returns true if empty, otherwise false
// 	virtual bool isEmpty() const = 0;
// 	/// Adds a value to the Stack.  Returns true if able to add, otherwise false
// 	virtual bool push(const int & val) = 0;
// 	/// removes a value from the stack.   Feturns true if able to remove an element, otherwise false
// 	virtual bool pop() = 0;
// 	//If the ADT is empty throw an exception indicating this, otherwise returns top of stack
// 	virtual int peek() const = 0;
// 	// outputs contents to a string
// 	virtual std::string toString() const = 0;
	
// protected:

// };



// class ArrayBasedStack : IStack {
// public:
// 	ArrayBasedStack(void);
// 	virtual ~ArrayBasedStack();
// 	bool isEmpty() const override;
// 	bool push(const int & val) override;
// 	bool pop() override;
// 	//If the ADT is empty throw an exception indicating this
// 	int peek() const override;
// 	std::string toString() const override;
// private:

// };


// class IQueue {
// public:
// 	///Returns true if empty, otherwise false
// 	virtual bool isEmpty() const = 0;
// 	// Adds a value to the Q.  Returns true if able otherwise false
// 	virtual bool enQueue(const std::string &val) = 0;
// 	// remove a value to the Q.  Returns true if able otherwise false
// 	virtual bool deQueue() = 0;
// 	//If the ADT is empty throw an exception indicating this, otherwise returns the value of the 
// 	// front of the Q
// 	virtual std::string peek() const = 0;

// 	// outputs contents to a string
// 	virtual std::string toString() const = 0;
// protected:

// };



// class  ArrayBasedQueue : IQueue {
// public:
// 	ArrayBasedQueue(void);
// 	virtual ~ArrayBasedQueue();
// 	bool isEmpty() const override;
// 	bool enQueue(const std::string &val) override;
// 	bool deQueue() override;
// 	//If the ADT is empty throw an exception indicating this
// 	std::string peek() const override;
// 	std::string toString() const override;
// private:

// };

#pragma once
#include <string>

template <typename T>
class IStack {
public:
    virtual ~IStack() = default;
    virtual bool isEmpty() const = 0;
    virtual bool push(const T& val) = 0;
    virtual bool pop() = 0;
    virtual T peek() const = 0;
    virtual std::string toString() const = 0;
};

template <typename T>
class ArrayBasedStack : public IStack<T> {
public:
    ArrayBasedStack();
    virtual ~ArrayBasedStack();
    bool isEmpty() const override;
    bool push(const T& val) override;
    bool pop() override;
    T peek() const override;
    std::string toString() const override;

private:
    T* stack;
    int top;
    int capacity;
};

template <typename T>
class IQueue {
public:
    virtual ~IQueue() = default;
    virtual bool isEmpty() const = 0;
    virtual bool enQueue(const T& val) = 0;
    virtual bool deQueue() = 0;
    virtual T peek() const = 0;
    virtual std::string toString() const = 0;
};

template <typename T>
class ArrayBasedQueue : public IQueue<T> {
public:
    ArrayBasedQueue();
    virtual ~ArrayBasedQueue();
    bool isEmpty() const override;
    bool enQueue(const T& val) override;
    bool deQueue() override;
    T peek() const override;
    std::string toString() const override;

private:
    T* queue;
    int front;
    int rear;
    int capacity;
};