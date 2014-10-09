#include <stdio.h>
#include "../src/dfs.cpp"
#include "../src/vertex.cpp"

int main()
{	
	printf("Testing the DFS modified Algorithm...\n");

	Vertex* v1 = new Vertex(0.0 , 0.0);
	Vertex* v2 = new Vertex(0.0 , 1.0);
	Vertex* v3 = new Vertex(1.0, 0.0);

	Line* l1 = new Line(v2);
	Line* l2 = new Line(v3);
	Line* l3 = new Line(v1);
	
	printf("Visited values before DFS: \n")
	printf("\rV1: %i\n", v1->getVisited());	
	printf("\rV2: %i\n", v2->getVisited());	
	printf("\rV3: %i\n", v3->getVisited());	

	DFS_Visit(v1);
	
	printf("\nVisited values before DFS: \n")
	printf("\rV1: %i\n", v1->getVisited());	
	printf("\rV2: %i\n", v2->getVisited());	
	printf("\rV3: %i\n", v3->getVisited());	

	
	return 0
}
