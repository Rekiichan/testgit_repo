
void draw_rectangel(int x,int y,int ngang, int doc){
	GoToXY(x,y);
		printf("%s",TopLeft);
		for(int i = 0; i<ngang;i++)
			printf("%s",H_line);
		printf("%s",TopRight);
		//thanh doc
		for(int i = 1; i<doc;i++){
			GoToXY(x,y+i);
			printf("%s",V_line);
			GoToXY(x+ngang+1,y+i);
			printf("%s",V_line);
		}
		//thanh ngang duoi cung
		GoToXY(x,y+doc);
		printf("%s",BotLeft);
		for(int i = 0; i<ngang;i++)
			printf("%s",H_line);
		printf("%s",BotRight);
}

void TittleOfProgram(){
	//=======Tieu de tu dien box
	SetBackGroundRange (0 + 3 * 16, 35, 1, 50, 3); //arg: color = 63, left: 15, top:10, width: 50, height: 10
	setcolor(15 + 3 * 16);
		//thanh ngang tren cung
		
		draw_rectangel(35,1,48,2);
		GoToXY(45,2);
		setcolor(15 + 3 * 16);
		printf("CHUONG TRINH TU DIEN ANH-VIET");
	
}
void UI_main()
{
	system("cls");
	setcolor(15 + 0 * 16);
	TittleOfProgram();
		
	//=======Noi dung box
	
	SetBackGroundRange (0 + 3 * 16, 10, 5, 100, 19);
		//setcolor(15 + 3 * 16);
		//thanh ngang tren cung
		GoToXY(10,5);
		printf("%s",TopLeft);
		for(int i = 0; i<99;i++)
			printf("%s",H_line);
		printf("%s",TopRight);
		// thanh doc 
		for(int i = 1; i<17;i++){
			GoToXY(10,5+i);
			printf("%s",V_line);
			GoToXY(110,5+i);
			printf("%s",V_line);
		}
		//thanh ngang cuoi cung	
		GoToXY(10,22);
		printf("%s",BotLeft);
		for(int i = 0; i<99;i++)
			printf("%s",H_line);
		printf("%s",BotRight);
		
		// dau mut thanh doc chia bang lam 2 phan, danh sach tu|| noi dung
			GoToXY(35,5);
			printf("%s",MiddleDown);
			GoToXY(35,22);
			printf("%s",MiddleUp);
			for(int i = 1; i<17;i++){
				GoToXY(35,5+i);
				printf("%s",V_line);
			}
		//chia tieu de, noi dung
			GoToXY(10,7);
			printf("%s",MiddleTurnRight);
			for(int i = 1; i<100	;i++)
				
				printf("%s",H_line);
			
			printf("%s",MiddleTurnLeft);
			
		// chu thap cheo 
			GoToXY(35,7);
			printf("%s",PlusSym);
			
		//Tieu de: Danh Sach Tu
			GoToXY(11,6);
			printf("Tim: ");
		//Tieu de: Danh Sach Tu
		//	SetBackGroundRange (0 + 2 * 16, 12, 8, 21, 1);
		//Tieu de: Noi Dung
			GoToXY(63,6);
			printf("Noi Dung");
	//=======Menu box
	SetBackGroundRange (0 + 3 * 16, 15, 24, 90, 5);
	draw_rectangel(15,24,89,4);
	GoToXY(28,24);
	printf("%s",MiddleDown);
	GoToXY(28,28);
	printf("%s",MiddleUp);
	for(int i=0;i<3;i++){
		GoToXY(28,25+i);
		printf("%s",V_line);
	}
	GoToXY(20,26);
	printf("MENU");
	//chia tieu de menu, thao tac
	GoToXY(54,24);//chia 1,2
	printf("%s",MiddleDown);
	GoToXY(54,28);
	printf("%s",MiddleUp);
	for(int i=0;i<3;i++){
		GoToXY(54,25+i);
		printf("%s",V_line);
	}
	
	GoToXY(80,24);//chia 2,3
	printf("%s",MiddleDown);
	GoToXY(80,28);
	printf("%s",MiddleUp);
	for(int i=0;i<3;i++){
		GoToXY(80,25+i);
		printf("%s",V_line);
	}
	GoToXY(28,26);//thanh chia ngang : 6phan
	printf("%s",MiddleTurnRight);
	for(int i=0;i<76;i++)
		printf("%s",H_line);
	printf("%s",MiddleTurnLeft);
	
	GoToXY(54,26);//+ 1,2
	printf("%s",PlusSym);
	GoToXY(80,26);//+2,3
	printf("%s",PlusSym);
	//ds
	GoToXY(29,25);
	printf("%s%s di chuyen",Up_arr,Down_arr);
	GoToXY(29,27);
	printf("1.Phat Am");
	GoToXY(55,25);
	printf("2.Chinh sua");
	GoToXY(55,27);
	printf("3.Them tu");
	GoToXY(81,25);
	printf("4.Xoa");
	GoToXY(81,27);
	printf("Esc: Thoat");
	
	GoToXY(16,6);
//	setcolor(15 + 0 * 16);
}