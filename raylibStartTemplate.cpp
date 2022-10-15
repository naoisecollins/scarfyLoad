#include "raylib.h"
int main(){
 const int windowWidth{500};
 const int windowHeight{500};
InitWindow(windowWidth,windowHeight,"My Window");

Texture2D scarfy = LoadTexture("resources/scarfy.png");
Texture2D scarfy2 = LoadTexture("resources/scarfy2.png");

Rectangle scarfyRec;
scarfyRec.width = scarfy.width/6;
scarfyRec.height = scarfy.height;
scarfyRec.x = 0;
scarfyRec.y = 0; 
Vector2 scarfyPos;
scarfyPos.x = windowWidth/2 - scarfyRec.width/2;
scarfyPos.y = windowHeight - scarfyRec.height;

Rectangle scarfyRec2;
scarfyRec2.width = scarfy2.width;
scarfyRec2.height = scarfy2.height;
scarfyRec2.x = 0;
scarfyRec2.y = 0; 
Vector2 scarfyPos2;
scarfyPos2.x = windowWidth/2 - scarfyRec2.width/2;
scarfyPos2.y = windowHeight - scarfyRec2.height;

SetTargetFPS(60);  
	while(!WindowShouldClose()){
	
BeginDrawing();
ClearBackground(WHITE); 
DrawTextureRec(scarfy2,scarfyRec2,scarfyPos2,WHITE);
DrawTextureRec(scarfy,scarfyRec,scarfyPos,WHITE);
EndDrawing();
}
UnloadTexture(scarfy);
CloseWindow();
}