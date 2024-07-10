#include <stdio.h>
#include <stdlib.h>

struct particle
{
	int x;
	int y;
	int vx;
	int vy;
}


struct particle* alloc_particle()
{
	struct particle* res = malloc(sizeof(struct particle));
	res.x = 0;
	res.y = 0;
	res.vx = 0;
	res.vy = 0;
	return res;
}

struct particle* getParticle(int x,int y)
{
	struct particle* res = alloc_particle();
	res->x = x;
	res->y = y;
	return res;
}

void free_particle(struct particle* a)
{
	free(a);
}

void printParticle(struct particle* a)
{
	printf("Particle :\n");
	printf("	x = %d\n",a->x);
	printf("	y = %d\n",a->y);
	printf("	vx = %d\n",a->vx);
	printf("	vy = %d\n",a->vy);
}

void updateParticle(struct particle* a)
{
	a->x += a->vx;
	a->y += a->vy;
}
