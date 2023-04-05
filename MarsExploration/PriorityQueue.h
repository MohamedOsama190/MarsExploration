
#include<iostream>
using namespace std;

template<typename P>
class PriorityQueue_Node
{
private:
	int p;
	P data;
	PriorityQueue_Node<P>* next;
public:
	PriorityQueue_Node(P& data, int p)
	{
		this->data = data;
		this->p = p;
		this->next = nullptr;
	}

	void set_data(P& data)
	{
		this->data = data;

	}

	void set_priority(int p)
	{
		this->p = p;
	}

	void set_next(PriorityQueue_Node<P>* next)
	{
		this->next = next;
	}

	P get_data()
	{
		return this->data;
	}

	int get_priority()
	{
		return this->p;
	}

	PriorityQueue_Node<P>* get_next()
	{
		return this->next;
	}



};

template<typename P>
class PriorityQueue
{
private:
	PriorityQueue_Node<P>* head;
public:
	Priority_Queue()
	{

	}

	Priority_Queue(PriorityQueue_Node<P>* start)
	{

		this->head = start;


	}

	P peek()
	{
		if (this->head == nullptr)
		{
			return nullptr;
		}


		return this->head->get_data();
	}

	bool dequeue(P& item)
	{
		if (head == nullptr)
		{
			return false;
		}
		PriorityQueue_Node<P>* temp = this->head;
		head = head->next;
		item = temp->data;

		return true;

	}


	void enqueue(P item, int p)
	{
		PriorityQueue_Node<P>* start = this->head;

		PriorityQueue_Node<P>* temp = new PriorityQueue_Node<P>(item, p);


		if (this->head == nullptr)
		{
			this->head = temp;
			return;
		}


		if (this->head->p < p)
		{
			temp->next = this->head;
			this->head = temp;
			return;
		}
		else
		{
			while (start->next != nullptr && start->next->p > p)
			{
				start = start->next;
			}

			temp->next = start->next;
			start->next = temp;
		}

	}


	bool isEmpty()
	{
		if (this->head == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}

	}

	void set_head(PriorityQueue_Node<P>* start)
	{
		this->head = start;
	}

	P getHead()
	{
		return this->head;
	}
};

