//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlaybackCoordinatorFactory-Protocol.h>

@class NSString;
@protocol SVPlayerItemLoaderProviding, SVPlayerProviding;

@interface SVPlaybackCoordinatorFactory : NSObject <SVPlaybackCoordinatorFactory>
{
    id <SVPlayerProviding> _playerProvider;
    id <SVPlayerItemLoaderProviding> _playerItemLoaderProvider;
}

@property(readonly, nonatomic) id <SVPlayerItemLoaderProviding> playerItemLoaderProvider; // @synthesize playerItemLoaderProvider=_playerItemLoaderProvider;
@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
- (void).cxx_destruct;
- (id)createPlaybackCoordinatorForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 playerItemLoaderProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
