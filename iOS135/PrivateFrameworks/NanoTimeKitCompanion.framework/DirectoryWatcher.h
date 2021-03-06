/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface DirectoryWatcher : NSObject {
    <DirectoryWatcherDelegate> * delegate;
    int  dirFD;
    struct __CFFileDescriptor { } * dirKQRef;
    int  kq;
}

@property (nonatomic) <DirectoryWatcherDelegate> *delegate;

+ (id)watchFolderWithPath:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (void)kqueueFired;
- (void)setDelegate:(id)arg1;
- (bool)startMonitoringDirectory:(id)arg1;

@end
