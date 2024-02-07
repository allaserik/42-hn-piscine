#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_cellcheck(int arr[4][4], int i, int possib[24][4], int row)
{
		int k = 0;
		int l = row;
		
		while(l>0)
		{
			k = 0;
			while(k<4)
			{
				if (arr[row - l][k] == possib[i][k])
				{
					return 0;
				}
			k++;
			}
			l--;
		}
		return 1;
}

	int ft_columncheck(int possib[24][4], int i, char *s1)
{
	int j = 0;
	int check = 0;
	while (j < 4)
	{
		int colclue = (s1[j] - 48);
		if (colclue == 4 && possib[i][j] == 1)
		{
			check++;
		}
		else if (colclue == 3 && (possib[i][j] == 1 || possib[i][j] == 2))
		{
			check++;
		}
		else if (colclue == 2 && (possib[i][j] == 1 || possib[i][j] == 2 || possib[i][j] == 3))
		{
			check++;
		}
		else if (colclue == 1 && (possib[i][j] == 4))
		{
			check++;
		}else{
			check = 0;
			return 0;
		}
		j++;
	}
	if(check==4)
	{
	check=0;
	return 1;
	}
return 0;
}

int ft_righttoleftcheck(int possib[24][4], int i, char *s1, int row){
	int rowclue = (s1[(12 + row)] - 48);
	int righttoleftcheck = 0;
	if (rowclue == 4 && possib[i][3] == 1)
	{
		righttoleftcheck = 1;
	}
	else if (rowclue == 3 && (possib[i][3] == 1 || possib[i][3] == 2))
	{
		righttoleftcheck = 1;
	}
	else if (rowclue == 2 && (possib[i][3] == 1 || possib[i][3] == 2 || possib[i][3] == 3))
	{
		righttoleftcheck = 1;
	}
	else if (rowclue == 1 && (possib[i][3] == 4))
	{
		righttoleftcheck = 1;
	}else
	{
		return 0;
	}
	return 1;
}

	int ft_rowcheck(int arr[4][4], int possib[24][4], char *s1, int row)
{
	int i=0;
	int leftrightcheck = 0;
	while(i<24)
	{
		leftrightcheck = 0;
			int rowclue = (s1[(8 + row )] - 48);
		
			if (rowclue == 4 && possib[i][0] == 1)
			{
				leftrightcheck = 1;
			}
			else if (rowclue == 3 && (possib[i][0] == 1 || possib[i][0] == 2))
			{
				leftrightcheck = 1;
			}
 			else if (rowclue == 2 && (possib[i][0] == 1 || possib[i][0] == 2 || possib[i][0] == 3))
			{
				leftrightcheck = 1;
			}
			else if (rowclue == 1 && (possib[i][0] == 4))
			{
 				leftrightcheck = 1;
			}
			if (leftrightcheck)
			{
				if (ft_righttoleftcheck(possib, i, s1,row))
				{
					if(row == 0)
						{if (ft_columncheck(possib, i, s1))
						{

							int k = 0;
							int l = 0;
							while (k < 4)
							{
								arr[l][k] = possib[i][k];
								k++;
							}
							l++;
							row++;
							i = -1;
						}}
						else 
						{
						if (ft_cellcheck(arr, i, possib, row))
						{
							int k = 0;
							int l = 0;
							
							while (k < 4)
							{
								arr[row][k] = possib[i][k];
								k++;
							}
							int m = 0;
							int t = 0;
							while (m < 4)
							{
								t=0;
								while(t<4)
								{
									t++;
								}
								m++;
								 
							}
							l++;
							row++;
							i = -1;
						}
						}
				}
			}
			
				i++;
	}
			
	return 0;
}

void ft_logic(char *s1, int arr[4][4])
{
	int possib[24][4] =
		{
			{1, 2, 3, 4}, 
			{2, 1, 3, 4}, 
			{3, 1, 2, 4}, 
			{1, 3, 2, 4}, 
			{2, 3, 1, 4}, 
			{3, 2, 1, 4}, 
			{3, 2, 4, 1}, 
			{2, 3, 4, 1}, 
			{4, 3, 2, 1}, 
			{3, 4, 2, 1}, 
			{2, 4, 3, 1}, 
			{4, 2, 3, 1}, 
			{4, 1, 3, 2}, 
			{1, 4, 3, 2}, 
			{3, 4, 1, 2}, 
			{4, 3, 1, 2}, 
			{1, 3, 4, 2}, 
			{3, 1, 4, 2}, 
			{2, 1, 4, 3}, 
			{1, 2, 4, 3}, 
			{4, 2, 1, 3}, 
			{2, 4, 1, 3}, 
			{1, 4, 2, 3}, 
			{4, 1, 2, 3}};

	int row = 0;
	while(row<4)
	{
	ft_rowcheck(arr, possib, s1,row);
		row++;
	}
}

char *ft_inputformatter(char *s1)
{
	static char s2[16]; 
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] <= '9' && s1[i] >= '0')
		{
			s2[j] = s1[i];
			j++;
		}
		i++;
	}
	s2[j] = '\0';
	return s2;
}

int ft_isvalid(char *s1)
{
	int i = 0;
	int isspace = 0;
	int isvalid = 1;

	while (s1[i] != '\0')
	{
		if (s1[i] == ' ' && isspace)
		{
			isspace = 0;
		}
		else if (s1[i] <= '4' && s1[i] >= '1')
		{
			isspace = 1;
		}
			else
			{
				isvalid = 0;
				break;
			}
		i++;
	}
	if(i!=31)
	{
		isvalid = 0;
	}
	return isvalid;
}

int main(int argc, char *argv[])
{
	char *s2;

	int arr[4][4] = {
		{9, 9, 9, 9},
		{9, 9, 9, 9},
		{9, 9, 9, 9},
		{9, 9, 9, 9},
	};

	if(argc !=2)
	{
		write(1, "Invalid input\n", 14);
		return 0;
	}

	if (ft_isvalid(argv[1]))
	{
		s2 = ft_inputformatter(argv[1]);
	}
	else
	{
		write(1,"Invalid input\n",14);
		return 0;
	}
	ft_logic(s2, arr);
	int i = 0;
	int j = 0;
	while(i<4)
	{
		j = 0;
		while(j<4)
		{
			ft_putchar(arr[i][j] + 48);
			if(j!=3)
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return 0;
}
