
using namespace std;

// 建议41 理解指针变量的存储实质
// 指针的4个基本概念
// 1.指针的类型 从语法角度看，只要把指针声明语句里的指针名字去掉，剩下的部分就是指针类型
// 2.指针所指向的类型 从语法看，只需要将指针声明语句中的指针名字和名字左边的指针声明符 "*" 去掉，剩下的部分就是指针所指向的类型
// 3.指针的值 
// 指针的值是指指针本身存储的数值，这个值被编译器当作一个地址，而不是一个一般的数值
// 说一个指针的值是xx，相当于说该指针指向了以 xx 为首地址的一片内存区域，一个指针指向了某块内存区域，相当于说该指针的值是这块内存区域的首地址
// 4.指针本身所占据的内存区  占据4个字节

// 建议42 指针变量必须初始化
// 使用未初始化的指针产生的后果是不确定的，完全取决于程序员的运气。
// 建议43 区别 "int* p = NULL" 和 "*p = NUL"
// 
// 建议44 理解空(null)指针与NULL指针
// 建议44-1 理解空(null)指针与NULL指针的概念
// 建议44-2 用NULL指针终止对递归数据结构的间接引用
// 建议44-2 用NULL指针终止对递归数据结构的间接引用
// 建议44-3 用NULL指针作函数调用失败时的返回值
// 建议44-4 用NULL指针作警戒值 警戒值是标志事物结尾的一个特定值。
// 建议44-5 避免对NULL指针解引用

// 建议45 谨慎使用 void 指针
// 任何类型的指针都可以直接赋值给 void 指针，要将 void 指针赋值给其他类型的指针，必须进行强制类型转换
// 建议45-1 避免对 void 指针进行算术操作
// 进行算法操作的指针必须确定知道其指向数据类型的大小，也就是必须知道内存目的地址的确切值
// 建议45-2 如果函数的参数可以是任意类型指针，应该将其参数声明为 void*

// 建议46 避免使用指针的长度确定它所指向类型的长度
// 建议47 避免把指针转换为对齐要求更严格的指针类型 如 char* 指针类型转 void* 转 int*
// 建议48 避免将一种类型的操作符应用于另一种不兼容的类型
// 在C语言中，允许不同的数据类型之间相互转换
// 由于大多数数据类型的内部表现形式都依赖于系统，如果我们一种类型的操作符应用于另一种不兼容的类型，就可能产生一些未知的意外情况
// 这样的代码也不具有可移植性。
// 编译器一般将连续的位段结构成员分配到相同的 int 长度的存储空间，只要它们完全适合这种存储单位。
// 但是在一个存储单位中，内存的分配顺序由编译器定义的额
// 有些编译器采用 "从左向右" ，即第一个成员占据存储单位的底端位置
// 有些编译器采用 "从右向左" ，即第一个成员占据存储单位的高端位置

// 
struct int32
{
	unsigned int ui1 : 8;
	unsigned int ui2 : 8;
	unsigned int ui3 : 8;
	unsigned int ui4 : 8;  // 占据 8 位的意思
};
class Advise40
{
public:
	Advise40() {};
	~Advise40() {};

	void test_01_error();

	void test_02_demo();
	double* test_03_error(size_t num);

	void test_04_error(void);
	void test_04_right(void);

	void test_05_error(void);
	void test_05_right(void);
};

// 建议49 谨慎指针与整数之间的转换
// C 语言唯一可以在指针和整数之间相互转换的值时 常量0 ，除此之外，其他任何整数和指针之间的相互转换都可能出现不良的后果，具体取决于编辑器
// 一个整数类型可以转换为任何指针类型
// 任何指针类型也可以转换为一个整数类型

// 建议50 区别 "const int* p" 与 "int* const p"

// 建议51 深入理解函数参数的传递方式
// 建议51-1 理解函数参数的传递过程  调用约定
// 建议51-2 掌握函数的参数传递方式   1.值传递 2.地址传递
// 建议51-3 如果函数的参数是指针，避免用该指针区申请动态内存
// 建议51-4 尽量避免使用可变参数

class Advise50
{
public:
	Advise50() {};
	~Advise50() {};


	void test_01_demo(void);

	void test_02_demo(void);
	void test_03_demo(void);

	void test_04_demo(void);
};