#include <graphics.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <Mmsystem.h>		// 使用该计时器必须包含的文件
#pragma comment ( lib, "Winmm.lib" )
#include "picture.h"
// 主函数
void main(){
	initgraph(1200,800);//生成画布   x  ---->>右    y   ---下
	//播放背景音乐   .  表示当前目录
	setcolor(YELLOW);
	setfont		( 36, 0, "楷体"	);
	outtextxy	( 370, 100, "yy滺滺__出厂 .... ^_^" );
	
	load();
	mciSendString("open F://cyuyan//fire//bk.mp3 alias bk", 0, 0, 0);//绝对路径
	mciSendString( "play bk repeat", 0, 0, 0 );
	getchar();
}