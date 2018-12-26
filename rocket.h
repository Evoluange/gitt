#include<ziyanchezaiyinxiang.h>
#include<donglixitong.h>
#include<nengyuanxitong.h>
#include<chengzaixitong.h>
#include<tuijianxitong.h>
class nengyuanxitong
{
	float AddEnergy();
	float UseEnergy();
}
class fadongji
{
	
}
class yinxiang
{
	
}


class fadongji_rocket:public fadongji //火箭发动机
{
	
}
class yinxiang:public yinxiang_rocket //箭载音响
{
	
}

class jianshen //箭身
{
	
}
class Rocket {
    public:
		Rocket(energy,tyre);
		~ Rocket();
        //virtual float AddEnergy(float add);
        //virtual int ZAizhong(bool add, int num);
        virtual float reflect();//发射卫星

    private:
       // float m_fEnergy;   
       // int nPeople;        
       //donglixitong m_tDongliXitong;
      fadongji_rocket *m_tfadongji;//发动机
	  
	  jianshen *m_tjianshen;//箭身
	  
}

class AddElectStation
{
	public:
		float Add();
}
class XueErSiRoeket: public Rocket {
    public:
        string m_sType = "XueErSi";
        int TakeClass(string taker, string history) //根据成员和历史数据推荐课程
        {
        }
    private: 
	   yinxiang_rocket *m_tyinxiang_rocket;//箭载音响
}
