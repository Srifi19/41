char **ft_split(char const *s, char c)
{
	char* str = (char*)s;
	int count;
	int start;
	int end;
	char* head;
	head = (char*)s;
	count = start = end = 0;

	while(str){

		if(*str == c){
			start = count + 1;
			head = start;
		}

		while(head){
			
		}

		str++;
		count++;
		end++;
	}
}
