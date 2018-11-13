void main()
{
	bool one = true;
	bool zero = false;


	return 0;
}

void door_and(bool a, bool b)
{
	return a and b;
}

void door_or(bool a, bool b)
{
	return a or b;
}

void door_not(bool a)
{
	return (not a);
}

void door_nor(bool a, bool b)
{
	return not(door_or(a, b));
}

void door_nand(bool a, bool b)
{
	return not(door_and(a, b));
}

void door_xnor(bool a, bool b)
{
	return (door_nand(door_or(a, b)),door_nand(a, b));
}

void door_xor(bool a, bool b)
{
	bool res = door_nand(a, b);
	return (door_nand(door_nand(a, res), door_nand(res, b)));
}

void table(int number_variables)
{
	int length_line = 2**number_variables;
	int length_columns = number_variables + 1;

	bool table[length_line][length_columns];
	int opt;
	bool decision = false;
	for (int j = 0; j < length_columns - 1 ; ++j)
	{
		opt = 2**j+length_columns-1;
		for (int i = 0; i < length_line - 1; ++i)
		{
			if(i % opt == 0)
			{
				decision = not(decision);
			}
			
			table[i][j] = decision;
		}
	}
}


