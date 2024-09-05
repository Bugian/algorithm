package Queue;

public class QueueArr<T> {

  private T[] queue;
  private int front = -1, rear = -1;
  private int size;
  private int count = 0;

  public QueueArr(int size) {
    this.size = size;
    queue = (T[]) new Object[size];
  }

  private boolean isEmptyArrQueue() {
    return front == -1 && rear == -1;
    // return count == 0;
  }

  private boolean isFullArrQueue() {
    return (rear + 1) % size == front;
    // return count == size;
  }

  public void enqueArrQueue(T elem) {
    if (isFullArrQueue()) {
      System.out.println("Queue is full, cannot enqueue " + elem);
      return;
    } else if (isEmptyArrQueue()) {
      rear = front = 0;
      queue[rear] = elem;
    } else {
      rear = (rear + 1) % size;
      queue[rear] = elem;
    }
    count++;
  }

  public T dequeuArrQueue() {
    if (isEmptyArrQueue())
      throw new RuntimeException("Queue is empty");

    T elem = queue[front];
    if (front == rear) {
      front = rear = -1;
    } else {
      front = (front + 1) % size;
    }
    count--;
    return elem;
  }

  public int sizeArrQueue() {
    return count;
  }

  public void printQueueArr() {
    if (isEmptyArrQueue()) {
      System.out.println("Queue is empty");
      return;
    }
    System.out.println("Queue: ");
    int i = front;
    while (i != rear) {
      System.out.println(queue[i] + " ");
      i = (i + 1) % size;
    }
    System.out.println(queue[rear]);
  }

  public T peekArrQueue() {
    if (isEmptyArrQueue())
      throw new RuntimeException("Queue is empty");
    return queue[front];
  }

  public static void main(String[] args) {
    QueueArr<Integer> queue2 = new QueueArr<>(5);

    queue2.enqueArrQueue(1);
    queue2.enqueArrQueue(2);
    queue2.enqueArrQueue(3);
    queue2.enqueArrQueue(5);
    queue2.enqueArrQueue(5);
    queue2.enqueArrQueue(5);

    queue2.printQueueArr();

    System.out.println();

    System.out.println("Size of queue array queue: " + queue2.sizeArrQueue());
    System.out.println("Front element array queue: " + queue2.peekArrQueue());
    System.out.println("Removed element array queue: " + queue2.dequeuArrQueue());
    queue2.printQueueArr();
    queue2.dequeuArrQueue();
    queue2.dequeuArrQueue();
    queue2.dequeuArrQueue();
    queue2.dequeuArrQueue();
    queue2.printQueueArr();
    System.out.println("Size of queue array queue: " + queue2.sizeArrQueue());
    System.out.println("Front element array queue: " + queue2.peekArrQueue());
  }

}
