#include<stdio.h>
#include<conio.h>
#include<windows.h>

main()
{
	   int score=0,level;
	   char name[20];
	   int opn,id,opt;
	   int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9;
	
	FIRST:   
	   SetConsoleTitle("TECHNO QUIZ");
	    system("COLOR 0A");
	   printf("\t\t------------ Welcome to TECHNO QUIZ  --------------\n\n\n\n");
	    printf("\t\t      Resister your name : ");
        gets(name);
	   printf("\n\n\n\n\n     Press 1 for Start Quiz\n");
	   printf("     Press 2 to select level\n");
	   printf("     Press 3 for Quit to Quiz\n");
	   printf("\n Enter what you want:");
	   scanf("%d",&opn);
	   
	   if(opn>3){
	   	system("cls");
	   	goto FIRST;
	   	
	   }
	   
	  switch(opn){
	  case 1:
	  	     system("cls");
	  	     goto level1;
	  	
	  case 2:
	         printf("Select Level \n");	
	         printf("1. Level 1 \n");
	         printf("2. Level 2\n");
	         printf("3. Level 3 \n");
	         printf("\nEnter level you wanna to play: ");
	         scanf("%d",&opt);
	         
	         switch(opt){
			 case 1: 
			       system("cls");
			       goto level1;
			       break;
			 case 2: 
			       system("cls");
			       goto level2;
			       break;
			 case 3: 
			       system("cls");
			       goto level3;
			       break;	         
		     }
	 case 3:
	         return 0;
			 break;	     
			 
	  } 
	  
	  level1:
	  	    SetConsoleTitle("LEVEL 1");
	  	    printf("\t\t-------------  LEVEL 1 ----------------\n\n\n");
	  	    
	  	    printf("Ques 1: Which among the following is the smallest unit in an image in a computer screen ?\n");
	  	    printf("   1. Resolution                    2. Array\n");
	  	    printf("   3. Pixel                         4. Clip\n");
	  	    printf("\n  Enter your answer here :");
	  	    scanf("%d",&ans1);
	  	    if(ans1>4){
	  	    	system("cls");
	  	    	goto level1;
	  	    	}
	  	    
			if(ans1==3){
				score=5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\t\tScore = %d\n\n",score);
			}else{
				  score=0;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\t\tScore = %d\n\n",score);
			}
			
			printf("\n Ques 2: Firewall in computer  is used for ?\n");
	  	    printf("   1. Security                2.Data Transmission\n");
	  	    printf("   3. Authentication          4.Monitoring\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans2);
	  	    if(ans2>4){
	  	    	system("cls");
	  	    	goto level1;
	  	    	}
	  	    
			if(ans2==1){
				score+=5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score-=5;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d",score);
			}
			
			printf("\n \n Ques 3: .gif is  extension for ?\n");
	  	    printf("   1. Word File                2.Video File\n");
	  	    printf("   3. Audio file \t            4.Image File\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans3);
	  	    if(ans3>4){
	  	    	system("cls");
	  	    	goto level1;
	  	    	}
	  	    
			if(ans3==4){
				score += 5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score-=5;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d\n\n",score);
			}
			
			//ResultAnnouncement
			if(score==15){
			printf("\n Congratulations you have been passed Level 1,Lets goto Level 2\n \n");
			level=2;
		    system("pause");		
		    system("cls");
			}else{
			printf("\n Your score is %d,Get 15 score to get Level 2\n \n",score);
		    system("pause");		
		    system("cls");
			goto FIRST;	
			}  	
	if(level ==2){
	
	level2:	
	system("cls");
	SetConsoleTitle("LEVEL 2");
	  	    printf("\t\t-------------   LEVEL 2 ----------------\n\n\n");
	  	    
	  	    printf(" Ques 1. Which one is the first search engine in internet ?\n");
	  	    printf("   1. Google      \t   2.Archie\n");
	  	    printf("   3. Altavista   \t   4.WAIS\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans4);
	  	    if(ans4>4){
	  	    	system("cls");
	  	    	goto level2;
	  	    	}
	  	    
			if(ans4==2){
				score=5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score=0;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d\n\n",score);
			}
			
			printf("\n Ques 2.Which among the following is not an object oriented programming language ?\n");
	  	    printf("   1. Python                       2. Ruby\n");
	  	    printf("   3. Java                         4. PASCAL\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans5);
	  	    if(ans5>4){
	  	    	system("cls");
	  	    	goto level2;
	  	    	}
	  	    
			if(ans5==4){
				score+=5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score-=5;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d\n\n",score);
			}
			
			printf("\n Ques 3.A network designed to allow communication within an organization is called  ?\n");
	  	    printf("   1. an Intranet                                     2.Yahoo\n");
	  	    printf("   3. The Word Wide Web                               4.the  Internet\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans6);
	  	    if(ans6>4){
	  	    	system("cls");
	  	    	goto level2;
	  	    	}
	  	    
			if(ans6==1){
				score += 5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score-=5;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d",score);
			}
			
			//ResultAnnouncement
			if(score==15){
			printf("\n Congratulations you have been passed Level 2,Lets goto Level 3 \n");
			level=3;
		    system("pause");		
		    system("cls");
			}else{
			printf("\n Your score is %d,Get 30 score to get Level 3 \n",score);
		    system("pause");		
		    system("cls");
			goto FIRST;	
			}  	
	
	}	
	if(level ==3){
		level3:
	  	    SetConsoleTitle("LEVEL 3");
	  	    printf("\t\t-------------   LEVEL 3 ----------------\n\n\n");
	  	    
	  	    printf(" Ques 1: What type of internet company provides pay-per-use software? ?\n");
	  	    printf("   1. Software leasing                  2.Software developers\n");
	  	    printf("   3. Ethernet                          4.Application Service Provider(ASP)\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans7);
	  	    if(ans7>4){
	  	    	system("cls");
	  	    	goto level3;
	  	    	}
	  	    
			if(ans7==4){
				score=5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score=0;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d\n\n",score);
			}
			
			printf("\n Ques 2:How the quality of printer is measured?\n");
	  	    printf("   1. Alphabet per strike       2. Words per Inch\n");
	  	    printf("   3. Dot per Inch              4. Strike per Inch\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans8);
	  	    if(ans8>4){
	  	    	system("cls");
	  	    	goto level3;
	  	    	}
	  	    
			if(ans8==3){
				score+=5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score-=5;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d\n\n",score);
			}
			
			printf("\n Ques 3:  Who among the following considered as the ''father of Artificial Intelligence''  ?\n");
	  	    printf("   1. Charles Babbage                       2. JohnMcCarthy\n");
	  	    printf("   3. JP EcKert                             4. Lee De Forest\n");
	  	    printf("\n Enter your answer here :");
	  	    scanf("%d",&ans9);
	  	    if(ans9>4){
	  	    	system("cls");
	  	    	goto level3;
	  	    	}
	  	    
			if(ans9==2){
				score += 5;
			    printf("\n\n\t\tCorrect Answer");		
				printf("\n\n\t\tScore = %d\n\n",score);
			}else{
				  score-=5;
				  system("COLOR C0");
				  Sleep(500);
				  system("COLOR 0A");
				  printf("\n\n\t\tWrong Answer");		
				  printf("\n\n\t\tScore = %d\n\n",score);
			}
			
			//ResultAnnouncement
			if(score==15){
			printf("\n Congratulations you have been passed all Levels\n\n \n");
			printf( "        $$$   CHAMPIANS    $$$ \n\n\n");
			level='c';
		
		    system("pause");		
		    system("cls");
			}else{
			printf("\n Your score is %d,Get 15 score to pass all levels and to become a champian\n",score);
		    system("pause");		
		    system("cls");
			goto FIRST;	
			}  	
	}
	if(level=='c'){
		SetConsoleTitle("CERTIFICATE");
		printf("\n\n\n                         !!!    CERTIFICATE    !!!      ");
		printf("\n                              of Excellence   \n\n");
		printf("         This certificate is give to %s for commendable performance in 'TECHNO QUIZ'\n \n\n",name);
        printf("      By:RAJKIYA ENGINEERING COLLEGE BIJNOR  \n\n\n\n\n\n\n\n");
	
	int over;
	printf("\n\n1.Go to Main Menu\n");
	printf("2.Quit Quiz\n");			
	printf("Enter what you wanna to do : ");
	scanf("%d",&over);
	switch(over){
		case 1:
			system("cls");
			goto FIRST;
			break;
		case 2:
		    return 0;
			break;
			}
		
	}}

	  	    	
