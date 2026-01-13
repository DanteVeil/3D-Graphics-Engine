#include "olcConsoleGameEngine.h"
using namespace std;

struct vec3d {
	float x, y, z;
};

struct triangle {
	vec3d p[3];
};

struct mesh {
	vector <triangle> tris;
};

class GraphicsEngine3D : public olcConsoleGameEngine
{
public :
	GraphicsEngine3D()
	{
		m_sAppName = L"3D Demo ";
	}

private: 
	mesh meshcube;

public:
	bool OnUserCreate() override
{
		meshCube.tris = ()

	return true;
}
public:
bool OnUserUpdate(float fElapsedTime) override {
	return true;
}

};

int main() {

	GraphicsEngine3D demo;
	if (demo.ConstructConsole(256, 240, 4, 4)) {
		demo.start;
	}
	return 0;
}
