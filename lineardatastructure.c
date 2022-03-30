# include <stdio.h>
# define SIZE 5


int array_data[SIZE];
int top_of_stack, front, rear;

void menu(void) {
  printf("\n1. Stack using Array");
  printf("\n2. Queue using Array");
  printf("\n3. Stack using Linked List");
  printf("\n4. Queue using Linked List");
  printf("\n5. Exit from the program");
  printf("\n\n Provide an option: ");
}

void push(void) {
  if (top_of_stack == SIZE) 
    printf("\nStack Overflow");
  else {
    printf("\nEnter the element to be pushed to the stack: ");
    scanf("%d", &array_data[top_of_stack++]);
  }
}

void pop(void) {
  if (top_of_stack == 0) 
    printf("\nStack underflow");
  else {
    printf("\nPopped element is: %d", array_data[--top_of_stack]);
  }
}

void display_stack(void) {
  if (top_of_stack == 0) 
    printf("\nNo elements in the stack\n");
  else 
   for (int i=0; i<top_of_stack; i++) 
     printf("%d \t", array_data[i] );
}


void enqueue(void) {
  if (rear == SIZE) 
    printf("\nQueue Full");
  else {
    printf("\nEnter the element to be inserted to the queue: ");
    scanf("%d", &array_data[rear++]);
  }
}

void dequeue(void) {
  if (front == rear) 
    printf("\nQueue Empty");
  else {
    printf("\nDeleted element is: %d", array_data[front++]);
  }
}

void display_queue(void) {
  if (front == rear) 
    printf("\nQueue Empty\n");
  else 
   for (int i=front; i<rear; i++) 
     printf("%d \t", array_data[i] );
}
void array_stack() {
  top_of_stack = 0;
  int choice;
  printf("\n***Creation of Stack using Array***");
  while(1) {
    printf("\n 1. Push \t 2. Pop \t 3. Display \t 4. Return to previous menu \n Choose an option: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: push();
            break;
      case 2: pop();
            break;
      case 3: display_stack();
            break;
      case 4: return;
      default: printf("\nInvalid choice");
    }
  }  
}

void array_queue() {
  printf("\n***Creation of Queue using Array***");
  front =0;
  rear = 0;
  int choice;
  while(1) {
    printf("\n 1. Enqueue \t 2. Dequeue \t 3. Display \t 4. Return to previous menu \n Choose an option: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: enqueue();
            break;
      case 2: dequeue();
            break;
      case 3: display_queue();
            break;
      case 4: return;
      default: printf("\nInvalid choice");
    }
  }
}
void linked_list_stack() {
  printf("\n***Creation of Stack using Linked List***");
}

void linked_list_queue() {
  printf("\n***Creation of Queue using Linked List***");
}

int main(void) {
  int choice;
  while (1){
    menu();
    scanf("%d", &choice);
    switch (choice){
      case 1: array_stack();
              break;
      case 2: array_queue();
              break;
      case 3: linked_list_stack();
              break;
      case 4: linked_list_queue();
              break;
      case 5: return 0;
      default: printf("Invalid Option.  Try again.");
    }
    
  }
}
