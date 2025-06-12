int32_t task_hash_f(int32_t a, int32_t b)
{
	int32_t a2 = a;
	int32_t b2 = b;
	int32_t x;
	int32_t y;
	int32_t hash = 17;
	for (int i = 0; i < 8; ++i)
	{
		x = a2;
		y = b2;
		hash = hash * 23 + (x ^ ((y << 13) | (y >> 19)));
		a2 = hash;
		hash = hash * 23 + (y ^ ((x << 7) | (x >> 25)));
		b2 = hash;
	}
	return hash;
}

// vSize hab ich in dem peripheral auf 8 gesetzt
void task_map_f(uint8_t vSize, int32_t *buf, uint32_t mappingVal)
{
	for (unsigned i = 0; i < vSize; ++i)
	{
		buf[i] = (buf[i] & mappingVal) + 19;
	}
}

uint32_t gcd(uint32_t a, uint32_t b)
{
/*
 * inputs:  [a, b]
 *  outputs: [ready, a]
 *  ready := False
 *  while(!ready):
 *    if(a > b):
 *      a := a - b
 *    else if(b > a):
 *      b := b - a
 *    else:
 *      ready := True
*/
	int32_t a_i = a;
	int32_t b_i = b;
	bool rdy = false;
	while(!rdy)
	{
		if(a_i > b_i)
		{
			a_i = a_i - b_i;
		}
		else if(b_i > a_i)
		{
			b_i = b_i - a_i;
		}
		else
		{
			rdy = true;
		}
	}
	return a_i;
}
