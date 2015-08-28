var offline = {
  enableOfflinePage : function () {
    cordova.exec(undefined, undefined, "OfflinePage", "enableOfflinePage", []);
  },
  disableOfflinePage : function () {
    cordova.exec(undefined, undefined, "OfflinePage", "disableOfflinePage", []);
  }
}

module.exports = offline;
