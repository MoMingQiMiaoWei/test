#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>

//#define MAX 1000

#define DEFAULT_SIZE 3

#define MAX_NAME 20
#define MAX_SEX 5
#define  MAX_TELE 12
#define MAX_ADDR 30

enum Option//枚举
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;//记录当前已有元素个数
	int capacity;//记录通讯录的最大容量
};

//声明函数
//初始化通讯录的函数
void InitContact(struct Contact* ps);

//增加一个信息到通讯录
void AddContact(struct Contact* ps);

//打印通讯录的信息
void ShowContact(const struct Contact* ps);

//删除通讯录指定联系人信息
void DelContact(struct Contact* ps);

//查找指定的人
void SearchContact(const struct Contact* ps);

//修改指定联系人
void ModifyContact(struct Contact* ps);

//排序通讯录
void SortContact(struct Contact* ps);

//销毁通讯录
void DestroyContact(struct Contact* ps);