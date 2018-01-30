/***********************************************************
Name:  Juan Perez   Z#: 23026404
Course: Foundations of Computer Science (COP3014)
Professor: Dr. Lofton Bullard
Due Date: 01/30/18      Due Time: 11:59 PM
Total Points: 20     Assignment 1: call_stats

Description: This is a program that calculates the net cost of a call (net_cost),
              the tax on a call (call_tax)
              and the total cost of the call (total_cost).
*************************************************************/
/*********************************************************
//Following is the declaration of a call record
**********************************************************/
class call_record
{
public:
	string cell_number;
	int relays;
	int call_length;
	double net_cost;
	double tax_rate;
	double call_tax;
	double total_cost;
};
//Prototypes Prototypes
void Input(ifstream &,call_record &);
// void Output(const call_record &);
// void Process(call_record &);
//Main PROGRAM
int main( )
{

	call_record customer_record;

	ifstream in;    //declaring an input file stream
	in.open("call_data.txt");

	if (in.fail())
	{
		cout<<"Input file did not open correctly"<<endl;
	}
	else
	{
		while (!in.eof())
		{
			Input(in,customer_record);
			// Process(customer_record);
			// Output(customer_record);
		}
	}

	in.close();

	return 0;
}
//Function Calls

//Name:  Input
//Precondition: The varialbes cell_num, relays, and call_length have not been initialized
//Postcondition: The variables have been initialized by data  file.
//Description: Get input values from user.
void Input(ifstream & in, call_record & customer_record) // example using the call by reference mechanism in C++ -- call record is passed by reference --note & operator
{

	in>>customer_record.cell_number;
	in>>customer_record.relays;
	in>>customer_record.call_length;
}
