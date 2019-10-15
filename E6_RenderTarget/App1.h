// Application.h
#ifndef _APP1_H
#define _APP1_H

// Includes
#include "DXF.h"	// include dxframework
#include "LightShader.h"
#include "TextureShader.h"
#include "NoTextureShader.h"

class App1 : public BaseApplication
{
public:

	App1();
	~App1();
	void init(HINSTANCE hinstance, HWND hwnd, int screenWidth, int screenHeight, Input* in, bool VSYNC, bool FULL_SCREEN);

	bool frame();

protected:
	bool render();
	void firstPass();
	void secondPass();
	void finalPass();
	void gui();

private:
	//Mesh
	CubeMesh* cubeMesh;
	OrthoMesh* orthoMesh;

	SphereMesh* sphereMesh;
	OrthoMesh* orthoMesh_2;

	//shader
	LightShader* lightShader;
	TextureShader* textureShader;
	NoTextureShader* noTextureShader;
	//texuture
	RenderTexture* renderTexture;
	RenderTexture* renderTexture2;

	Light* light;
	Camera* secondCamera;
	Camera* thirdCamera;

};

#endif