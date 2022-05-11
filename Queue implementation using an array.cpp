#include <bits/stdc++.h>
#define max 50
using namespace std;
class Queue{

    int front_end=-1;
    int rear_end=-1;
    int size_of_queue=4;
    int queue[max];

 public: void EnqueueOperation(int value)
	{
        cout<<"\nEnqueue Operation: ";
		if (rear_end == size_of_queue-1)
        {
			printf(" queue is full(Insertion Not Possible)");
		}
		else if(front_end==-1  && rear_end==-1)
		{
            rear_end+=1;
			front_end+=1;
			queue[rear_end] = value;
		}
		else
        {
            rear_end++;
            queue[rear_end] = value;
        }
	}
	 void DequeueOperation()
	{
        int delete_data;
        cout<<"\nDequeue Operation: ";
		if (front_end==-1 && rear_end==-1)
        {
			printf(" queue is empty(Deletion Not Possible)");
		}
		else if(front_end == rear_end)
        {
                delete_data=queue[front_end];
                front_end=-1;
                rear_end=-1;
        }
        else
        {
            delete_data=queue[front_end];
			front_end++;

        }
	}
	 void EnqueueDisplay()
	{
		int x;
		cout<<"\nEnqueue Display: ";
		if (front_end == -1 && rear_end==-1)
        {
			cout<<"queue is empty";
		}
		else
        {
            for (x = front_end; x<=rear_end; x++)
            {
                cout<<queue[x]<<"<--";
            }
        }
	}
     void DequeueDisplay()
	{
		int x;
		cout<<"\nDequeue Display: ";
		if (front_end==-1 && rear_end==-1)
        {
			cout<<"queue is empty";
		}
		else
        {
            for (x = front_end; x <=rear_end; x++)
            {
                cout<<"-->"<<queue[x];
            }
        }
	}
	 void position_of_Front_and_Rear()
	{
		if (front_end==-1&&rear_end==-1)
        {
			cout<<" queue is empty";
		}
		else
        {
            printf("\nPosition of Front is: %d", queue[front_end]);
            printf("\nPosition of Rear is: %d", queue[rear_end]);
        }
	}
};
int main(void)
{
    Queue ob;
	ob.EnqueueDisplay();
    cout<<endl;
    ob.EnqueueOperation(20);
	ob.EnqueueDisplay();
    cout<<endl;
	ob.EnqueueOperation(30);
	ob.EnqueueDisplay();
    cout<<endl;
    ob.EnqueueOperation(40);
	ob.EnqueueDisplay();
    cout<<endl;
	ob.EnqueueOperation(50);
	ob.EnqueueDisplay();
    cout<<endl;
	ob.EnqueueOperation(60);
    ob.EnqueueDisplay();
    cout<<endl;
	ob.EnqueueOperation(70);
    ob.EnqueueDisplay();
    cout<<endl;
	ob.EnqueueOperation(80);
	ob.EnqueueDisplay();
    cout<<endl;
	ob.DequeueOperation();
	ob.DequeueDisplay();
    cout<<endl;
	ob.DequeueOperation();
	ob.DequeueDisplay();
    cout<<endl;
    ob.DequeueOperation();
	ob.DequeueDisplay();
    cout<<endl;
    ob.DequeueOperation();
	ob.DequeueDisplay();
    cout<<endl;
    ob.DequeueOperation();
	ob.DequeueDisplay();
    cout<<endl;
	ob.DequeueOperation();
	ob.DequeueDisplay();
    cout<<endl;
    cout<<"\nPosition of Front and Rear in queue: ";
	ob.position_of_Front_and_Rear();
	cout<<endl;
	return 0;
}

