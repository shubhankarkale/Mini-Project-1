#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cnt=0;
	string var;
	int i,c[24]={0,0,0,0,1,1,2,2,3,3,1,1,2,2,3,3,4,4,4,4,5,5,5,5};
	int b[24]={0,4,0,4,1,1,2,5,3,3,1,1,2,5,3,3,4,0,4,0,5,2,5,2};
	int d[24]={4,4,0,0,3,1,2,2,3,1,3,1,2,2,3,1,4,4,0,0,5,5,5,5};
	int e[24]={0,0,4,4,1,3,2,2,1,3,1,3,2,2,1,3,0,0,4,4,5,5,5,5};

	cout<<"choose case :"<<endl;
	cin>>var;

	//-----------Code for validation------------

	int flag=1;
	for (int i = 0; i < var.length(); i++)
        if (isdigit(var[i]) == false){
            //cout<<"inside if";
            flag=0;
            break;}
    if(flag!=0){
        int val=var[0]-'0';
        cout<<"Input is integer -validated"<<endl;

      	switch(val)
{
	case 1:
	{
	if((c[0]==0)&&(c[1]==0)&&(c[2]==0)&&(c[3]==0))
	{
		cnt++;
	}
	if((c[4]==1)&&(c[5]==1)&&(c[10]==1)&&(c[11]==1))
	{
		cnt++;
	}
	if((c[6]==2)&&(c[7]==2)&&(c[12]==2)&&(c[13]==2))
	{
		cnt++;
	}
	if((c[8]==3)&&(c[9]==3)&&(c[14]==3)&&(c[15]==3))
	{
		cnt++;
	}
	if((c[16]==4)&&(c[17]==4)&&(c[18]==4)&&(c[19]==4))
	{
		cnt++;
	}
	if((c[20]==5)&&(c[21]==5)&&(c[22]==5)&&(c[23]==5))
	{
		cnt++;
	}
	cout<<"complete faces are:"<<cnt<<endl;
	break;
	}

	case 2:
	{
	if((b[0]==0)&&(b[1]==0)&&(b[2]==0)&&(b[3]==0))
	{
		cnt++;
	}
	if((b[4]==1)&&(b[5]==1)&&(b[10]==1)&&(b[11]==1))
	{
		cnt++;
	}
	if((b[6]==2)&&(b[7]==2)&&(b[12]==2)&&(b[13]==2))
	{
		cnt++;
	}
	if((b[8]==3)&&(b[9]==3)&&(b[14]==3)&&(b[15]==3))
	{
		cnt++;
	}
	if((b[16]==4)&&(b[17]==4)&&(b[18]==4)&&(b[19]==4))
	{
		cnt++;
	}
	if((b[20]==5)&&(b[21]==5)&&(b[22]==5)&&(b[23]==5))
	{
		cnt++;
	}
	cout<<"complete faces are:"<<cnt<<endl;
	break ;
	}

	case 3:
	{
	if((d[0]==0)&&(d[1]==0)&&(d[2]==0)&&(d[3]==0))
	{
		cnt++;
	}
	if((d[4]==1)&&(d[5]==1)&&(d[10]==1)&&(d[11]==1))
	{
		cnt++;
	}
	if((d[6]==2)&&(d[7]==2)&&(d[12]==2)&&(d[13]==2))
	{
		cnt++;
	}
	if((d[8]==3)&&(d[9]==3)&&(d[14]==3)&&(d[15]==3))
	{
		cnt++;
	}
	if((d[16]==4)&&(d[17]==4)&&(d[18]==4)&&(d[19]==4))
	{
		cnt++;
	}
	if((d[20]==5)&&(d[21]==5)&&(d[22]==5)&&(d[23]==5))

	{
		cnt++;
	}
	cout<<"complete faces are:"<<cnt<<endl;
	break;
	}

	case 4:
	{
	if((e[0]==0)&&(e[1]==0)&&(e[2]==0)&&(e[3]==0))
	{
		cnt++;
	}
	if((e[4]==1)&&(e[5]==1)&&(e[10]==1)&&(e[11]==1))
	{
		cnt++;
	}
	if((e[6]==2)&&(e[7]==2)&&(e[12]==2)&&(e[13]==2))
	{
		cnt++;
	}
	if((e[8]==3)&&(e[9]==3)&&(e[14]==3)&&(e[15]==3))
	{
		cnt++;
	}
	if((e[16]==4)&&(e[17]==4)&&(e[18]==4)&&(e[19]==4))
	{
		cnt++;
	}
	if((e[20]==5)&&(e[21]==5)&&(e[22]==5)&&(e[23]==5))

	{
		cnt++;
	}
	cout<<"complete faces are:"<<cnt<<endl;
	break;
		default:
		cout<<"invalid case"<<endl;
		break;
	}
}




    }

    else{
        cout<<"Invalid input program aborted";

    }







	return 0;
}
