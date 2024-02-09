#include <stdio.h>
#include "main.h"
/**
 * print_binary - converts the given number
 * @n: represents the number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	
	unsigned long int c = 524288;
	unsigned long int d = 262144;
	unsigned long int e = 131072;
	unsigned long int f = 65536;
	unsigned long int g = 32768;
	unsigned long int h = 16384;
	unsigned long int i = 8192;
	unsigned long int j = 4096;
	unsigned long int k = 2048;
	unsigned long int l = 1024;
	unsigned long int m = 512;
	unsigned long int ne = 256;
	unsigned long int o = 128;
	unsigned long int p = 64;
	unsigned long int q = 32;
	unsigned long int r = 16;
	unsigned long int s = 8;
	unsigned long int t = 4;
	unsigned long int u = 2;
	unsigned long int v = 1;

	
	int c_set = 0;
	int d_set = 0;
	int e_set = 0;
	int f_set = 0;
	int g_set = 0;
	int h_set = 0;
	int i_set = 0;
	int j_set = 0;
	int k_set = 0;
	int l_set = 0;
	int m_set = 0;
	int n_set = 0;
	int o_set = 0;
	int p_set = 0;
	int q_set = 0;
	int r_set = 0;
	int s_set = 0;
	int t_set = 0;
	int u_set = 0;
	int v_set = 0;

	
	if (n >= c)
	{
		n = n - c;
		c_set = 1;
	}
	if (n >= d) 
	{
		n = n - d;
		d_set = 1;
	}
	if (n >= e)
	{
		n = n - e;
		e_set = 1;
	}
	if (n >= f)
	{
		n = n - f;
		f_set = 1;
	}
	if (n >= g)
	{
		n = n - g;
		g_set = 1;
	}
	if (n >= h)
	{
		n = n - h;
		h_set = 1;
	}
	if (n >= i) 
	{
		n = n - i;
		i_set = 1;
	}
	if (n >= j)
	{
		n = n - j;
		j_set = 1;
	}
	if (n >= k) 
	{
		n = n - k;
		k_set = 1;
	}
	if (n >= l)
	{
		n = n - l;
		l_set = 1;
	}
	if (n >= m)
	{
		n = n - m;
		m_set = 1;
	}
	if (n >= ne)
	{
		n = n - ne;
		n_set = 1;
	}
	if (n >= o)
	{
		n = n - o;
		o_set = 1;
	}
	if (n >= p)
	{
		n = n - p;
		p_set = 1;
	}
	if (n >= q) 
	{
		n = n - q;
		q_set = 1;
	}
	if (n >= r)
	{
		n = n - r;
		r_set = 1;
	}
	if (n >= s) 
	{
		n = n - s;
		s_set = 1;
	}
	if (n >= t)
	{
		n = n - t;
		t_set = 1;
	}
	if (n >= u)
	{
		n = n - u;
		u_set = 1;
	}
	if (n >= v) 
	{
		v_set = 1;
	}
	printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",c_set, d_set, e_set, f_set, g_set, h_set, i_set, j_set, k_set, l_set, m_set, n_set, o_set, p_set, q_set, r_set, s_set, t_set, u_set, v_set);
}


