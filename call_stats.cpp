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
void Output(const call_record &);
void Process(call_record &);
