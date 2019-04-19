#include <bits/stdc++.h>
#include<iostream> 
using namespace std; 
  
struct Queue { 
    int front, rear, c; 
    int* queue; 
    Queue(int n) 
    { 
        front = rear = 0; 
        c = n; 
        queue = new int; 
    } 
  
    ~Queue() { delete[] queue; } 

    void EnqueueFront(int data) 
    { 
        if (c == rear) { 
            printf("\nQueue is full\n"); 
            return; 
        } 
  
        
        else { 
            queue[rear] = data; 
            rear++; 
        } 
        return; 
    } 
    void EnqueueBack(int data){
              if (front == rear) { 
            printf("\nQueue is found empty\n"); 
            return; 
        } 
  
     
        else { rear++;
            for (int i = 1; i < rear - 1; i++) { 
                queue[i] = queue[i-1]; 
            } 
  
           queue[front]=data; 
             
        } 
        return; 
    }
   void DequeueFront(){
                if (front == rear) { 
            printf("\nQueue is found empty\n"); 
            return; 
        } 
  
     
        else { 
                        
            rear--; 
        } 
        return;
    }
   
    void DequeBack() 
    { 
        
        if (front == rear) { 
            printf("\nQueue is found empty\n"); 
            return; 
        } 
  
     
        else { 
            for (int i = 0; i < rear - 1; i++) { 
                queue[i] = queue[i + 1]; 
            } 
  
            
            rear--; 
        } 
        return; 
    } 
  
   
    void Display() 
    { 
        int i; 
        if (front == rear) { 
            printf("\nQueue is Empty\n"); 
            return; 
        } 
  
        
        for (i = front; i < rear; i++) { 
            printf(" %d  ", queue[i]); 
        } 
        cout<<"\n";
        return; 
    } 
  
   
    void queueFront() 
    { 
        if (front == rear) { 
            printf("\nQueue is Found Empty\n"); 
            return; 
        } 
        printf("\nFront Element is : %d", queue[front]); 
        return; 
    } 
}; 
  

int main(void) 
{ 
    
    Queue q(4); 
  
   
    q.Display(); 
  
    int ele=0;
    for(int i = 0; i < 4; i++)
    {  
        
        
        q.EnqueueFront(i);
        
    }
    
  
    
    q.Display(); 
  
  
  

 cout<<"Removing Element from back"<<endl;
  
    q.DequeBack(); 
     cout<<"Removing Element from back"<<endl;
    q.DequeBack(); 
  
cout<<"Queue == "<<endl;
  
    q.Display(); 
    
    q.queueFront();
    cout<<"\n"; 
    q.EnqueueBack(5);
        q.Display();
    
    q.DequeueFront();
    cout<<"Elements after Dequeue from Front"<<endl;
    q.Display();
    
    return 0;
}