#include <stdio.h>
//H文件

//测试的例子代码。
class Object_2B_1
{
protected:
	Object_2B_1();
	~Object_2B_1() {};

public:
	void do_something();
	static Object_2B_1* instance()
	{
		static Object_2B_1 instance_;
		return &instance_;
	}
protected:
	//static Object_2B_1 instance_;
	int data_2b_1_;
};

//Object_2B_1 Object_2B_1::instance_;

class Object_2B_2
{
protected:
	Object_2B_2();
	~Object_2B_2() {};

public:
	void do_something();
	static Object_2B_2* instance()
	{
		static Object_2B_2 instance_;
		return &instance_;
	}
protected:
	int data_2b_2_;
	//static Object_2B_2 instance_;
};

//Object_2B_2 Object_2B_2::instance_;

//CPP文件
Object_2B_1::Object_2B_1() :
	data_2b_1_(1)
{
	printf("Object_2B_1::Object_2B_1() this:[%p] data_2b_1_ [%d].\n", this, data_2b_1_);
	Object_2B_2::instance()->do_something();
};

void Object_2B_1::do_something()
{
	data_2b_1_ += 10000;
	printf("Object_2B_1::do_something() this:[%p] data_2b_1_ [%d].\n", this, data_2b_1_);

}


Object_2B_2::Object_2B_2() :
	data_2b_2_(2)
{
	printf("Object_2B_2::Object_2B_2() this:[%p] data_2b_2_ [%d].\n", this, data_2b_2_);
	Object_2B_1::instance()->do_something();
};

void Object_2B_2::do_something()
{
	data_2b_2_ += 10000;
	printf("Object_2B_2::do_something() this:[%p] data_2b_2_ [%d].\n", this, data_2b_2_);
}

int main(void)
{
	Object_2B_1::instance()->do_something();
	printf("main() starts..");
	return 0;
}