#include "tictactoe.h"

Texture2D title;
Texture2D playButtonImage;
Button playButton;


void loadTitleResources() {

	title = loadImage("resources/title.png");
	playButtonImage = loadImage("resources/playButton.png");
	playButton.x = screenWidth/2;
	playButton.y = screenHeight/2;
	playButton.isButtonClicked = 0;
	playButton.image = playButtonImage;
	playButton.scaledImage = playButton.image;
	playButton.scaledImage.width = playButton.scaledImage.width * 1.5;
	playButton.scaledImage.height = playButton.scaledImage.height * 1.5;
	playButton.isHovering = 0;
	
}

void drawTitleScreen() {



    ClearBackground((Color){212, 244, 212, 255});
	DrawTexture(title, screenWidth/2 - title.width/2, screenHeight/20, WHITE);

	int mouseX = GetMouseX();
	int mouseY = GetMouseY();



	if (mouseX > playButton.x - playButton.image.width/2 && mouseX < playButton.x + playButton.image.width/2 && mouseY > playButton.y && mouseY < playButton.y + playButton.image.height) {

			DrawTexture(playButton.scaledImage, playButton.x - playButton.scaledImage.width/2, playButton.y, WHITE);
		
	}
	else {

			DrawTexture(playButton.image, playButton.x - playButton.image.width/2, playButton.y, WHITE);


}

}
