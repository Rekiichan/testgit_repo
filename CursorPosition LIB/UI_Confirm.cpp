

void Work_box(char *x){//viec lam hien tai
	SetBackGroundRange ( 0 + 3 * 16, 39, 5,41 , 3);
	setcolor(15 + 3 * 16);
	draw_rectangel(39,5,40,2);
	GoToXY(40,6);
	puts(x);

}
void Confirm_box(char *x){//xac nhan ui
	system("cls");
	TittleOfProgram();
	Work_box(x);
	
	SetBackGroundRange ( 0 + 3 * 16, 24, 12,70 , 6);
	setcolor(15 + 3 * 16);
	draw_rectangel(24,12,69,5);
	GoToXY(43,14);
	printf("BAN CO MUON THUC HIEN YEU CAU NAY?");

	setcolor(15 + 3 * 16);
	GoToXY(43,17);
	printf("[ Y ]");
	GoToXY(75,17);
	printf("[ N ]");	
	
	GoToXY(40,29);
	setcolor(15 + 0 * 16);
}

