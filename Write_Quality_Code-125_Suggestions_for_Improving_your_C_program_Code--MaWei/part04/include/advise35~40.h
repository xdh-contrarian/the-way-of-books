

using namespace std;

// 建议35 尽量避免设计多参数函数
// 在设计函数时，为了减少函数间接口的复杂度，应该尽量避免设计多参数函数。
// 对于不使用的参数应该坚决去掉，从而保证参数的简单性
// 参数命名要恰当，容易理解，参数顺序要合理，遵循程序员的一般编程习惯
// 1.一般情况下，将目的参数放在前面，源参数放在后面 如 char* StrCopy(char* strDest,const char* strSrc);
// 建议35-1 没有参数的参数必须使用 void 填充
// 在函数设计中，如果函数没有参数，或者函数不允许接受参数，则必须使用关键字 void 进行填充 参照示例01
// 建议35-2 尽量避免在非调度函数中使用控制参数
// 在函数设计中，将函数简单分为两大类：调度函数与非调度函数(非调度函数一般称为功能函数或实现函数)
// 调度函数
// 指根据输入的消息类型或控制命令来启动相应的功能实体(即函数或过程)的函数
// 调度函数本身不能提供功能实现，相反，必须委托给实现函数来完成具体的功能。
// 调度函数与实现函数的分离设计也满足了单一职责的原则，即调度的不实现，实现的不调度
// 建议35-3 避免将函数的参数作为工作变量
// 将函数的参数作为工作变量，有可能错误地改变参数内容
// 建议35-4 使用 const 防止指针类型的输入参数在函数体内被意外修改

class Advise35
{
public:
	Advise35() {};
	~Advise35() {};

	void test_01_demo();

	void test_02_demo(void);

	void test_03_error(size_t index, size_t* sum);
	void test_03_right(size_t index, size_t* sum);
};

// 建议37 确保函数体的 "入口" 与 "出口" 安全性
// 建议37-1 尽量在函数体入口处对参数做有效性检查
// 建议37-2 尽量在函数体出口处对 return 语句做安全性检查
// 要搞清楚返回的究竟是 "值" "指针" 还是引用
// 在返回类型是 char 的函数中,return 语句后也应该是char类型的值
// 在返回 Int 的函数中，如果要停止调用函数，return 语句最好返回 0
// return 语句不可返回指向 "栈内存" 的指针或引用，该内存在函数体结束时被自动销毁
// 可以通过几种方式解答
// 1.定义全局变量返回
// 2.使用 malloc() 函数动态分配内存，一定要释放内存
// 3.将变量声明为 static 静态变量
// 4.使用字符串常量，因为字符串常量存储在静态存储区内
// 

class Advise37
{
public:
	Advise37() {};
	~Advise37() {};

	void test_01_demo();

};

// 建议38 在调用函数时，必须对返回值进行判断，同时对错误的返回值还要有相应的错误处理
// 建议39 尽量减少函数本身或者函数间的递归调用
// 递归之所以能实现，是因为函数的每个执行过程都在堆栈中有自己的形参和局部变量的副本，而这些副本和函数的其他执行过程毫不相干
// 递归的最大缺陷是增加了系统的开销，没调用一个函数，系统就需要为函数准备堆栈空间用于存储参数信息，如果频繁进行递归调用，系统需要为其开辟大量的堆栈空间
// 在允许的情况下，尽量使用其他算法来代替递归算法，能不使用递归就不使用递归


// 建议40 尽量使用 inline 内联函数来替代 #define 宏
// 宏定义容易产生二义性
// 对宏定义来讲，宏是由预处理器对宏进行替代，二内联函数则是通过编译器控制来实现的。
// 内联函数是真正的函数，在需要用到的时候，内联函数像宏一样展开，所以取消了函数的参数压栈，减少了调用的空间开销
// 内联函数使用注意：
// 1.在内联函数中不允许用循环语句与开关语句
// 2.递归函数不能用作内联函数
// 3.内联函数的定义必须出现在内联函数第一次调用之前
// 4.内联函数只适合1~5行语句的小函数，而对于一个含有很多语句的大函数，函数调用和返回的开销相对于来说微不足道的
class Advise39
{
public:
	Advise39() {};
	~Advise39() {};

	void test_01_demo();  // 递归算法
	void test_02_demo();  // 迭代算法

	void test_03_demo();
};

