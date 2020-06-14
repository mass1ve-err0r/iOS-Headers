//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAVItemQueueIdentifier-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPMediaItem, NSString;

@interface MPMediaQueryQueueFeederItemIdentifier : NSObject <MPAVItemQueueIdentifier, NSSecureCoding>
{
    unsigned long long _feederRevisionID;
    MPMediaItem *_mediaItem;
    unsigned long long _repeatIndex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long repeatIndex; // @synthesize repeatIndex=_repeatIndex;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) unsigned long long feederRevisionID; // @synthesize feederRevisionID=_feederRevisionID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithMediaItem:(id)arg1 repeatIndex:(unsigned long long)arg2 feederRevisionID:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

