 
//	init game instance, add state
var game;
game=new Phaser.Game(1280, 750, Phaser.AUTO, '');

game.state.add('Menu', Menu);
game.state.add('World', World);

 
game.state.start('Menu');