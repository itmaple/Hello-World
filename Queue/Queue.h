class Queue
{
 public:
	Queue(int capacity);
	virtual ~Queue();
	bool empty();
	bool full();
	void EnQueue(int &element);
	int &DeQueue();
	void printQueue();
 private:
	int *m_iElement;
	int m_iCapacity;
	int m_iLen;
	int m_iHead;
	int m_iTail;
};
