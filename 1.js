// Deforestation Infographic

// Title: The Devastating Effects of Deforestation

// Define canvas

// Background
ctx.fillStyle = '#ECEFF4';
ctx.fillRect(0, 0, 512, 512);

// Trees
ctx.beginPath();
ctx.fillStyle = '#81A1C1';
ctx.moveTo(128, 512);
ctx.lineTo(128, 384);
ctx.lineTo(96, 384);
ctx.lineTo(96, 256);
ctx.lineTo(64, 256);
ctx.lineTo(64, 128);
ctx.lineTo(32, 128);
ctx.lineTo(32, 0);
ctx.lineTo(384, 0);
ctx.lineTo(384, 128);
ctx.lineTo(352, 128);
ctx.lineTo(352, 256);
ctx.lineTo(320, 256);
ctx.lineTo(320, 384);
ctx.lineTo(288, 384);
ctx.lineTo(288, 512);
ctx.closePath();
ctx.fill();

// Text
ctx.fillStyle = '#2E3440';
ctx.font = 'bold 32px Arial';
ctx.fillText('Deforestation', 160, 50);

ctx.fillStyle = '#4C566A';
ctx.font = '24px Arial';
ctx.fillText('One third of the world\'s forests have been lost due to deforestation.', 50, 100);
ctx.fillText('10 million hectares of forest are lost each year to make more farmland and settlement areas.', 50, 150);
ctx.fillText('In the last 50 years, animal habitats have been destroyed, leading to the loss of countless species.', 50, 200);

// Images
const treeImg = new Image();
ctx.drawImage(treeImg, 350, 340, 100, 150);
};

const animalImg = new Image();
ctx.drawImage(animalImg, 50, 300, 150, 150);
};

// Credits
ctx.fillStyle = '#4C566A';
ctx.font = 'italic 16px Arial';
ctx.fillText('Images from Pixabay.com', 350, 500);

// Funny comment
// Why did the tree go to the dentist? To get a root canal!