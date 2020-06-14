//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDMediaRemoteClient, MRDNowPlayingClient, MRDNowPlayingOriginClient, MRDNowPlayingPlayerClient, _MRNowPlayingPlayerPathProtobuf;

@interface MRDNowPlayingServerResult : NSObject
{
    _Bool _isActiveOrigin;
    _Bool _isActiveClient;
    _Bool _isActivePlayer;
    unsigned int _error;
    MRDMediaRemoteClient *_xpcClient;
    MRDNowPlayingPlayerClient *_playerClient;
    MRDNowPlayingClient *_nowPlayingClient;
    MRDNowPlayingOriginClient *_originClient;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRNowPlayingPlayerPathProtobuf *_unresolvedPlayerPath;
}

@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) _Bool isActivePlayer; // @synthesize isActivePlayer=_isActivePlayer;
@property(nonatomic) _Bool isActiveClient; // @synthesize isActiveClient=_isActiveClient;
@property(nonatomic) _Bool isActiveOrigin; // @synthesize isActiveOrigin=_isActiveOrigin;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *unresolvedPlayerPath; // @synthesize unresolvedPlayerPath=_unresolvedPlayerPath;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) MRDNowPlayingOriginClient *originClient; // @synthesize originClient=_originClient;
@property(retain, nonatomic) MRDNowPlayingClient *nowPlayingClient; // @synthesize nowPlayingClient=_nowPlayingClient;
@property(retain, nonatomic) MRDNowPlayingPlayerClient *playerClient; // @synthesize playerClient=_playerClient;
@property(retain, nonatomic) MRDMediaRemoteClient *xpcClient; // @synthesize xpcClient=_xpcClient;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isActivity;
@property(readonly, nonatomic) _Bool isLocalOrigin;
- (id)initWithUnresolvedPlayerPath:(id)arg1;

@end

