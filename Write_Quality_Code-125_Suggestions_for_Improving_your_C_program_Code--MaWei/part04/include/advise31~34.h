using namespace std;

// ����31 �����ĳ��󼶱�Ӧ����ͬһ���
// ����32 ������Ϊ�򵥹��ܱ�д����
// �ú�����ʹ�书����ȷ�������廯���Ӷ����ӳ���ɶ��ԣ����ҷ�������ά���Ͳ���

class Advise31
{
public:
	Advise31() {};
	~Advise31() {};

	void test_01_error();
	void test_01_right();

};

// ����33 �����δ����ظ���ͬһ������
// �����������֮����ʵ���Թ������������ͬһ��ܵģ����Կ��ǰѴ�������һ���µĺ���
class Advise33
{
public:
	Advise33() {};
	~Advise33() {};

	void test_01_demo();

};

// ����34 ���������д�������뺯����
// 
// �����뺯���ɶ�����񲢷�ʹ�ã�����Ա��ʹ��ʱ���ص������ݴ�����Ҳ����������ʱ�̱��жϣ��Ժ�������У������ᶪʧ����
// ��ˣ������뺯��Ҫôʹ�ñ��ر�����Ҫô��ʹ��ȫ�ֱ���ʱ�����Լ�������
// 
// �������뺯�������ɳ���һ��������������������ȷ�������Ļ���(ʹ���ź��������ڴ���Ĺؼ����ֽ����ж�)

// ����34-1 �����ں�����ʹ�� static �ֲ�����
// ����34-2 ���⺯������ָ��̬���ݵ�ָ��
// �ں����У�ʹ�� static �ֲ������ᵼ�º�����������;ͬ�������������ָ��̬���ݵ�ָ�룬Ҳ�ᵼ�º�����������
// ��������κβ������뺯��
// �ڳ����У����һ����������������һ���������뺯������ô�������һ��Ҳ�ǲ�������ġ�
// ����34-4 ����ȫ�ֱ�����Ӧͨ�������ź���(��P��V����)�����жϻ��Ƶȷ�������֤�������̰߳�ȫ
// 
// ����34-5 ��������뺯�����̰߳�ȫ����֮��Ĺ�ϵ


class Advise34
{
public:
	Advise34() {};
	~Advise34() {};

	void test_01_error_demo();
	void test_01_right_demo();

	// �����ź���(P��V����)
	void test_02_demo();  // pthread.h �� linux ƽ̨֧�֣�windows ��֧�֣���Ҫ��װ pthreads-w32

};