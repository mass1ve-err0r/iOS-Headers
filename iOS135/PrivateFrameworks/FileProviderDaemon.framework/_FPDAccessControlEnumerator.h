/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface _FPDAccessControlEnumerator : NSObject <FPXEnumerator> {
    NSNumber * _bundleKey;
    NSNumber * _limit;
    FPDAccessControlServicer * _servicer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletion:(id /* block */)arg1;
- (void)enumerateChangesFromToken:(id)arg1 reply:(id /* block */)arg2;
- (void)enumerateItemsFromPage:(id)arg1 reply:(id /* block */)arg2;
- (void)enumeratorBecameFrontmost:(bool)arg1 inWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchOnDB:(id)arg1 withOffset:(unsigned long long)arg2;
- (id)initWithBundleIdentifier:(id)arg1 servicer:(id)arg2;
- (void)invalidate;
- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)arg1;

@end