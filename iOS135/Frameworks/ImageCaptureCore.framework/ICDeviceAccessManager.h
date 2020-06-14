/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICDeviceAccessManager : NSObject {
    NSObject<OS_dispatch_queue> * _deviceAccessQueue;
    struct sqlite3 { } * _externalMediaAccessDB;
}

@property NSObject<OS_dispatch_queue> *deviceAccessQueue;

+ (id)sharedAccessManager;

- (void)addApplicationWithBundleIdentifier:(id)arg1 whitelist:(bool)arg2;
- (void)addControlApplicationWithBundleIdentifier:(id)arg1 whitelisted:(bool)arg2;
- (bool)applicationWithBundleIdentifierHasAccess:(id)arg1 enabled:(bool*)arg2;
- (id)bundleIdentifiersAccessingExternalCameras;
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;
- (id)bundleIdentifiersControllingExternalCameras;
- (bool)controlApplicationWithBundleIdentifierHasAccess:(id)arg1;
- (void)dealloc;
- (id)deviceAccessQueue;
- (void)displayAlertForApplication:(id)arg1 notificationDict:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)init;
- (bool)internalApplicationWithBundleIdentifierHasAccess:(id)arg1;
- (void)revokeApplicationWithBundleIdentifier:(id)arg1;
- (void)revokeControlApplicationWithBundleIdentifier:(id)arg1;
- (void)setDeviceAccessQueue:(id)arg1;
- (void)updateApplicationWithBundleIdentifier:(id)arg1 withStatus:(bool)arg2;
- (bool)validateBundleIdentifier:(id)arg1 withNotification:(id)arg2;
- (bool)validateBundleIdentifierInstallDate:(id)arg1 control:(bool)arg2;
- (bool)validateControlApplicationBundleIdentifier:(id)arg1 withNotification:(id)arg2;

@end