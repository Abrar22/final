// name:abrar altayeb 
// department:computer
// band:second band

#include<iostream>
#include<string>
using namespace std ;

class linkedlist
{
     struct Node
      {
        int item;
        Node *next;
    };
    public:

     Node*first = NULL;
    Node*last = NULL;
    int length = 0;


      bool is empty()
    {
        return length == 0;
    }

// addtion function from the first
    void insirtfirst(int element)
    {
        Node * newNode = new Node;
        newNode->item = element;
        if(length == 0)
        {
            first=last=new Node;
            newNode->next = NULL;
        }
    }
    else if
    {
        {
            newNode->next = first;
            first = newNode;
        }
    }
    
    length ++;

// addtion function from any postion
     void insertAtpos(int pos , string element)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else if
    {
        Node * newNode = new Node;
        newNode->item = element;
        if(pos == 0)
        insertfirst(element);
        else if (pos == length)
        insertlast(element);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }
// addtion function from the last
 void insirtlast(int element)
    {
        Node *newNode = new Node;
        newNode->item = element;
        if(length == 0)
        {
            first=last=new Node;
            newNode->next = NULL;
        }
    }
    else if
    {
        {
            last->next = new Node;
            newNode->next = NULL;
            last = newNode;
        }
    }
    
    length ++;


// remove function from the first
      void removefirst()
    {
        if (length == 0)
        cout<< "empty list cant remove";
        else if (length == 1)
        {
            delete first ;
            last = first = NULL;
            length --;
        }
        else if
        {
            Node * curr = first;
            first = first->next;
            delete curr;
            length --;
        }
        
    }



// remove function from the last
    void removelast()
{
    Node*curr = first->next;
    Node*prev = first;

    else if
    {
        if(length == 0)
        {
            return;
        }
        else if(length == 1)
        {
            delete first;
        }
        last = first = NULL;
        length --;

        while (curr !=last)
        {
            prev = curr;
            curr = curr->next;
        }
        delete curr;
        prev->next=NULL;
        last = prev;
        length --;
    } 
}


// remove function from any postion for int element
void remove(int element)
{
    if(is empty())
    {
        return;
    }
    Node*curr;
    Node*prev;
    if(first->item==element)
    {
        curr = first;
        first = first->next;
        delete curr;
        length = length - 1;
        if(length==0)
        {
            last = NULL;
        }
    }
    else
    {
        curr = first->next;
        prev=first;
        while(curr!=NULL)
        {
            if(curr->item==element)
            {
                break;
            }
            prev = curr;
            curr = curr->next;
        } 
    }
    if(curr==NULL)
    {
        cout<<"not found";
    }
    else
    {
        prev->next=curr->next;
        if(last==curr)
        {
            last=prev;
        }
        delete curr;
        length --;
    }
}

// remove function from any postion for string element
void remove(string element)
{
    if(is empty())
    {
        return;
    }
    Node*curr;
    Node*prev;
    if(first->item==element)
    {
        curr = first;
        first = first->next;
        delete curr;
        length = length - 1;
        if(length==0)
        {
            last = NULL;
        }
    }
    else
    {
        curr = first->next;
        prev=first;
        while(curr!=NULL)
        {
            if(curr->item==element)
            {
                break;
            }
            prev = curr;
            curr = curr->next;
        } 
    }
    if(curr==NULL)
    {
        cout<<"not found";
    }
    else
    {
        prev->next=curr->next;
        if(last==curr)
        {
            last=prev;
        }
        delete curr;
        length --;
    }
}

// search function for int element
void search (int element)
{
    Node * curr = first;
    int pos = 0;
    while(curr!=NULL)
    {
        if(curr->item==element)
        return pos;
        curr = curr->next;
        pos ++;
    }
    return -1;
}

// search function for string element
void search (string element)
{
    Node * curr = first;
    int pos = 0;
    while(curr!=NULL)
    {
        if(curr->item==element)
        return pos;
        curr = curr->next;
        pos = pos + 1;
    }
    return -1;
}


/// search function for int element
void update_item(int old, int new)
 {
   int pos = 0;
   
   if(head==NULL) 
   {
      printf();
      return;
   } 

   current = head;
   while(current->next!=NULL)
    {
      if(current->item == old)
       {
         current->item = new;
         printf( old, pos, new);
         return;
      }
      
      current = current->next;
      pos++;
   }
   
   printf( old);
}

// search function for string element
void update_item(string old, string new)
 {
   int pos = 0;
   
   if(head==NULL) 
   {
      printf();
      return;
   } 

   current = head;
   while(current->next!=NULL)
    {
      if(current->item == old)
       {
         current->item = new;
         printf( old, pos, new);
         return;
      }
      
      current = current->next;
      pos++;
   }
   
   printf( old);
}


// print function
 void print (){
        Node*curr = first;
        while (curr != NULL)
        {
            cout <<curr->item <<"  ";
            curr=curr->next;
        }
    }


};


int main(){
 linkedlist l;
 // print element
    l. insertfirst(number);
    l. insertlast(birthday);
    l. insertpos(name);
    l. insertpos(nick_name);
    l. insertpos(email);
    l. insertpos(location);
    l. insertpos(language);
    l. insertpos(note);
    l. insertpos(job);
    l. insertpos(gender);
   
// remove element
    l. removefirst();
    l. removelast();
    l. remove();
// update element
    l. update_item();
// search element
    cout<< l.search();

    return 0;
}
