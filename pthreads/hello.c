#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void * PrintHello(void * data)
{
    int my_data = (int)data;

    sleep(1);
    printf("\n Hello from new thread - got %d !\n", my_data);
    pthread_exit(NULL);
}

int main()
{
    int rc;
    pthread_t thread_id;
    pthread_t tid;
    //tid = pthread_self();

    int t = 11;

    rc = pthread_create(&thread_id, NULL, PrintHello, (void*)t);
    if(rc)
    {
      printf("\n ERROR: return code from pthread_create is %d \n", rc);
      exit(1);
    }
    printf("\nCreated new thread (%u)... \n", thread_id);

    pthread_exit(NULL);
}


