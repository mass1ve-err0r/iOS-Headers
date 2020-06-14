//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSOperation, WBSSiteMetadataRequest, WBSSiteMetadataResponse;
@protocol WBSSiteMetadataProviderDelegate;

@protocol WBSSiteMetadataProvider <NSObject>
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(_Bool)arg2;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(_Bool *)arg2;
- (_Bool)canHandleRequest:(WBSSiteMetadataRequest *)arg1;

@optional
@property(readonly, nonatomic) _Bool providesFavicons;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;
- (NSOperation *)operationForRequest:(WBSSiteMetadataRequest *)arg1;
@end

