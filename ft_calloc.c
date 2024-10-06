#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
    size_t		total_size = nitems * size;
	void		*ptr;
    
    if (nitems == 0 || size == 0 || total_size / nitems != size)
	{
        return NULL;
    }

    ptr = malloc(total_size);

    if (ptr == NULL) 
    {
        return NULL;
    }
    ft_memset(ptr, 0, total_size);

    return (ptr);
}