#include "map.h"
#include <Windows.h>

//���Ƴ�ʼ��ͼ
void Map::PrintInitmap()
{
	for (auto& point : initmap)
	{
		point.Print();
		//����Sleep������Ӫ�춯��Ч��
		Sleep(10);
	}
}