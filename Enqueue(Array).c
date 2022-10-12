void enqueue(int value){
  if((rear+1)%size==front);
  printf("Queue is full.\n");
  else{
    if(front==-1)
      front=0;
    
    rear=(rear+1)%size;
    queue[rear]=value;
  }
}
