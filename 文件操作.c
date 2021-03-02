#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

//写文件，一个一个字符写fputc
void my_fputc(){
	FILE *fp = fopen("D:\\Progam\\VisualStudio2013\\Project\\test\\test\\test.txt", "w");
	if (fp == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	fputc('b', fp);
	fputc('i', fp);
	fputc('t', fp);
	fclose(fp);
	fp = NULL;
}

//读文件：一个一个字符的读fgetc
void my_read(){
	FILE *fp = fopen("D:\\Progam\\VisualStudio2013\\Project\\test\\test\\test.txt", "r");
	if (fp == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	printf("%c", fgetc(fp));
	printf("%c", fgetc(fp));
	printf("%c文件内容读取完毕!", fgetc(fp));
	printf("%c", fgetc(fp));
	fclose(fp);
	fp = NULL;
}

//读文件：一行一行，fgets && fputs
void my_std(){
	/*int ch = fgetc(stdin);
	fputc(ch, stdout);*/

	char ch1[1024] = { 0 };
	fgets(ch1, 1024, stdin);
	fputs(ch1, stdout);
}

//fgets
void my_fgets(){
	char buf[1024] = {0};
	FILE *fp = fopen("D:\\Progam\\VisualStudio2013\\Project\\test\\test\\test.txt", "r");
	if (fp == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	fgets(buf, 1024, fp);
	/*printf("%s", buf);*/
	puts(buf);

	fgets(buf, 1024, fp);
	/*printf("%s", buf);*/
	puts(buf);

	fclose(fp);
	fp = NULL;
}


//格式化输出函数：fprintf
void my_fprintf(){
	FILE *fp = fopen("D:\\Progam\\VisualStudio2013\\Project\\test\\test\\test.txt", "w");
	if (fp == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	struct S{
		int n;
		float score;
		char arr[20];
	};
	struct S s = { 10, 3.14f, "Hello" };
	fprintf(fp, "%d %f %s", s.n, s.score, s.arr);
	fclose(fp);
	fp = NULL;
}

//格式化输入函数
void my_fscanf(){
	FILE *fp = fopen("D:\\Progam\\VisualStudio2013\\Project\\test\\test\\test.txt", "r");
	if (fp == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	struct S{
		int n;
		float score;
		char arr[20];
	};
	struct S s = { 0 };
	fscanf(fp, "%d %f %s", &(s.n), &(s.score), &(s.arr));
	printf("%d %f %s", s.n, s.score, s.arr);
	fclose(fp);
	fp = NULL;
}

//文件随机读写fseek
void my_fseekt(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. 定位文件指针
	fseek(pf, 4, SEEK_CUR);
	//2.读取
	int ch = fgetc(pf); 
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
}

//返回文件指针相对于起始位置的偏移量
void my_ftell(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. 定位文件指针
	fseek(pf, -2, SEEK_END);
	//2.读取
	int pos = ftell(pf);
	printf("%d\n", pos);
	fclose(pf);
	pf = NULL;
}

//文件指针回到文件起始位置
void my_rewind(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. 定位文件指针
	fseek(pf, 4, SEEK_CUR);
	rewind(pf);
	//2.读取
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
}

//文件读取结束
void my_feof(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. 定位文件指针
	fseek(pf, 4, SEEK_CUR);
	rewind(pf);
	//2.读取
	int ch = fgetc(pf);
	printf("%d\n", ch);
	fclose(pf);
	pf = NULL;
}

//读取文件并判断结束
void my_IO(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		perror("test.txt Fail");
		return;
	}
	int ch;
	while ((ch = fgetc(pf)) != EOF){
		putchar(ch);
	}
	if (ferror(pf)){
		printf("error\n");
	}
	else if(feof(pf)){
		printf("end of file!\n");
	}
	fclose(pf);
	pf = NULL;
}
int main(){
	/*my_fputc();
	my_read();
	my_std();
	my_fgets();
	my_fprintf();
	my_fscanf();
	my_fseek();
	my_ftell();
	my_rewind();
	my_feof();*/
	my_IO();
	return 0;
}
