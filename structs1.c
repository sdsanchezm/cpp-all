#include <stdio.h>

void swap1(int array1[]);
int printArray1(int array1[]);

const int ARRAY_SIZE = 4;

// Defining a structure including 3 integers
typedef struct
{
    int user_id;
    int person_id;
    int department_id;
}
user;

void printUsers(user array1[]);

// Array of users
// user users[ARRAY_SIZE];

int main(void)
{
    user array1[ARRAY_SIZE];
    array1[0].user_id = 1;
    array1[0].person_id = 9834;
    array1[0].department_id = 875;

    array1[1].user_id = 2;
    array1[1].person_id = 7601;
    array1[1].department_id = 471;

    array1[2].user_id = 3;
    array1[2].person_id = 6997;
    array1[2].department_id = 323;

    array1[3].user_id = 4;
    array1[3].person_id = 2329;
    array1[3].department_id = 754;


    // for (int i = 0; i < ARRAY_SIZE; i++)
    // {
    //     printf("user id: %i\n",array1[i].user_id);
    //     printf("person id: %i\n",array1[i].person_id);
    //     printf("department id: %i\n\n",array1[i].department_id);
    // }

    printUsers(array1);

    user tempUser[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        tempUser[i] = array1[i];
    }

    printUsers(tempUser);

}

void swap1(int array1[])
{
    int tempVar = 0;
    for (int i = 0; i < 4; i++)
    {

        tempVar = array1[i];
        array1[i] = array1[ARRAY_SIZE -1 - i];
        array1[ARRAY_SIZE - 1 - i] = tempVar;
    }
}


int printArray1(int array1[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%i ", array1[i]);
    }
    printf("\n");
}


void printUsers(user array1[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("user id: %i\n",array1[i].user_id);
        printf("person id: %i\n",array1[i].person_id);
        printf("department id: %i\n\n",array1[i].department_id);
    }
}