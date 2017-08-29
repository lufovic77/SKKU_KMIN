splash.prototype = {

  loadScripts: function () {
  },

  loadBgm: function () {
  },

  loadImages: function () {
  },

  loadFonts: function () {
  },

  // The preload function then will call all of the previously defined functions:
  preload: function () {  // Add the loadingbar to the scene:
    var loadingBar = game.add.sprite(game.world.centerX, 400, "loading");
    // Tell phaser to use laodingBar as our preload progess bar
    this.load.setPreloadSprite(loadingBar);
    this.loadScripts();
    this.loadImages();
    this.loadFonts();
    this.loadBgm();
  },