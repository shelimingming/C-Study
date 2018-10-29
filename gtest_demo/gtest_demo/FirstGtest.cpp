//FirstGtest.cpp
#include"gtest\gtest.h"
#include"CBox.h"

//CBox测试类，继承Test对Box进行测试使用
class CBox_test : public testing::Test
{
protected:
	CBox* c;
	virtual void SetUp()
	{
		c = new CBox(2, 3, 4);
	}

	virtual void TearDown()
	{
		delete this->c;
	}
};

TEST(CBox, case1)
{
	CBox  box1{ 78.0, 24.0, 18.0 };
	CBox box2;
	EXPECT_LT(23.0, box1.volume());
}

TEST_F(CBox_test, case2)
{
	EXPECT_EQ(4, c->volume());
}

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}