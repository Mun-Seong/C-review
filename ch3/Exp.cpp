#include "../ch3/Exp.h"

Exp::Exp() : Exp(1, 1) {}
Exp::Exp(int b) : Exp(b, 1) {}
Exp::Exp(int b, int e) {base = b; exp = e;}
int		Exp::getValue()
{
	int	ret = 1;
	while (exp >= 1)
	{
		ret = ret * base;
		exp--;
	}
	return (ret);
}
int		Exp::getBase() {return (base);}
int		Exp::getExp() {return (exp);}
bool	Exp::equals(Exp a)
{
	return (this->getValue() == a.getValue());
}