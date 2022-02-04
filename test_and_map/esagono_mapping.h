#ifndef __ESAGONO_MAPPING
typedef struct 
{
  unsigned char id[6];  //Number of the strip that is connected to respective port of the node
  unsigned char dir[6]; //0 if no strip connected
                        //1 if the start of the strip is connected to the node
                        //2 if the output of the strip is connected to the node
}esagono_node_t;

esagono_node_t nodes[] =
{
  {{8,2,9,0,0,0}, // node 0
   {2,2,1,0,0,0}},
  /////////////////////////
  {{7,3,8,0,0,0},
   {2,2,1,0,0,0}}, // node 1
  /////////////////////////
  {{6,4,7,0,0,0},
   {2,2,1,0,0,0}}, // node 2
  /////////////////////////
  {{0,1,2,3,4,5},
   {1,1,1,1,1,1}}, // node 3
   /////////////////////////
  {{9,1,14,12,10,0},
   {2,2,2, 2, 1, 0}}, // node 4
   /////////////////////////
  {{13,14,0,15,16,0},
   {2, 1, 2,1, 1, 0}}, // node 5
   /////////////////////////
  {{5,6,0,0,17,15},
   {2,1,0,0,2, 2}}, // node 6
   /////////////////////////
  {{11,12,13,20,21,0},
   {2, 1, 1, 2, 1, 0}}, // node 7
   /////////////////////////
  {{10,11,0,0,0,0},
   {2 ,1, 0,0,0,0}}, // node 8
   /////////////////////////
  {{21,22,23,0,0,0},
   {2, 1, 1, 0,0,0}}, // node 9
   /////////////////////////
  {{0,19,26,24,22,20},
   {0, 2, 2, 2, 2, 1}}, // node 10
   /////////////////////////
  {{23,24,25,0,0,0},
   {2, 1, 1,0,0,0}}, // node 11
   /////////////////////////
  {{16,17,0,18,27,19},
   {2, 1, 0,1, 2, 1}}, // node 12
   /////////////////////////
  {{25,26,27,28,0,0},
   {2, 1, 1, 1, 0,0}}, // node 13
   /////////////////////////
  {{28,18,0,0,0,0},
   {2, 2,0,0,0,0}} // node 14  
};


#endif