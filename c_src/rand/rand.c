
int seed;

void my_srand(int s) //fun. definition (함수정의)
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 1103515245 + 12345;
	
	return ((unsigned)(seed/65536) % 32768);

}
