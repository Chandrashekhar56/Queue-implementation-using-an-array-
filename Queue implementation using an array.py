front_end=-1
rear_end=-1
size_of_queue=4
queue=[None]*size_of_queue

def EnqueueOperation(value):
    global front_end,rear_end,size_of_queue
    print("Enqueue Operation: ")
    if rear_end == size_of_queue-1:
        print("queue is full(Insertion Not Possible)")
    elif front_end ==-1 and rear_end==-1:
        rear_end+=1
        front_end+=1
        queue[rear_end] = value
    else:
        rear_end+=1
        queue[rear_end] = value

def EnqueueDisplay():
    global front_end,rear_end
    if(front_end == -1 and rear_end==-1):
        print("Enqueue Display: queue is Empty")
    else:
        x=rear_end
        for i in range(front_end,x+1):
            print(queue[i],"<--")
            
def DequeueOperation():
    global front_end,rear_end
    print("Dequeue Operation: ")
    if (front_end==-1 and rear_end==-1):
        print("queue is empty(Deletion Not Possible)")
    elif(front_end == rear_end):
        delete_data=queue[front_end]
        front_end= -1
        rear_end= -1
    else:
        delete_data=queue[front_end]
        front_end+=1

def DequeueDisplay():
    global front_end,rear_end
    print("Dequeue Display: ");
    if(front_end==-1 and rear_end==-1):
        print("queue is Empty");
    else:
        x=rear_end
        for i in range(front_end,x+1):
            print("-->",queue[i])

def position_of_Front_and_Rear():
    if (front_end==-1 and rear_end==-1):
        print("queue is Empty")
    else:
        print("Position of Front is: ",queue[front_end])
        print("Position of Rear is:  ",queue[rear_end])
        
EnqueueDisplay()
EnqueueOperation(20)
EnqueueDisplay()
EnqueueOperation(30)
EnqueueDisplay()
EnqueueOperation(40)
EnqueueDisplay()
EnqueueOperation(50)
EnqueueDisplay()
EnqueueOperation(60)
EnqueueDisplay()
EnqueueOperation(70)
EnqueueDisplay()
DequeueOperation()
DequeueDisplay()
DequeueOperation()
DequeueDisplay()
DequeueOperation()
DequeueDisplay()
DequeueOperation()
DequeueDisplay()
DequeueOperation()
DequeueDisplay()
print("Position of Front and Rear in queue: ")
position_of_Front_and_Rear()

