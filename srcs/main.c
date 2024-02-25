#include "../header/philo.h"

t_bool	is_ok(int arc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < arc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > '9' && argv[i][j] < '0')
				return (FALSE);
			j ++;
		}
		i ++;
	}
	return (TRUE);
}

int	main(int arc, char **argv)
{
	t_philo	*philos;

	philos = NULL;
	if (arc != 5 && arc != 6)
		return (1);
	if (!is_ok (arc, argv))
		return (1);
	t_creat_philo (arc, argv, philos);
	return (0);
}
