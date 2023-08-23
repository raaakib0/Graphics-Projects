//Md. Rakibul Islam
//CSE1902017043
//17B

#include<graphics.h>

main()
{
	int i ;
	initwindow(1000,600);
	setbkcolor(LIGHTGRAY); 
	setlinestyle(0,0,3);
	
	for (i = 0; i < 800; i++) 
	{
		
//		header txt add
	setcolor(BLACK);
	settextstyle(3,4,1);
	outtextxy(160,50,"Md. Rakibul Islam");
	outtextxy(150,80,"CSE1902017043");
	
//sun
	setcolor(RED);
    circle(700, 200-i, 50);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(700,200-i,RED);
	         
	// small
    line(670,160-i,665,150-i);
    line(700,140-i,700,150-i);
    line(730,160-i,735,150-i);
	// middle
    line(750,200-i,760,200-i);
    line(650,200-i,640,200-i);      
    line(730,240-i,735,250-i);
    line(700,250-i,700,260-i);
    line(670,240-i,665,250-i);     
	// large
	line(750,230-i,770,245-i);
	line(750,170-i,772,160-i);
	//left
	line(628,165-i,650,175-i);
	line(632,240-i,652,225-i);
	line(683,255-i,678,275-i);
	
	line(720,255-i,728,275-i);
	//uper
	line(683,145-i,678,125-i);
	line(720,145-i,730,125-i);
        
		
//  house
	
	setcolor(BROWN);
	line(500, 300, 550, 230);
  
    line(550, 230, 600, 300);
//  ghorer chal
    line(550, 230, 750, 230);
    line(750, 230, 800, 300);
    
    line(558, 240, 755, 240);
    line(565, 250, 765, 250);
    line(570, 260, 770, 260);
    line(580, 270, 777, 270);
    line(585, 280, 785, 280);
    line(593, 290, 795, 290);

//    house color
    setfillstyle(1,DARKGRAY);
    bar(500, 300, 530, 436);
    bar(500, 300, 600, 330);
    bar(570, 300, 800, 436);
    
    
    rectangle(500, 300, 600, 436);
    rectangle(600, 300, 800, 436);
    rectangle(530, 330, 570, 436);
    setfillstyle(7,DARKGRAY);
    bar(630, 330, 770, 410);
	


//Cloud
	setcolor(LIGHTCYAN);
	ellipse(180+i,78,20,170,40,55);

	ellipse(232+i,70,0,160,15,20);
	//leftside
	ellipse(140+i,100,90,280,40,30);
	//middle
	ellipse(155+i,100,10,170,15,15);
	ellipse(220+i,100,10,170,10,10);
	//niceheer 2 ta
	ellipse(170+i,128,180,360,25,10);
	ellipse(220+i,128,180,360,25,10);
	//right side
	ellipse(240+i,100,280,80,40,30);

//rain

	//first two line
	line(240+i,160,235+i,170);
	line(225+i,170,220+i,180);
	line(220+i,160,215+i,170);
	line(205+i,170,200+i,180);
	line(200+i,160,195+i,170);
	line(185+i,170,180+i,180);
	line(180+i,160,175+i,170);
	line(165+i,170,160+i,180);
	line(160+i,160,155+i,170);
	line(145+i,170,140+i,180);
	line(140+i,160,135+i,170);
	line(125+i,170,120+i,180);
	//middle 1 line
	line(233+i,180,228+i,190);
	line(213+i,180,208+i,190);
	line(193+i,180,188+i,190);
	line(173+i,180,168+i,190);
	line(153+i,180,148+i,190);
	line(133+i,180,128+i,190);
	//last 2 line
	line(240+i,190,235+i,200);
	line(225+i,200,220+i,210);
	line(220+i,190,215+i,200);
	line(205+i,200,200+i,210);
	line(200+i,190,195+i,200);
	line(185+i,200,180+i,210);
	line(180+i,190,175+i,200);
	line(165+i,200,160+i,210);
	line(160+i,190,155+i,200);
	line(145+i,200,140+i,210);
	line(140+i,190,135+i,200);
	line(125+i,200,120+i,210);


//tree


	//pata u m d
	setcolor(LIGHTGREEN );
	ellipse(313,360,0,180,10,15);
	ellipse(300,365,60,290,10,10);
	ellipse(312,371,195,0,10,15);
	
	//uper
	ellipse(390,250,4,172,30,35);
	//left
	ellipse(350,270,65,230,35,25);
	//right
	ellipse(432,270,310,120,35,25);
	//leftside
	ellipse(340,310,110,279,40,20);
	//right side
	ellipse(440,310,283,65,40,20);
	//middle
	ellipse(375,280,10,170,10,10);
	ellipse(410,280,10,170,10,10);
	ellipse(360,310,10,170,10,10);
	ellipse(425,310,10,170,10,10);
	//niceheer 2 ta
	ellipse(368,330,180,273,25,15);
	ellipse(420,329,262,360,25,15);
	
	//body
	//sub tree
	setfillstyle(4,BROWN);
    bar(370, 350, 410, 435);
    
	setcolor(BROWN);
	line(370,350,370,370);
	line(370,390,370,420);
	line(410,350,410,420);

	//dal
	ellipse(330,370,0,130,40,10);
	ellipse(330,390,0,115,40,20);
	
	//right body & uporer angle
	ellipse(357,352,10,90,15,10);
	ellipse(425,352,90,170,15,10);
	//ground
	//left
	ellipse(346,420,246,7,25,16);
	//right
	ellipse(435,420,180,294,25,16);
	

// Road
	setcolor(BLACK);
	line(100, 436, 1000, 436);
	line(40, 485, 100, 485);
	line(140, 485, 200, 485);
	line(240, 485, 300, 485);
	line(340, 485, 400, 485);
	line(440, 485, 500, 485);
	line(540, 485, 600, 485);
	line(640, 485, 700, 485);
	line(740, 485, 800, 485);
	line(840, 485, 900, 485);
	line(940, 485, 1000, 485);
	line(0, 516, 1000, 516);
	
//	road wite line fill
	setfillstyle(2,WHITE);
    bar(90, 438, 1000, 480);
    setfillstyle(2,WHITE);
    bar(0, 485, 1000, 515);
	
	//grash right
	setcolor(LIGHTGREEN );
	line(436, 436, 425, 427);
	line(436, 436, 430, 424);
    line(436, 436, 435, 422);
    line(436, 436, 440, 423);
    line(436, 436, 445, 425);
    line(436, 436, 450, 429);
        
    // grash left
    line(336, 436, 325, 433);
	line(336, 436, 325, 427);
	line(336, 436, 330, 424);
    line(336, 436, 335, 422);
    line(336, 436, 340, 423);
    line(336, 436, 345, 425);
    line(336, 436, 350, 429);
    
    
//	cycle	
// Upper body of cycle
	setcolor(BLUE );
    line(50 + i, 455, 100 + i, 455);
    line(75 + i, 425, 125 + i, 425);
    line(50 + i, 455, 75 + i, 425);
    line(100 + i, 455, 125 + i, 425);
    line(150 + i, 455, 100 + i, 395);
    line(75 + i, 425, 75 + i, 420);
    line(70 + i, 420, 80 + i, 420);
    line(80 + i, 395, 100 + i, 395);
  
// Wheel
    circle(150 + i, 455, 30);
	setfillstyle(8,3);
	floodfill(155+i,460,BLUE);
	
    circle(50 + i, 455, 30);
    setfillstyle(8,3);
	floodfill(55+i,460,BLUE);
    
        if(i>=780){
        i=0;
        circle(150 + i, 455, 30);
        circle(50 + i, 455, 30); 	
		}
	
  
    // Stop the screen
    delay(2);
 
  
    // Clear the screen
    cleardevice();      
    }
   
}
