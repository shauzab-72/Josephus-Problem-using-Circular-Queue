//Josephus problem
//queue functions already implemented in CircularQueue class
int survive(int n, int k)
    {
        if (n > 0)
        {
            Queue q1(n);
            for (int i = 0; i < n; i++)
            {
                q1.enqueue(i + 1);  //fill queue
            }
            cout << "elements inside queue: " << endl;
            q1.display();   //display elements before the game 
            int counter = 0;
            while (q1.count != 1)  //check if only one element left
            {
                if (counter < k - 1)
                {
                    int val = q1.peek();
                    q1.dequeue();
                    q1.enqueue(val);
                    counter++;
                }
                else
                {  
                    cout << q1.peek() << " destroyed!" << endl;
                    q1.dequeue();  //destroy value and reset counter
                    counter = 0;
                }
            }
            return q1.peek();  //return the survivor
        }
        else
            return -1;
    }
