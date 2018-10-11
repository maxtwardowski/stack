class Stack {
	public:
		Stack();
		~Stack();
		void push(int element);
		int pop();
		bool isEmpty();
	private:
		int size;
		int top;
		int * data;
		void memCheck();
};
