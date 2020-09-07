//#include<graphics.h>  
//#include<conio.h>  
//int main()  
//{  
//    //intgd=DETECT,gm;  
//	int i, j = 0, gd = DETECT, gm;
//    initgraph (&gd,&gm,"c:\\tc\\bgi");  
//    setbkcolor(GREEN);  
//    printf("\t\t\t\n\nLINE");  
//    line(50,40,190,40);  
//    printf("\t\t\n\n\n\nRECTANGLE");  
//    rectangle(125,115,215,165);  
//    printf("\t\t\t\n\n\n\n\n\n\nARC");  
//    arc(120,200,180,0,30);  
//    printf("\t\n\n\n\nCIRCLE");  
//    circle(120,270,30);  
//    printf("\t\n\n\n\nECLIPSE");  
//    ellipse(120,350,0,360,30,20);  
//    getch();  
//    return 0;
//}  
/*
#include <graphics.h>
#include <dos.h>
int main()
{
   int i, j = 0, gd = DETECT, gm;
   int numm;
   printf("Enter the number");
   scanf("%d",&numm);
   if(numm>10){
   

   initgraph(&gd,&gm,"C:\\TC\\BGI");

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(25,240,"Press any key to view the moving car");

   getch();

   for( i = 0 ; i <= 420 ; i = i + 10, j++ )
   {
      rectangle(50+i,275,150+i,400);
      rectangle(150+i,350,200+i,400);
      circle(75+i,410,10);
      circle(175+i,410,10);
      setcolor(j);
      delay(100);

      if( i == 420 )
         break;
      if ( j == 15 )
         j = 2;

      cleardevice(); // clear screen
   }

   getch();
   closegraph();
   }
   return 0;
}
*/



#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
int main()
{
	int i, j,gd = DETECT,gm;
	int x1,y1,x2,y2;
	int aim;
	int index;int gap;
	int counter =0;
	char result[index+1],resultpos[1];


	printf("\n");
	printf("Enter the number of elements \n");
	scanf("%d",&index);
	printf("Enter the elements \n");
	
	int elements[index];
	int pos[index],posCount=0;
	
	for(int z = 0; z< index; z++){
		scanf("%d",&elements[z]);
	}
	
	
	printf("Enter the Number to searched \n");
	scanf("%d",&aim);
	cleardevice();

	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	//initgraph(&gd,&gm,"");
		//	int wd1 = initwindow(400, 300);
		//	setcurrentwindow(wd1);
	
	settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
	outtextxy(25,50,"LINEAR SEARCH");
	getch();
	
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	
	for(i=0;i<=400;i=i+70)
	{
	setcolor(4);
	rectangle(100+i,250,150+i,200);
	
	setcolor(15);
	delay(200);
	printf("%d",elements[counter]);
	printf("\n");
	sprintf(result,"%d",elements[counter]);

	if(elements[counter]<9 ){
		outtextxy(100+i+20,215,result);		
	}
	else if(elements[counter]>9){
		outtextxy(100+i+12,215,result);
	}
	else{
	
	outtextxy(100+i+15,215,result); // for getting the values of arr elements
	}
	
	counter++;
	if(i==400 )
	{
		break;
	}
	if(counter == index){
		break;
	} 
	if(aim == elements[counter])
	{
		setcolor(2);
		rectangle(100+i,250,150+i,200);
		posCount++;
		pos[posCount] = elements[counter];
		continue;
		
	}
	setcolor(15);
	rectangle(100+i,250,150+i,200);
	
	//cleardevice();
	delay(500);
	
	
	}
	delay(300);
	if(posCount!=0){
		posCount = posCount + 1;
	}
	outtextxy(50,280,"Number of matches : ");
	sprintf(resultpos,"%d",posCount);
	outtextxy(70,300,resultpos);
	//rectangle(50,275,150,400);
	//rectangle(x1,y1,x2,y2);
	//initgraph(&gd,&gm,"C:\\TC\\BGI");

	getch();
	closegraph();
	return 0;
}
