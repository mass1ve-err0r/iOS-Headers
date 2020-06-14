//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSString;

@protocol RWIProtocolPageDomainHandler <NSObject>
- (void)archiveWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2;
- (void)snapshotRectWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(long long)arg7;
- (void)snapshotNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 nodeId:(int)arg3;
- (void)setCompositingBordersVisibleWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 visible:(_Bool)arg3;
- (void)getCompositingBordersVisibleWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(_Bool))arg2;
- (void)setForcedAppearanceWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 appearance:(long long)arg3;
- (void)setEmulatedMediaWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 media:(NSString *)arg3;
- (void)setShowPaintRectsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 result:(_Bool)arg3;
- (void)setShowRulersWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 result:(_Bool)arg3;
- (void)searchInResourcesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 text:(NSString *)arg3 caseSensitive:(_Bool *)arg4 isRegex:(_Bool *)arg5;
- (void)searchInResourceWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 frameId:(NSString *)arg3 url:(NSString *)arg4 query:(NSString *)arg5 caseSensitive:(_Bool *)arg6 isRegex:(_Bool *)arg7 requestId:(id *)arg8;
- (void)getResourceContentWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, _Bool))arg2 frameId:(NSString *)arg3 url:(NSString *)arg4;
- (void)getResourceTreeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolPageFrameResourceTree *))arg2;
- (void)deleteCookieWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 cookieName:(NSString *)arg3 url:(NSString *)arg4;
- (void)getCookiesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2;
- (void)navigateWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 url:(NSString *)arg3;
- (void)reloadWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 ignoreCache:(_Bool *)arg3 revalidateAllResources:(_Bool *)arg4;
- (void)disableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)enableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
@end

