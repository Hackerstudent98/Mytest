#include <stdio.h>
#include <stdlib.h>
#define MAXKYTU 30
#define MAXBOPHIM 50
struct bophim
{
	char ten_phim[MAXKYTU];
	char tdao_dien[MAXKYTU];
	char tnam_dien_vien[MAXKYTU];
	char tnu_dien_vien[MAXKYTU];
	unsigned int namsanxuat;
	char hang_san_xuat[MAXKYTU];
};

void xuly_ten(char str[], int limit)
{
	char c;
	int i = 0;
	while (--limit > 0 && (c = getchar()) != EOF && c != '\n')
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';

}
void nhapvideo(struct bophim video)
{
	xuly_ten(video.ten_phim, MAXKYTU);
}
void nhapbophim(struct bophim video[], int count)
{
	int i = 0;
	for (; i < count; i++)
		nhapvideo(video[i]);
}
void xuat(struct bophim video)
{
	printf("%s ", video.ten_phim);
}
int main()
{

	struct bophim video[MAXBOPHIM];

	getchar();
	return 0;
}
