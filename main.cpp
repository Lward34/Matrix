#include<stdio.h>

//Implementaion of the function display

void display(int graph1[][5])

{

     printf(" The transitive closure: ");

     //Display the graph1

     int i = 0;

     while (i < 5)

     {

          for (int j = 0; j < 5; j++)

              printf("%d ", graph1[i][j]);

          printf(" ");

          i++;

     }

}

//Implementaion of the function reflexive

void reflexive(int graph[][5])

{

     int graph1[5][5];

     printf("The graph is: \n");

     //Find the transitive closure

     int i = 0;

     while (i < 5)

     {

          for (int j = 0; j < 5; j++)

          {
              
              graph1[i][j] = graph[i][j];

              printf("%d ", graph[i][j]);

          }

          printf(" ");

          i++;

     }

     //The adjacency matrix

     for (int k = 0; k < 5; k++)

     {

          //display the reflexive closure

          printf(" Reflexive closure matrix(%d) ", k + 1);

          int i = 0;

          while (i < 5)

          {

              for (int j = 0; j < 5; j++)

              {

                   graph1[i][j] = graph1[i][j] ||

                        (graph1[i][k] && graph1[k][j]);

                   printf("%d ", graph1[i][j]);

              }

              printf(" ");

              i++;

          }

     }

     // call the function display

     display(graph1);

}

//main function

int main()

{

     //Declare the graph

     int graph[5][5] = {

    { 0, 0, 0, 0, 1 },

    { 1, 0, 0, 0, 0 },

    { 0, 0, 1, 1, 0 },

    { 0, 0, 1, 0, 0 },

    { 1, 0, 1, 0, 1 }

};

     // Print the transitive closure of the given graph

     reflexive(graph);

     return 0;

}
