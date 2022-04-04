#ifndef EXP_H
# define EXP_H
class Exp
{
	int base, exp;
public:
	Exp();
	Exp(int b);
	Exp(int b, int e);
	int		getValue();
	int		getExp();
	int		getBase();
	bool	equals(Exp a);
};
#endif