//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BLTLightsAndSirensReplyInfo : NSObject
{
    _Bool _replySent;
    _Bool _didLogAggd;
    CDUnknownBlockType _reply;
    unsigned long long _didPlayLightsAndSirens;
    NSDate *_bulletinPublicationDate;
    NSDate *_creation;
    NSString *_publisherMatchID;
    NSString *_sectionID;
}

@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(copy, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(readonly, nonatomic) NSDate *creation; // @synthesize creation=_creation;
@property(nonatomic) _Bool didLogAggd; // @synthesize didLogAggd=_didLogAggd;
@property(retain, nonatomic) NSDate *bulletinPublicationDate; // @synthesize bulletinPublicationDate=_bulletinPublicationDate;
@property(nonatomic) unsigned long long didPlayLightsAndSirens; // @synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens;
@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(readonly, nonatomic) _Bool replySent; // @synthesize replySent=_replySent;
- (void).cxx_destruct;
- (_Bool)sendReply;
- (_Bool)hasExpired;
- (id)init;

@end

