#include<stdio.h>
#include<errno.h>
#include <opencv2/highgui/highgui.hpp>
#include "../include/drawImageSimulator.h"
#include "../include/vertex.h"
#include "../include/line.h"


using namespace std;
using namespace cv;

//const char * Filename1 = "test.txt";

int main(){
	printf("-----------------------------------------------\n");
	printf("Testing the abstract drawLine simulation...\n");
	printf("-----------------------------------------------\n");

	drawImageSimulator sim;	
	
	Vertex* vertex1 = new Vertex(50,100);
	Vertex* vertex2 = new Vertex(100, 250);
	
	Line* line = new Line(vertex2);
	vertex1->addLine(line);
		
	//open the file
	//FILE* file = open(filename1, O_RDWR);
	 
	
	//Run it
	sim.drawPic(vertex1); 
	
	waitKey(0);
}

