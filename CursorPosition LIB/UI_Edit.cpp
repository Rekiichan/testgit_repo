void ui_NghiaGoc(){
	system("cls");
	TittleOfProgram();
	//o tu hien tai
		SetBackGroundRange ( 0 + 3 * 16, 22, 5, 77, 19);
		
		draw_rectangel(22,5,75,18);
		//thanh giua 
		GoToXY(22,7);
		printf("%s",MiddleTurnRight);
		for(int i = 0; i<75;i++)
			printf("%s",H_line);
		printf("%s",MiddleTurnLeft);
		//tu hien tai
		GoToXY(53,6);
		printf("TU HIEN TAI");
		
		//Nhap nghia goc
		SetBackGroundRange ( 0 + 3 * 16, 35, 26, 52, 3);
		draw_rectangel(35,26,51,2);
		GoToXY(36,27);
		printf("Nhap NGHIA GOC moi: ");
		
		
		GoToXY(55,29);
		setcolor(15 + 0 * 16);
}
void ui_PhatAm(){
		system("cls");
		TittleOfProgram();
	//o tu hien tai
		SetBackGroundRange ( 0 + 3 * 16, 22, 5, 77, 19);
		
		draw_rectangel(22,5,75,18);
		//thanh giua 
		GoToXY(22,7);
		printf("%s",MiddleTurnRight);
		for(int i = 0; i<75;i++)
			printf("%s",H_line);
		printf("%s",MiddleTurnLeft);
		//tu hien tai
		GoToXY(53,6);
		printf("TU HIEN TAI");
		
		//Nhap phien am
		SetBackGroundRange ( 0 + 3 * 16, 35, 26, 52, 3);
		draw_rectangel(35,26,51,2);
		GoToXY(36,27);
		printf("Nhap PHIEN AM moi: ");
		
		
		GoToXY(55,29);
		setcolor(15 + 0 * 16);
}
void ui_TuLoai(){
	system("cls");
		TittleOfProgram();
	//o tu hien tai
		SetBackGroundRange ( 0 + 3 * 16, 30, 5, 60, 11);
		
		draw_rectangel(30,5,58,10);
		//thanh giua 
		GoToXY(30,7);
		printf("%s",MiddleTurnRight);
		for(int i = 0; i<58;i++)
			printf("%s",H_line);
		printf("%s",MiddleTurnLeft);
		//tu hien tai
		GoToXY(53,6);
		printf("DANH SACH TU LOAI");
		
		
		
		
		
		GoToXY(55,29);
		setcolor(15 + 0 * 16);
}
void ui_Nghia(){
	system("cls");
	TittleOfProgram();
	//o tu hien tai
		SetBackGroundRange ( 0 + 3 * 16, 22, 5, 77, 19);
		
		draw_rectangel(22,5,75,18);
		//thanh giua 
		GoToXY(22,7);
		printf("%s",MiddleTurnRight);
		for(int i = 0; i<75;i++)
			printf("%s",H_line);
		printf("%s",MiddleTurnLeft);
		//tu hien tai
		GoToXY(53,6);
		printf("DANH SACH NGHIA");
		
		//Nhap nghia goc
		SetBackGroundRange ( 0 + 3 * 16, 35, 22, 52, 7);
		draw_rectangel(35,22,51,6);
		
		
		
			
		
		
		
		GoToXY(55,29);
		setcolor(15 + 0 * 16);
}
void UI_edit(){
		system("cls");
	TittleOfProgram();
		
	setcolor(15 + 0 * 16);
	//ve khung lon phai
	SetBackGroundRange ( 0 + 3 * 16, 25, 6, 90, 22);
	//khung be  trai
	SetBackGroundRange ( 0 + 3 * 16, 5, 9, 20, 19);
	setcolor(15 + 3 * 16);
	//===ve khung tong hop
		//thanh tr�n
		GoToXY(25,6);
		printf("%s",TopLeft);
		for(int i = 0; i<88;i++)
			printf("%s",H_line);
		printf("%s",TopRight);
		//thanh doc
		for(int i = 0; i<2;i++){
			GoToXY(25,7+i);
			printf("%s",V_line);
			GoToXY(114,7+i);
			printf("%s",V_line);
		}
		GoToXY(114,9);
		printf("%s",V_line);
		//goc trai tren
		GoToXY(25,9);
		printf("%s",PlusSym);
		for(int i = 0; i<88;i++)
			printf("%s",H_line);
		printf("%s",MiddleTurnLeft);
		GoToXY(5,9);
		printf("%s",TopLeft);
		for(int i = 0; i<19;i++)
			printf("%s",H_line);
		
		
		//thanh doc
		for(int i = 0; i<16;i++){
			GoToXY(5,10+i);
			printf("%s",V_line);
			GoToXY(114,10+i);
			printf("%s",V_line);
			GoToXY(25,10+i);
			printf("%s",V_line);
		}
		//thanh ngang duoi cung
		GoToXY(5,26);
		printf("%s",BotLeft);
		for(int i = 0; i<108;i++)
			printf("%s",H_line);
		printf("%s",BotRight);
		GoToXY(25,26);
		printf("%s",MiddleUp);
		//thanh ngang menu + tim kiem
		GoToXY(5,13);
		printf("%s",MiddleTurnRight);
		for(int i = 0; i<19;i++)
			printf("%s",H_line);
		printf("%s",MiddleTurnLeft);
		
		
	//===Tieu de : tim kiem
	SetBackGroundRange ( 0 + 14 * 16, 4, 5, 20, 4);
	setcolor(0 + 14 * 16);
	draw_rectangel(4,5,18,2);
	GoToXY(10,6);
	printf("Sua Tu");
	
	//Nhap tim kiem
	
	GoToXY(13,10);
	setcolor(0 + 3 * 16);
	printf("MENU");
	//Menu

	GoToXY(6,14);
	printf("1.Sua NGHIA GOC");
	
	GoToXY(6,16);
	printf("2.Sua PHIEN AM");
	
	GoToXY(6,18);
	printf("3.Sua TU LOAI");
	
	GoToXY(6,20);
	printf("4.Sua NGHIA");
	
	GoToXY(6,25);
	printf("Esc : Quay lai");		
	//noi dung
	GoToXY(65,7);
	printf("NOI DUNG");
	
	
	
	GoToXY(40,29);
	setcolor(15 + 0 * 16);
	
	//================
	
	/*system("pause");
	system("cls");
	NghiaGoc();
	system("pause");
	system("cls");
	PhatAm();	
	system("pause");
	system("cls");
	TuLoai();
	system("pause");
	Nghia();*/
}

