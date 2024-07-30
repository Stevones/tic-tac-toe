#include "tictactoe.h"

Texture2D title;
Texture2D playButtonImage;
Button playButton;


void loadTitleResources() {
	title = loadImage("resources/title.png");
	playButtonImage = loadImage("resources/playButton.png");
	playButton.rect.x = screenWidth/2 - playButtonImage.width/2;
	playButton.rect.y = screenHeight/2;
	playButton.rect.width = 250;
	playButton.rect.height = 100;
	playButton.isButtonClicked = 0;
	playButton.image = playButtonImage;
}

void drawTitleScreen() {

    ClearBackground((Color){212, 244, 212, 255});
	DrawTexture(title, screenWidth/2 - title.width/2, screenHeight/20, WHITE);
	DrawTexture(playButton.image, playButton.rect.x, playButton.rect.y, WHITE);

}