#include <iostream>

const int size = 5;

struct Stack {
	int stack[size];
	int res;
};

void push(Stack *, int);
int pop(Stack *);


int main() {
	Stack * tmp = new Stack;
	tmp->res = -1;

	push(tmp, 1);
	push(tmp, 2);
	push(tmp, 3);
	push(tmp, 4);
	push(tmp, 5);
	std::cout << std::endl;
	std::cout << "pop items " << pop(tmp) << std::endl;
	std::cout << "pop items " << pop(tmp) << std::endl;
	std::cout << "pop items " << pop(tmp) << std::endl;
	std::cout << "pop items " << pop(tmp) << std::endl;
	std::cout << "pop items " << pop(tmp) << std::endl;
	std::cout << std::endl;
}

void push(Stack * tmp, int sum) {
	if (tmp->res >= size)
		return;
	tmp->stack[++tmp->res] = sum;
	std::cout << "push items " << sum << std::endl;
}

int pop(Stack * tmp) {
	int sum = tmp->stack[tmp->res--];
	return  sum;
}
