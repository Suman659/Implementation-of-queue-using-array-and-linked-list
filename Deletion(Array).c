int dequeue(){
  intx;
   if(isempty())
     printf("Queue is empty\n";
  else if(front==rear){
x=queue[front];
front=-1;
rear=-1;
}
else{
  x=queue[front];
  front=(front+1)%SIZE;
}
return x;
}
