#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *thread_function(void *arg);

int j; // Declare j as a global variable

int main() {
    pthread_t a_thread; // Thread declaration
    pthread_create(&a_thread, NULL, thread_function, NULL); // Thread is created

    // pthread_join(a_thread, NULL); // Process waits for thread to finish. Comment this line to see the output of both threads interleaved

    printf("Inside Main Program\n");
    for (j = 20; j < 25; j++) {
        printf("%d\n", j);
        sleep(1);
    }

    return 0;
}

void *thread_function(void *arg) {
    printf("Inside Thread\n");

    // The work to be done by the thread is defined in this function

    return NULL;
}
