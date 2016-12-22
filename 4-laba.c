#include <iostream>
  
using namespace std;
 
 
class Devices
{
public:
        	virtual double Out()
        	{
                    	return 0;
        	}
        	virtual int Get()
        	{
                    	return 0;
        	}
        	int Power;
};
        	class Analog : public Devices
        	{
        	public:
                    	virtual double Out()
                    	{
                               	return 0;
                    	}
                    	virtual int Get()
                    	{
                               	return 0;
                    	}
                    	int Voltage;
        	};
 
 
                    	class  OperAmpilifier : public Analog
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << " aaae iai?oao iaiiaa?oo??iai aoiao :";
                                           	cin >> NonInvertedOut;
                                           	cout << " aaae iai?oao iiaa?oo??iai aoiao :";
                                           	cin >> InvertedOut;
                                           	cout << " aaae eiao?oi?io i?aneeaiiy :";
                                           	cin >> AmplifiyingKoef;
                                           	OutputVoltage = (NonInvertedOut-InvertedOut)*AmplifiyingKoef;
                                           	return 0;
                               	}
                               	double Out()
                               	{
                                           	return OutputVoltage;
                               	}
                    	private:
                               	int InvertedOut,NonInvertedOut, AmplifiyingKoef, OutputVoltage;
                    	};
 
 
        	
 
        	class Cyfral : public Devices
        	{
        	public:
                    	virtual int Get()
                    	{
                               	return 0;
                    	}
                    	 string Logic;  
        	};
 
 
                    	class Decoder : public Cyfral
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << "Type of logic";
                                           	cin >> Logic;
                                           	cout << Logic << endl;
                                           	return 0;
                                                       	}
                                                       	
                    	private:  
						               	
                    	};
 
 
                    	class BinaryAdder : public Cyfral
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << "Type of logic";
                                           	cin >> Logic;
                                           	cout << Logic << endl;
                                           	return 0;
                               	
                               	}
                               	
                    	private:
                    	};
 
 
        	class Impulse : public Devices
        	{
        	public:
                    	virtual double Out()
                    	{
                               	return 0;
                    	}
                    	virtual int Get()
                    	{
                               	return 0;
                    	}
        	};
        	
        	class SourceVoltage : public Impulse
                    	{
                    	public:
                               	int Get()
                               	{			
                               				cout << " Napryga :";
                               				cin >> Voltage;
                               				cout << " Strum "  ;
                               				cin >> Amperage;
                               				Power = Voltage * Amperage;
                               				cout << "Power :" <<Power << endl;
                               				
                                           	cout << " aaae neeo no?oio";
                                           	cin >> Amperage;
                                           	cout << " aaae iii?";
                                           	cin >> Resistance;              	
                                           	Voltage = Amperage*Resistance;
                    		}
                                           	double Out()
                               	{
                                           	return Voltage;
                               	}
                               	
                    	private:
                               	int Amperage, Resistance, Voltage;
                    	};
 
 
                    	class CurrentSource : public Impulse
                    	{
                    	public:
                               	int Get()
                               	{
                               				cout << " Napryga :";
                               				cin >> Voltage;
                               				cout << " Strum "  ;
                               				cin >> Amperage;
                               				cout << "Power :" <<Power << endl;
                                           	cout << " aaae iai?oao:";
                                           	cin >> Voltage;
                                           	cout << " aaae iii?:";
                                           	cin >> Resistance;
                                           	Amperage=Voltage/Resistance;
                    		}
                                                       	double Out()
                               	{
                                           	return Amperage;
                               	}
                    	
                    	private:
                               	int Amperage, Resistance, Voltage;
                    	};
        	
 
 
int main()
{
        	setlocale (LC_ALL,"Ukrainian");
        	cout << " eaa?e i?eno?ie:" << endl;
        	cout << "1. Iia?aoieiee iianee?aa?" << endl;
        	cout << "2. Aaoeo?aoi? aaieeiai-aanoyeiaee" << endl;
        	cout << "3. Aaieeiaee noiaoi?" << endl;
        	cout << "4. A?a?aei iai?oae" << endl;
        	cout << "5. A?a?aei no?oio" << endl;
        	int choise;
        	cin >> choise;
        	if (choise == 1)
        	{
                    	Analog *ptr1 = new OperAmpilifier;
                    	ptr1->Get();
                    	cout << (ptr1->Out()) << endl;
        	}
 
        	else if (choise == 2)
        	{
                    	Cyfral *ptr2 = new Decoder;
                    	ptr2->Get();
                    	cout << (ptr2->Get()) << endl;
        	}
        	else if (choise == 3)
        	{
                    	Cyfral *ptr3 = new BinaryAdder;
                    	ptr3->Get();
                    	cout << (ptr3->Get()) << endl;
        	}
        	else if (choise == 4)
        	{
                    	Impulse *ptr4 = new SourceVoltage;
                    	ptr4->Get();
                    	cout << (ptr4->Out()) << endl;
        	}
                    	else if (choise == 5)
        	{
                    	Impulse *ptr5 = new SourceVoltage;
                    	ptr5->Get();
                    	cout << (ptr5->Out()) << endl;
        	}
        	else
                    	cout << "Iai?aaeeuiee iiia?" <<endl;
	return 0;
}
