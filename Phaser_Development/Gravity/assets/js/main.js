 
//	init game instance, add state
var game;
game=new Phaser.Game(1280, 750, Phaser.AUTO, '');

game.state.add('Game', Game);
game.state.add('GameMenu', GameMenu);


game.state.start('GameMenu');