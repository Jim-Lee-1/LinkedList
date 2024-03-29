/*
程序名称：学生成绩管理系统
功能要求：录入学生成绩
		  修改学生成绩
		  统计每个学生的总分及平均分
		  能根据学生的平均成绩排序
		  查询学生成绩
		  输出学生成绩单
		  能够保存学生成绩，实现文件的读写
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LEN 10
#define FILE_NAME "学生成绩.txt"

typedef struct {
	char name[NAME_LEN + 1];//姓名
	int number;				//学号
	int chinese;			//语文
	int math;				//数学
	int english;			//英语
	int average;			//平均分
	int sum;				//总分
} student;					//用于存储单个学生的信息

typedef struct node {
	student stu;		//数据域，存储学生信息
	struct node *next;	//指针域，指向下一个节点
} studentNode;			//学生节点

typedef struct {
	studentNode *head;	//头指针
	studentNode *tail;	//尾指针
	int count;			//学生节点总数
} studentList;			//学生链表

void initialize(studentList *L);//初始化链表,创建头节点
void enter(studentList *L);		//录入链表
void display(studentList *L);	//输出链表
void find(studentList *L);		//查找某节点
void modify(studentList *L);	//修改某节点
void sort(studentList *L);		//降序重新建表并输出
void write(studentList *L);		//写入文件，边写边释放空间
void read(studentList *L);		//读取文件，边读边建表

int main() {
	//互动界面
	printf("		**************学生成绩管理系统**************\n");
	printf("		*  1.录入新的学生成绩                      *\n");
	printf("		*  2.按姓名修改学生成绩                    *\n");
	printf("		*  3.按姓名查询学生成绩                    *\n");
	printf("		*  4.输出全部学生的成绩                    *\n");
	printf("		*  5.按平均分输出学生成绩                  *\n");
	printf("		*  6.退出学生成绩管理系统                  *\n");
	printf("		********************************************\n");
	printf("  	                                                \n");
	//创建学生链表
	studentList *L = (studentList *)malloc(sizeof(studentList));
	//初始化学生链表
	initialize(L);
	//从文件里读取数据到链表
	read(L);
	//互动界面是用一个无限循环和一个switch写的
	while (1) {
		int code;
		printf("请输入你想进行的操作对应的数字: ");
		scanf("%d", &code);
		switch (code) {
			case 1:
				enter(L);
				break;
			case 2:
				modify(L);
				break;
			case 3:
				find(L);
				break;
			case 4:
				display(L);
				break;
			case 5:
				sort(L);
				break;
			case 6:
				write(L);
				free(L->head);	//头节点被销毁
				free(L);		//链表被销毁
				return 0;
			default:
				printf("%d是无效的数字，请重新输入！\n\n", code);
				break;
		}
	}
	return 0;
}

void initialize(studentList *L) {
	//创建头节点
	studentNode *s = (studentNode *)malloc(sizeof(studentNode));
	s->next = NULL;
	//初始化链表：
	//头尾指针均指向头节点，初始长度为零
	L->head = s;
	L->tail = s;
	L->count = 0;
}

void enter(studentList *L) {
	//创建新节点
	studentNode *s = (studentNode *)malloc(sizeof(studentNode));
	//键入信息并存到新节点中
	printf("请输入学生姓名：");
	scanf("%s", s->stu.name);
	printf("请输入学生学号：");
	scanf("%d", &s->stu.number);
	printf("请输入语文成绩：");
	scanf("%d", &s->stu.chinese);
	printf("请输入数学成绩：");
	scanf("%d", &s->stu.math);
	printf("请输入英语成绩：");
	scanf("%d", &s->stu.english);
	s->stu.sum = s->stu.chinese + s->stu.math + s->stu.english;
	s->stu.average = s->stu.sum / 3;
	//若链表为空，将尾指针指向新节点
	if (L->head == L->tail) {
		L->tail = s;
	}
	//将新节点插进链表头部（头插法）
	s->next = L->head->next;
	L->head->next = s;
	L->count++;
	//输出互动信息
	printf("信息录入成功！\n\n");
}

void display(studentList *L) {
	printf("共有%d组学生数据：\n", L->count);
	printf("姓名\t\t学号\t\t语文\t\t数学\t\t英语\t\t总分\t\t平均分\n");
	//创建一节点指针指向头节点
	studentNode *p;
	p = L->head;
	//遍历链表输出
	while (p->next) {
		p = p->next;
		printf("%s", p->stu.name);
		printf("\t\t%d", p->stu.number);
		printf("\t\t%d", p->stu.chinese);
		printf("\t\t%d", p->stu.math);
		printf("\t\t%d", p->stu.english);
		printf("\t\t%d", p->stu.sum);
		printf("\t\t%d", p->stu.average);
		printf("\n");
	}
	printf("\n");
}

void find(studentList *L) {
	//让用户输入要查找的学生
	printf("请输入学生姓名：");
	char name[NAME_LEN + 1];
	scanf("%s", name);
	//遍历链表对比名字
	studentNode *p = L->head->next;
	while (p) {
		//符合了就输出并结束函数
		if (strcmp(p->stu.name, name) == 0) {
			printf("姓名\t\t学号\t\t语文\t\t数学\t\t英语\t\t总分\t\t平均分\n");
			printf("%s", p->stu.name);
			printf("\t\t%d", p->stu.number);
			printf("\t\t%d", p->stu.chinese);
			printf("\t\t%d", p->stu.math);
			printf("\t\t%d", p->stu.english);
			printf("\t\t%d", p->stu.sum);
			printf("\t\t%d", p->stu.average);
			printf("\n\n");
			return;
		}
		//名字不符合就下一个
		p = p->next;
	}
	//遍历完里都没找到这个名字
	printf("没找到这个%s的信息！\n\n", name);
}

void modify(studentList *L) {
	//让用户输入要修改的学生
	printf("请输入学生姓名：");
	char name[NAME_LEN + 1];
	scanf("%s", name);
	//遍历链表对比名字
	studentNode *p = L->head->next;
	while (p) {
		//符合了就让用户重新键入并结束函数
		if (strcmp(p->stu.name, name) == 0) {
			printf("请重新输入信息：\n");
			printf("请输入学生学号：");
			scanf("%d", &p->stu.number);
			printf("请输入语文成绩：");
			scanf("%d", &p->stu.chinese);
			printf("请输入数学成绩：");
			scanf("%d", &p->stu.math);
			printf("请输入英语成绩：");
			scanf("%d", &p->stu.english);
			p->stu.sum = p->stu.chinese + p->stu.math + p->stu.english;
			p->stu.average = p->stu.sum / 3;
			printf("信息修改成功！\n\n");
			return;
		}
		//名字不符合就下一个
		p = p->next;
	}
	//遍历完里都没找到这个名字
	printf("没找到这个%s的信息！\n\n", name);
}

void sort(studentList *L) {
	//两个节点都没有排个屁序
	if (L->count < 2) {
		printf("链表排序完成！\n");
		display(L);
		return;
	}
	//插入排序
	studentNode *p, *pre, *tmp;
	//p指向第二个学生节点
	p = L->head->next;
	//链表从头节点和第一个学生节点处断开
	L->head->next = NULL;
	//从第一个学生节点开始一直往后循环
	while (p) {
		//存好下一个节点的指针
		tmp = p->next;
		//找到插入位置
		pre = L->head;
		while (pre->next != NULL && pre->next->stu.average > p->stu.average)
			pre = pre->next;
		//更新尾指针
		if (pre->next == NULL) {
			L->tail = p;
		}
		//插入
		p->next = pre->next;
		pre->next = p;
		//跳到下一个
		p = tmp;
	}
	printf("链表排序完成！\n");
	display(L);
}

void write(studentList *L) {
	//打开文件流
	FILE *fp = fopen(FILE_NAME, "w");
	if (fp == NULL) {
		printf("文件%s打开失败\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	//将学生节点总数输出在第一行
	fprintf(fp, "%d\n", L->count);
	//创建一节点指针指向头节点
	studentNode *p;
	p = L->head->next;
	//遍历链表，一组数据作为一行输出
	while (p) {
		fprintf(fp, "%s ", p->stu.name);
		fprintf(fp, "%d ", p->stu.number);
		fprintf(fp, "%d ", p->stu.chinese);
		fprintf(fp, "%d ", p->stu.math);
		fprintf(fp, "%d ", p->stu.english);
		fprintf(fp, "%d ", p->stu.sum);
		fprintf(fp, "%d ", p->stu.average);
		fprintf(fp, "\n");
		//输出完成之后释放节点空间
		studentNode *next = p->next;
		free(p);
		p = next;
		L->count--;
	}
	//关闭文件流
	fclose(fp);
	//互动信息
	printf("数据已保存！谢谢使用，再见！\n");
}

void read(studentList *L) {
	//打开文件流
	FILE *fp = fopen(FILE_NAME, "r");
	if (fp == NULL) {
		printf("文件%s打开失败\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	//读取第一行的学生节点总数
	fscanf(fp, "%d", &L->count);
	//循环读取数据，循环次数为count
	for (int i = 1; i <= L->count; i++) {
		//创建新节点
		studentNode *s = (studentNode *)malloc(sizeof(studentNode));
		//读取数据
		fscanf(fp, "%s ", s->stu.name);
		fscanf(fp, "%d ", &s->stu.number);
		fscanf(fp, "%d ", &s->stu.chinese);
		fscanf(fp, "%d ", &s->stu.math);
		fscanf(fp, "%d ", &s->stu.english);
		fscanf(fp, "%d ", &s->stu.sum);
		fscanf(fp, "%d ", &s->stu.average);
		//将新节点插进链表尾部（尾插法）
		s->next = NULL;
		L->tail->next = s;
		L->tail = s;
	}
	//关闭文件流
	fclose(fp);
}