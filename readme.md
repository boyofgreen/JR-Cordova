<!---
 license: MIT License
-->

### Offline Feature
The plugin implements a basic offline feature that will show an offline page whenever network connectivity is lost. By default, the page shows a suitable message alerting the user about the loss of connectivity. To customize the offline experience, a page named **offline.html** can be placed in the **www** folder of the application and it will be used instead.

1. To test the offline feature, interrupt the network connection to show the offline page and reconnect it to hide it. 

	> **Note:** The procedure for setting offline mode varies depending on whether you are testing on an actual device or an emulator. In devices, you can simply set the device to airplane mode. In the case of simulators there is no single method. For example, in [Ripple](http://ripple.incubator.apache.org/), you can simulate a network disconnection by setting the Connection Type to 'none' under Network Status. On the other hand, for the iOS Simulator, you may need to physically disconnect the network cable or turn off the WiFi connection of the host machine.

1. Optionally, replace the default offline UI by adding a new page with the content to be shown while in offline mode. Name the page **offline.html** and place it in the **www** folder of the project.

## Methods
Even though the following methods are available, it should be pointed out that calling them is not required as the plugin will provide most of its functionality by simply embedding a W3C manifest in the application package.

### enableOfflinePage
Enables offline page support.

`offlinepage.enableOfflinePage()`

### disableOfflinePage
Disables offline page support.

`offlinepage.disableOfflinePage()`

## Supported Platforms
iOS
Android
