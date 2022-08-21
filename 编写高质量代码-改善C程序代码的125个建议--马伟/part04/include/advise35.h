

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
