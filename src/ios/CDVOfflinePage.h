#import <Cordova/CDVPlugin.h>

#define kManifestLoadedNotification @"kManifestLoadedNotification"

#define kCDVOfflinePageWebViewDidStartLoad @"CDVOfflinePageWebViewDidStartLoad"
#define kCDVOfflinePageWebViewShouldStartLoadWithRequest @"CDVOfflinePageWebViewShouldStartLoadWithRequest"
#define kCDVOfflinePageWebViewDidFinishLoad @"CDVOfflinePageWebViewDidFinishLoad"
#define kCDVOfflinePageWebViewDidFailLoadWithError @"CDVOfflinePageWebViewDidFailLoadWithError"

@interface CVDWebViewNotificationDelegate : NSObject <UIWebViewDelegate>
    @property (nonatomic,retain) id<UIWebViewDelegate> wrappedDelegate;
@end

@interface CDVOfflinePage : CDVPlugin
{
    CVDWebViewNotificationDelegate *notificationDelegate;
    NSDictionary *manifest;
}

@property (nonatomic, strong, readonly) NSDictionary *manifest;

-(void) loadManifest:(CDVInvokedUrlCommand*)command;

-(void) getManifest:(CDVInvokedUrlCommand*)command;

-(void) enableOfflinePage:(CDVInvokedUrlCommand*)command;

-(void) disableOfflinePage:(CDVInvokedUrlCommand*)command;

@end
