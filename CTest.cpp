// Author: Archan Gowda, Valeo GmbH
// mail: archan.gbd@gmail.com

Class CTest
{		
	private:
		int m_testVar1;
		float m_testVar2;
		
	public:
		Ctest(int var1, float var2);
		void vSetMemberVariables(int var1, float var2);
		int iGetMemberVariable1()
		{
			return m_testVar1;
		}		
}: