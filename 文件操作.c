#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

//д�ļ���һ��һ���ַ�дfputc
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

//���ļ���һ��һ���ַ��Ķ�fgetc
void my_read(){
	FILE *fp = fopen("D:\\Progam\\VisualStudio2013\\Project\\test\\test\\test.txt", "r");
	if (fp == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	printf("%c", fgetc(fp));
	printf("%c", fgetc(fp));
	printf("%c�ļ����ݶ�ȡ���!", fgetc(fp));
	printf("%c", fgetc(fp));
	fclose(fp);
	fp = NULL;
}

//���ļ���һ��һ�У�fgets && fputs
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


//��ʽ�����������fprintf
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

//��ʽ�����뺯��
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

//�ļ������дfseek
void my_fseekt(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. ��λ�ļ�ָ��
	fseek(pf, 4, SEEK_CUR);
	//2.��ȡ
	int ch = fgetc(pf); 
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
}

//�����ļ�ָ���������ʼλ�õ�ƫ����
void my_ftell(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. ��λ�ļ�ָ��
	fseek(pf, -2, SEEK_END);
	//2.��ȡ
	int pos = ftell(pf);
	printf("%d\n", pos);
	fclose(pf);
	pf = NULL;
}

//�ļ�ָ��ص��ļ���ʼλ��
void my_rewind(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. ��λ�ļ�ָ��
	fseek(pf, 4, SEEK_CUR);
	rewind(pf);
	//2.��ȡ
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
}

//�ļ���ȡ����
void my_feof(){
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	//1. ��λ�ļ�ָ��
	fseek(pf, 4, SEEK_CUR);
	rewind(pf);
	//2.��ȡ
	int ch = fgetc(pf);
	printf("%d\n", ch);
	fclose(pf);
	pf = NULL;
}

//��ȡ�ļ����жϽ���
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
