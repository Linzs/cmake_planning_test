#pragma once

class PNC_Map
{
public:
	PNC_Map(void);
	~PNC_Map(void);

	void Init(void);
	void Update(void);
	void Draw(void);

	void SetMap(int map);
	void SetMap(int map, int x, int y);
	void SetMap(int map, int x, int y, int z);
	void SetMap(int map, int x, int y, int z, int w);

    // 例子
    void mapInfo();
};