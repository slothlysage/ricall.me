#include "ft_db.h"

int		main(int ac, char** av)
{
    t_db    *db;
    char    *shold;
    char    **newav;
    int     i = 0;
    int     num;
    int     acnew;
    FILE	*fp;

	printf("Welcome to derp base HQ!\n");
	help();
	while (1)
	{
		fp = fopen("derpbase.db", "r+");
		i = 0;
		shold = (char*)malloc(sizeof(char) * 1000);
		newav = (char**)malloc(sizeof(char*) * 1000);
		if (!shold || !newav)
			exit(EXIT_FAILURE);
		newav[i] = ft_strdup("derp");
		i++;
		ft_putendl("What would you like to do?");
		fflush(stdout);
		scanf("%s", shold);
		if (strcmp(shold, "print_all") != 0 && strcmp(shold, "print") != 0 && strcmp(shold, "add") != 0 && strcmp(shold, "edit") != 0 && strcmp(shold, "export_all") != 0 && strcmp(shold, "export_ent") != 0 && strcmp(shold, "delete_ent") != 0 && strcmp(shold, "delete_all") != 0 && strcmp(shold, "delete_data") != 0 && strcmp(shold, "help") != 0 && strcmp(shold, "exit") != 0)
		{
			ft_putendl("That wasn't a command");
			return (0);
		}
		else if (strcmp(shold, "exit") == 0)
		{
			return (0);
		}
		else
		{
			newav[i] = ft_strdup(shold);
			i++;
			if (strcmp(shold, "add") == 0 || strcmp(shold, "edit") == 0 || strcmp(shold, "delete_data") == 0)
			{
				printf("How many entries are you working with:");
				scanf("%s", shold);
				num = ft_atoi(shold);
				if (num == 0)
				{
					ft_putendl("That is not a number");
					return(0);
				}
				else
				{
					newav[i] = ft_strdup(shold);
					i++;
					printf("what Key are you working with?:");
					fflush(stdout);
					scanf("%s", shold);
					newav[i] = ft_strdup(shold);
					i++;
					acnew = num + 4;
					while (num--)
					{
						printf("data:");
						fflush(stdout);
						scanf("%s", shold);
						newav[i] = ft_strdup(shold);
						i++;
					}
					newav[i] = 0;
				}
			}
			else if (strcmp(shold, "print") == 0 || strcmp(shold, "delete_ent") == 0 || strcmp(shold, "export_ent") == 0)
			{
				printf("what Key are you working with?:");
				fflush(stdout);
				scanf("%s", shold);
				newav[i] = ft_strdup(shold);
				i++;
				acnew = 3;
			}
			else
				acnew = 2;
		}
		newav[i] = 0;
		db = init_db(fp, acnew, newav);
		check_query(db, 0);
		db_2file(db);
		fclose(fp);
	}
}
